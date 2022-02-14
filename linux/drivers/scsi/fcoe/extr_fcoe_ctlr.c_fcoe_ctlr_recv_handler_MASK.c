
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct fip_header {scalar_t__ fip_subcode; int fip_dl_len; int fip_ver; int fip_op; } ;
struct fcoe_ctlr {scalar_t__ mode; int state; int fip_resp; int ctlr_mutex; scalar_t__ map_dest; int ctl_src_addr; } ;
struct ethhdr {int h_dest; } ;
typedef enum fip_state { ____Placeholder_fip_state } fip_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fcoe_ctlr*,char*) ;
 struct ethhdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct fcoe_ctlr*,struct sk_buff*) ;
 int FUNC_5 (struct fcoe_ctlr*,struct sk_buff*) ;
 int FUNC_6 (struct fcoe_ctlr*,struct sk_buff*) ;
 int FUNC_7 (struct fcoe_ctlr*,int) ;
 int FUNC_8 (struct fcoe_ctlr*,struct sk_buff*) ;
 int FUNC_9 (struct fcoe_ctlr*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct fcoe_ctlr *VAR_17, struct sk_buff *VAR_18)
{
 struct fip_header *VAR_19;
 struct ethhdr *VAR_20;
 enum fip_state VAR_21;
 bool VAR_22 = 0;
 u16 VAR_23;
 u8 VAR_24;

 if (FUNC_14(VAR_18))
  goto drop;
 if (VAR_18->len < sizeof(*VAR_19))
  goto drop;
 VAR_20 = FUNC_2(VAR_18);
 if (VAR_17->mode == VAR_1) {
  if (!FUNC_3(VAR_20->h_dest, VAR_17->ctl_src_addr) &&
      !FUNC_3(VAR_20->h_dest, VAR_16) &&
      !FUNC_3(VAR_20->h_dest, VAR_15))
   goto drop;
 } else if (!FUNC_3(VAR_20->h_dest, VAR_17->ctl_src_addr) &&
     !FUNC_3(VAR_20->h_dest, VAR_14))
  goto drop;
 VAR_19 = (struct fip_header *)VAR_18->data;
 VAR_23 = FUNC_13(VAR_19->fip_op);
 VAR_24 = VAR_19->fip_subcode;

 if (FUNC_0(VAR_19->fip_ver) != VAR_13)
  goto drop;
 if (FUNC_13(VAR_19->fip_dl_len) * VAR_0 + sizeof(*VAR_19) > VAR_18->len)
  goto drop;

 FUNC_11(&VAR_17->ctlr_mutex);
 VAR_21 = VAR_17->state;
 if (VAR_21 == VAR_9) {
  VAR_17->map_dest = 0;
  FUNC_7(VAR_17, VAR_10);
  VAR_21 = VAR_10;
  FUNC_1(VAR_17, "Using FIP mode\n");
 }
 VAR_22 = VAR_17->fip_resp;
 FUNC_12(&VAR_17->ctlr_mutex);

 if (VAR_17->mode == VAR_1 && VAR_23 == VAR_6)
  return FUNC_9(VAR_17, VAR_18);

 if (VAR_22 && VAR_23 == VAR_5) {
  FUNC_1(VAR_17, "fip vlan discovery\n");
  return FUNC_8(VAR_17, VAR_18);
 }

 if (VAR_21 != VAR_10 && VAR_21 != VAR_12 &&
     VAR_21 != VAR_11)
  goto drop;

 if (VAR_23 == VAR_4) {
  FUNC_6(VAR_17, VAR_18);
  return 0;
 }

 if (VAR_21 != VAR_10)
  goto drop;

 if (VAR_23 == VAR_3 && VAR_24 == VAR_7)
  FUNC_4(VAR_17, VAR_18);
 else if (VAR_23 == VAR_2 && VAR_24 == VAR_8)
  FUNC_5(VAR_17, VAR_18);
 FUNC_10(VAR_18);
 return 0;
drop:
 FUNC_10(VAR_18);
 return -1;
}
