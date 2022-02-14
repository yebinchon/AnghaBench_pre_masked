
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int priority; scalar_t__ ip_summed; int len; } ;
struct TYPE_3__ {int tx_tso_err; int tx_l2l3l4_err; int tx_l4_proto_err; int tx_vlan_err; } ;
struct hns3_enet_ring {int syncp; TYPE_1__ stats; } ;
struct TYPE_4__ {void* outer_vlan_tag; void* vlan_tag; void* mss; void* paylen; void* type_cs_vlan_tso_len; void* ol_type_vlan_len_msec; } ;
struct hns3_desc {TYPE_2__ tx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int *,int *) ;
 int FUNC_3 (struct hns3_enet_ring*,struct sk_buff*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int *,int *) ;
 int FUNC_6 (struct sk_buff*,int *,int*,int *) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct hns3_enet_ring *VAR_7,
         struct sk_buff *VAR_8, struct hns3_desc *VAR_9)
{
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12 = VAR_8->len;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;
 u16 VAR_15 = 0;
 int VAR_16;

 VAR_16 = FUNC_3(VAR_7, VAR_8);
 if (FUNC_11(VAR_16 < 0)) {
  FUNC_9(&VAR_7->syncp);
  VAR_7->stats.tx_vlan_err++;
  FUNC_10(&VAR_7->syncp);
  return VAR_16;
 } else if (VAR_16 == VAR_1) {
  VAR_13 = FUNC_8(VAR_8);
  VAR_13 |= (VAR_8->priority << VAR_6) &
    VAR_5;
  FUNC_4(VAR_11, VAR_4, 1);
 } else if (VAR_16 == VAR_2) {
  VAR_14 = FUNC_8(VAR_8);
  VAR_14 |= (VAR_8->priority << VAR_6) &
    VAR_5;
  FUNC_4(VAR_10, VAR_3,
          1);
 }

 if (VAR_8->ip_summed == VAR_0) {
  u8 VAR_17, VAR_18;

  FUNC_7(VAR_8);

  VAR_16 = FUNC_2(VAR_8, &VAR_17, &VAR_18);
  if (FUNC_11(VAR_16)) {
   FUNC_9(&VAR_7->syncp);
   VAR_7->stats.tx_l4_proto_err++;
   FUNC_10(&VAR_7->syncp);
   return VAR_16;
  }

  VAR_16 = FUNC_5(VAR_8, VAR_17, VAR_18,
          &VAR_11,
          &VAR_10);
  if (FUNC_11(VAR_16)) {
   FUNC_9(&VAR_7->syncp);
   VAR_7->stats.tx_l2l3l4_err++;
   FUNC_10(&VAR_7->syncp);
   return VAR_16;
  }

  VAR_16 = FUNC_6(VAR_8, &VAR_12, &VAR_15,
       &VAR_11);
  if (FUNC_11(VAR_16)) {
   FUNC_9(&VAR_7->syncp);
   VAR_7->stats.tx_tso_err++;
   FUNC_10(&VAR_7->syncp);
   return VAR_16;
  }
 }


 VAR_9->tx.ol_type_vlan_len_msec =
  FUNC_1(VAR_10);
 VAR_9->tx.type_cs_vlan_tso_len = FUNC_1(VAR_11);
 VAR_9->tx.paylen = FUNC_1(VAR_12);
 VAR_9->tx.mss = FUNC_0(VAR_15);
 VAR_9->tx.vlan_tag = FUNC_0(VAR_13);
 VAR_9->tx.outer_vlan_tag = FUNC_0(VAR_14);

 return 0;
}
