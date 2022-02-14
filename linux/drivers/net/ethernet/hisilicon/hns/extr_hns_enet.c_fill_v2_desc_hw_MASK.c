
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ protocol; scalar_t__ len; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
struct iphdr {scalar_t__ protocol; } ;
struct hnae_ring {size_t next_to_use; TYPE_2__* q; struct hnae_desc_cb* desc_cb; struct hnae_desc* desc; } ;
struct hnae_desc_cb {int length; int type; int dma; void* priv; } ;
struct TYPE_7__ {void* ra_ri_cs_fe_vld; void* bn_pid; void* paylen; void* l4_len; void* mss; void* tse_vlan_snap_v6_sctp_nth; void* ip_offset; void* send_size; } ;
struct hnae_desc {TYPE_3__ tx; int addr; } ;
typedef enum hns_desc_type { ____Placeholder_hns_desc_type } hns_desc_type ;
typedef int dma_addr_t ;
typedef scalar_t__ __be16 ;
struct TYPE_8__ {scalar_t__ gso_size; } ;
struct TYPE_6__ {TYPE_1__* handle; } ;
struct TYPE_5__ {int dport_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_16 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (void*,int ,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_7 (struct sk_buff*) ;
 int VAR_17 ;
 int FUNC_8 (struct hnae_ring*,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 TYPE_4__* FUNC_12 (struct sk_buff*) ;
 void* FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_15(struct hnae_ring *VAR_18, void *VAR_19, int VAR_20,
       int VAR_21, dma_addr_t VAR_22, int VAR_23,
       int VAR_24, enum hns_desc_type VAR_25, int VAR_26)
{
 struct hnae_desc *VAR_27 = &VAR_18->desc[VAR_18->next_to_use];
 struct hnae_desc_cb *VAR_28 = &VAR_18->desc_cb[VAR_18->next_to_use];
 struct iphdr *VAR_29;
 struct ipv6hdr *VAR_30;
 struct sk_buff *VAR_31;
 __be16 VAR_32;
 u8 VAR_33 = 0;
 u8 VAR_34 = 0;
 u8 VAR_35 = 0;
 u8 VAR_36 = 0;
 u16 VAR_37 = 0;
 u8 VAR_38 = 0;
 u16 VAR_39 = 0;

 VAR_28->priv = VAR_19;
 VAR_28->length = VAR_20;
 VAR_28->dma = VAR_22;
 VAR_28->type = VAR_25;

 VAR_27->addr = FUNC_2(VAR_22);
 VAR_27->tx.send_size = FUNC_1((u16)VAR_21);


 FUNC_3(VAR_34, VAR_14, 1);
 FUNC_4(VAR_33, VAR_6, 0, VAR_24 - 1);


 FUNC_4(VAR_33, VAR_11,
         VAR_12, VAR_18->q->handle->dport_id);

 if (VAR_25 == VAR_1) {
  VAR_31 = (struct sk_buff *)VAR_19;

  if (VAR_31->ip_summed == VAR_0) {
   FUNC_11(VAR_31);
   VAR_32 = VAR_31->protocol;
   VAR_35 = VAR_2;

   if (VAR_32 == FUNC_5(VAR_3)) {
    VAR_35 += VAR_16;
    VAR_32 = FUNC_14(VAR_31);
    VAR_31->protocol = VAR_32;
   }

   if (VAR_31->protocol == FUNC_5(VAR_4)) {
    VAR_29 = FUNC_6(VAR_31);
    FUNC_3(VAR_34, VAR_9, 1);
    FUNC_3(VAR_34, VAR_10, 1);


    if (VAR_29->protocol == VAR_15 &&
        FUNC_9(VAR_31)) {
     FUNC_3(VAR_36,
           VAR_13, 1);
     VAR_38 = FUNC_13(VAR_31);
     VAR_37 = FUNC_12(VAR_31)->gso_size;
     VAR_39 = VAR_31->len - FUNC_0(VAR_31);
    }
   } else if (VAR_31->protocol == FUNC_5(VAR_5)) {
    FUNC_3(VAR_36, VAR_8, 1);
    VAR_30 = FUNC_7(VAR_31);
    FUNC_3(VAR_34, VAR_10, 1);


    if (VAR_30->nexthdr == VAR_15 &&
        FUNC_9(VAR_31) && FUNC_10(VAR_31)) {
     FUNC_3(VAR_36,
           VAR_13, 1);
     VAR_38 = FUNC_13(VAR_31);
     VAR_37 = FUNC_12(VAR_31)->gso_size;
     VAR_39 = VAR_31->len - FUNC_0(VAR_31);
    }
   }
   VAR_27->tx.ip_offset = VAR_35;
   VAR_27->tx.tse_vlan_snap_v6_sctp_nth = VAR_36;
   VAR_27->tx.mss = FUNC_1(VAR_37);
   VAR_27->tx.l4_len = VAR_38;
   VAR_27->tx.paylen = FUNC_1(VAR_39);
  }
 }

 FUNC_3(VAR_34, VAR_7, VAR_23);

 VAR_27->tx.bn_pid = VAR_33;
 VAR_27->tx.ra_ri_cs_fe_vld = VAR_34;

 FUNC_8(VAR_18, VAR_17);
}
