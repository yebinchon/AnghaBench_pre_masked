
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef unsigned int u16 ;
struct sk_buff {unsigned int len; int encapsulation; unsigned int data; } ;
struct ionic_txq_sg_elem {int len; int addr; } ;
struct ionic_txq_desc {int dummy; } ;
struct ionic_tx_stats {int tso; int bytes; int pkts; int frags; } ;
struct ionic_queue {struct ionic_desc_info* head; TYPE_2__* lif; } ;
struct ionic_desc_info {scalar_t__ desc; struct ionic_desc_info* next; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {unsigned int gso_size; unsigned int nr_frags; int gso_type; int * frags; } ;
struct TYPE_5__ {TYPE_1__* ionic; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ionic_queue*,struct ionic_desc_info*,int *,int *) ;
 int FUNC_5 (struct ionic_queue*,int *,unsigned int,unsigned int) ;
 int FUNC_6 (struct ionic_queue*,unsigned int,unsigned int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct ionic_txq_desc* FUNC_9 (struct ionic_queue*,struct ionic_txq_sg_elem**) ;
 int FUNC_10 (struct ionic_queue*,struct ionic_txq_desc*,struct sk_buff*,int ,scalar_t__,unsigned int,unsigned int,unsigned int,int,unsigned int,int,int,int) ;
 unsigned int FUNC_11 (unsigned int,unsigned int) ;
 struct ionic_tx_stats* FUNC_12 (struct ionic_queue*) ;
 unsigned int FUNC_13 (int *) ;
 unsigned int FUNC_14 (struct sk_buff*) ;
 unsigned int FUNC_15 (struct sk_buff*) ;
 TYPE_3__* FUNC_16 (struct sk_buff*) ;
 unsigned int FUNC_17 (struct sk_buff*) ;
 unsigned int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 unsigned int FUNC_20 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_21(struct ionic_queue *VAR_3, struct sk_buff *VAR_4)
{
 struct ionic_tx_stats *VAR_5 = FUNC_12(VAR_3);
 struct ionic_desc_info *VAR_6 = VAR_3->head;
 struct device *VAR_7 = VAR_3->lif->ionic->dev;
 struct ionic_desc_info *VAR_8 = VAR_6;
 struct ionic_txq_sg_elem *VAR_9;
 struct ionic_txq_desc *VAR_10;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13;
 dma_addr_t VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 u64 VAR_18 = 0;
 u64 VAR_19 = 0;
 unsigned int VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 skb_frag_t *VAR_23;
 bool VAR_24, VAR_25;
 bool VAR_26;
 bool VAR_27;
 u16 VAR_28;
 u8 VAR_29;
 u16 VAR_30;
 bool VAR_31;
 int VAR_32;

 VAR_22 = FUNC_16(VAR_4)->gso_size;
 VAR_16 = FUNC_16(VAR_4)->nr_frags;
 VAR_13 = VAR_4->len - FUNC_14(VAR_4);
 VAR_26 = (FUNC_16(VAR_4)->gso_type & VAR_1) ||
       (FUNC_16(VAR_4)->gso_type & VAR_2);
 VAR_27 = !!FUNC_19(VAR_4);
 VAR_30 = FUNC_18(VAR_4);
 VAR_31 = VAR_4->encapsulation;






 if (VAR_31)
  VAR_32 = FUNC_7(VAR_4);
 else
  VAR_32 = FUNC_8(VAR_4);
 if (VAR_32)
  return VAR_32;

 if (VAR_31)
  VAR_15 = FUNC_15(VAR_4) - VAR_4->data +
    FUNC_3(VAR_4);
 else
  VAR_15 = FUNC_17(VAR_4) + FUNC_20(VAR_4);

 VAR_17 = VAR_15 + VAR_22;
 VAR_20 = FUNC_14(VAR_4);

 VAR_10 = FUNC_9(VAR_3, &VAR_9);
 VAR_24 = 1;



 while (VAR_20 > 0) {
  VAR_21 = FUNC_11(VAR_17, VAR_20);
  VAR_11 = VAR_17 - VAR_21;
  VAR_14 = FUNC_6(VAR_3, VAR_4->data + VAR_12, VAR_21);
  if (FUNC_2(VAR_7, VAR_14))
   goto err_out_abort;
  VAR_28 = VAR_21;
  VAR_29 = 0;
  VAR_20 -= VAR_21;
  VAR_12 += VAR_21;
  if (VAR_16 > 0 && VAR_11 > 0)
   continue;
  VAR_25 = (VAR_16 == 0 && VAR_20 == 0);
  FUNC_10(VAR_3, VAR_10, VAR_4,
      VAR_14, VAR_29, VAR_28,
      VAR_15, VAR_22,
      VAR_26,
      VAR_30, VAR_27,
      VAR_24, VAR_25);
  VAR_19++;
  VAR_18 += VAR_24 ? VAR_21 : VAR_21 + VAR_15;
  VAR_10 = FUNC_9(VAR_3, &VAR_9);
  VAR_24 = 0;
  VAR_17 = VAR_22;
 }



 for (VAR_23 = FUNC_16(VAR_4)->frags; VAR_13; VAR_23++) {
  VAR_12 = 0;
  VAR_20 = FUNC_13(VAR_23);
  VAR_13 -= VAR_20;
  VAR_16--;
  VAR_5->frags++;

  while (VAR_20 > 0) {
   if (VAR_11 > 0) {
    VAR_21 = FUNC_11(VAR_11, VAR_20);
    VAR_11 -= VAR_21;
    VAR_9->addr =
        FUNC_1(FUNC_5(VAR_3, VAR_23,
          VAR_12, VAR_21));
    if (FUNC_2(VAR_7, VAR_9->addr))
     goto err_out_abort;
    VAR_9->len = FUNC_0(VAR_21);
    VAR_9++;
    VAR_29++;
    VAR_20 -= VAR_21;
    VAR_12 += VAR_21;
    if (VAR_16 > 0 && VAR_11 > 0)
     continue;
    VAR_25 = (VAR_16 == 0 && VAR_20 == 0);
    FUNC_10(VAR_3, VAR_10, VAR_4, VAR_14,
        VAR_29, VAR_28,
        VAR_15, VAR_22, VAR_26,
        VAR_30, VAR_27,
        VAR_24, VAR_25);
    VAR_19++;
    VAR_18 += VAR_24 ? VAR_21 : VAR_21 + VAR_15;
    VAR_10 = FUNC_9(VAR_3, &VAR_9);
    VAR_24 = 0;
   } else {
    VAR_21 = FUNC_11(VAR_22, VAR_20);
    VAR_11 = VAR_22 - VAR_21;
    VAR_14 = FUNC_5(VAR_3, VAR_23,
             VAR_12, VAR_21);
    if (FUNC_2(VAR_7, VAR_14))
     goto err_out_abort;
    VAR_28 = VAR_21;
    VAR_29 = 0;
    VAR_20 -= VAR_21;
    VAR_12 += VAR_21;
    if (VAR_16 > 0 && VAR_11 > 0)
     continue;
    VAR_25 = (VAR_16 == 0 && VAR_20 == 0);
    FUNC_10(VAR_3, VAR_10, VAR_4, VAR_14,
        VAR_29, VAR_28,
        VAR_15, VAR_22, VAR_26,
        VAR_30, VAR_27,
        VAR_24, VAR_25);
    VAR_19++;
    VAR_18 += VAR_24 ? VAR_21 : VAR_21 + VAR_15;
    VAR_10 = FUNC_9(VAR_3, &VAR_9);
    VAR_24 = 0;
   }
  }
 }

 VAR_5->pkts += VAR_19;
 VAR_5->bytes += VAR_18;
 VAR_5->tso++;

 return 0;

err_out_abort:
 while (VAR_8->desc != VAR_3->head->desc) {
  FUNC_4(VAR_3, VAR_8, ((void*)0), ((void*)0));
  VAR_8 = VAR_8->next;
 }
 VAR_3->head = VAR_6;

 return -VAR_0;
}
