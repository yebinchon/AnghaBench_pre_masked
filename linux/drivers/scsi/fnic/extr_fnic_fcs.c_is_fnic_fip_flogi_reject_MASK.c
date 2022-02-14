
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct fip_header {scalar_t__ fip_subcode; int fip_dl_len; int fip_op; } ;
struct fip_encaps {int dummy; } ;
struct fip_desc {size_t fip_dlen; scalar_t__ fip_dtype; } ;
struct fcoe_ctlr {struct fc_lport* lp; } ;
struct fc_lport {int host; } ;
struct fc_frame_header {int dummy; } ;
typedef enum fip_desc_type { ____Placeholder_fip_desc_type } fip_desc_type ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_3(struct fcoe_ctlr *VAR_6,
      struct sk_buff *VAR_7)
{
 struct fc_lport *VAR_8 = VAR_6->lp;
 struct fip_header *VAR_9;
 struct fc_frame_header *VAR_10 = ((void*)0);
 struct fip_desc *VAR_11;
 struct fip_encaps *VAR_12;
 enum fip_desc_type VAR_13 = 0;
 u16 VAR_14;
 u8 VAR_15;
 u8 VAR_16;

 size_t VAR_17 = 0;
 size_t VAR_18;
 size_t VAR_19 = 0;

 if (FUNC_2(VAR_7))
  return 0;

 if (VAR_7->len < sizeof(*VAR_9))
  return 0;

 VAR_9 = (struct fip_header *)VAR_7->data;
 VAR_14 = FUNC_0(VAR_9->fip_op);
 VAR_16 = VAR_9->fip_subcode;

 if (VAR_14 != VAR_3)
  return 0;

 if (VAR_16 != VAR_4)
  return 0;

 VAR_18 = FUNC_0(VAR_9->fip_dl_len) * 4;
 if (VAR_18 + sizeof(*VAR_9) > VAR_7->len)
  return 0;

 VAR_11 = (struct fip_desc *)(VAR_9 + 1);
 VAR_19 = VAR_11->fip_dlen * VAR_1;

 if (VAR_11->fip_dtype == VAR_2) {

  if (VAR_19 < sizeof(*VAR_12) + sizeof(*VAR_10) + 1)
   return 0;

  VAR_17 = VAR_19 - sizeof(*VAR_12);
  VAR_12 = (struct fip_encaps *)VAR_11;
  VAR_10 = (struct fc_frame_header *)(VAR_12 + 1);
  VAR_13 = VAR_11->fip_dtype;

  if (!VAR_10)
   return 0;





  VAR_15 = *(u8 *)(VAR_10 + 1);
  if (VAR_15 == VAR_0) {
   FUNC_1(VAR_5, VAR_8->host,
      "Flogi Request Rejected by Switch\n");
   return 1;
  }
  FUNC_1(VAR_5, VAR_8->host,
    "Flogi Request Accepted by Switch\n");
 }
 return 0;
}
