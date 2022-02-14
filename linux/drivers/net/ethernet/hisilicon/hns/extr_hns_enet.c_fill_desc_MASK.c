
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ protocol; } ;
struct hnae_ring {size_t next_to_use; struct hnae_desc_cb* desc_cb; struct hnae_desc* desc; } ;
struct hnae_desc_cb {int length; int type; int dma; void* priv; } ;
struct TYPE_2__ {int flag_ipoffset; void* asid_bufnum_pid; void* send_size; } ;
struct hnae_desc {TYPE_1__ tx; int addr; } ;
typedef enum hns_desc_type { ____Placeholder_hns_desc_type } hns_desc_type ;
typedef int dma_addr_t ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_13 ;
 int FUNC_4 (struct hnae_ring*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct hnae_ring *VAR_14, void *VAR_15,
        int VAR_16, dma_addr_t VAR_17, int VAR_18,
        int VAR_19, enum hns_desc_type VAR_20, int VAR_21)
{
 struct hnae_desc *VAR_22 = &VAR_14->desc[VAR_14->next_to_use];
 struct hnae_desc_cb *VAR_23 = &VAR_14->desc_cb[VAR_14->next_to_use];
 struct sk_buff *VAR_24;
 __be16 VAR_25;
 u32 VAR_26;
 u32 VAR_27 = 0;
 u32 VAR_28 = 0;

 VAR_23->priv = VAR_15;
 VAR_23->length = VAR_16;
 VAR_23->dma = VAR_17;
 VAR_23->type = VAR_20;

 VAR_22->addr = FUNC_2(VAR_17);
 VAR_22->tx.send_size = FUNC_0((u16)VAR_16);


 VAR_28 |= 1 << VAR_11;

 VAR_27 |= VAR_19 << VAR_6;

 if (VAR_20 == VAR_1) {
  VAR_24 = (struct sk_buff *)VAR_15;

  if (VAR_24->ip_summed == VAR_0) {
   VAR_25 = VAR_24->protocol;
   VAR_26 = VAR_2;


   if (VAR_25 == FUNC_3(VAR_3)) {
    VAR_26 += VAR_12;
    VAR_25 = FUNC_5(VAR_24);
    VAR_24->protocol = VAR_25;
   }

   if (VAR_24->protocol == FUNC_3(VAR_4)) {
    VAR_28 |= 1 << VAR_9;

    VAR_28 |= 1 << VAR_10;

   } else if (VAR_24->protocol == FUNC_3(VAR_5)) {

    VAR_28 |= 1 << VAR_10;
   }

   VAR_28 |= VAR_26 << VAR_8;
  }
 }

 VAR_28 |= VAR_18 << VAR_7;

 VAR_22->tx.asid_bufnum_pid = FUNC_0(VAR_27);
 VAR_22->tx.flag_ipoffset = FUNC_1(VAR_28);

 FUNC_4(VAR_14, VAR_13);
}
