
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sk_buff {unsigned int priority; int destructor; int dev; scalar_t__ head; scalar_t__ data; } ;
struct sge_txq {size_t pidx; int size; TYPE_1__* sdesc; int * desc; scalar_t__ stat; } ;
struct TYPE_7__ {int lock; } ;
struct sge_uld_txq {int service_ofldq_running; struct sge_txq q; TYPE_3__* adap; TYPE_2__ sendq; int full; } ;
struct fw_wr_hdr {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int * port; int pdev_dev; } ;
struct TYPE_6__ {struct sk_buff* skb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_2 (struct sk_buff*,struct sge_txq*,int *) ;
 scalar_t__ FUNC_3 (int ,struct sk_buff*,int *) ;
 int FUNC_4 (TYPE_3__*,struct sge_txq*,int) ;
 int FUNC_5 (TYPE_3__*,struct sge_txq*,unsigned int) ;
 int FUNC_6 (struct sk_buff*,struct sge_txq*,void*,int *,int,int *) ;
 int VAR_1 ;
 unsigned int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,struct sge_txq*,void*,int) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (unsigned int) ;
 int FUNC_12 (struct sge_uld_txq*,struct fw_wr_hdr*) ;
 struct sk_buff* FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct sge_txq*,unsigned int) ;
 unsigned int FUNC_18 (struct sge_txq*) ;
 int FUNC_19 (struct sge_uld_txq*) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static void FUNC_21(struct sge_uld_txq *VAR_2)
{
 u64 *VAR_3, *VAR_4, *VAR_5;
 int VAR_6;
 struct sk_buff *VAR_7;
 struct sge_txq *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11, VAR_12;







 if (VAR_2->service_ofldq_running)
  return;
 VAR_2->service_ofldq_running = 1;

 while ((VAR_7 = FUNC_13(&VAR_2->sendq)) != ((void*)0) && !VAR_2->full) {







  FUNC_16(&VAR_2->sendq.lock);

  FUNC_4(VAR_2->adap, &VAR_2->q, 0);

  VAR_11 = VAR_7->priority;
  VAR_12 = FUNC_7(VAR_11);
  VAR_6 = FUNC_18(&VAR_2->q) - VAR_12;
  FUNC_0(VAR_6 < 0);
  if (FUNC_20(VAR_6 < VAR_0))
   FUNC_12(VAR_2, (struct fw_wr_hdr *)VAR_7->data);

  VAR_3 = (u64 *)&VAR_2->q.desc[VAR_2->q.pidx];
  if (FUNC_9(VAR_7))
   FUNC_2(VAR_7, &VAR_2->q, VAR_3);
  else if (FUNC_3(VAR_2->adap->pdev_dev, VAR_7,
           (dma_addr_t *)VAR_7->head)) {
   FUNC_19(VAR_2);
   FUNC_15(&VAR_2->sendq.lock);
   break;
  } else {
   int VAR_13, VAR_14 = FUNC_14(VAR_7);




   VAR_4 = (u64 *)VAR_3;
   VAR_5 = (u64 *)VAR_3 + VAR_11;
   VAR_8 = &VAR_2->q;
   VAR_3 = (void *)FUNC_8(VAR_7, &VAR_2->q,
          (void *)VAR_3,
          VAR_14);
   if (VAR_4 > (u64 *)VAR_3) {
    VAR_9 = (u8 *)VAR_5 - (u8 *)VAR_8->stat;
    VAR_5 = (void *)VAR_8->desc + VAR_9;
   }





   if (VAR_3 == (u64 *)VAR_8->stat) {
    VAR_9 = (u8 *)VAR_5 - (u8 *)VAR_8->stat;
    VAR_5 = (void *)VAR_8->desc + VAR_9;
    VAR_3 = (void *)VAR_8->desc;
   }

   FUNC_6(VAR_7, &VAR_2->q, (void *)VAR_3,
     VAR_5, VAR_14,
     (dma_addr_t *)VAR_7->head);




   VAR_13 = VAR_2->q.pidx + VAR_12 - 1;
   if (VAR_13 >= VAR_2->q.size)
    VAR_13 -= VAR_2->q.size;
   VAR_2->q.sdesc[VAR_13].skb = VAR_7;
  }

  FUNC_17(&VAR_2->q, VAR_12);
  VAR_10 += VAR_12;
  if (FUNC_20(VAR_10 > 32)) {
   FUNC_5(VAR_2->adap, &VAR_2->q, VAR_10);
   VAR_10 = 0;
  }






  FUNC_15(&VAR_2->sendq.lock);
  FUNC_1(VAR_7, &VAR_2->sendq);
  if (FUNC_9(VAR_7))
   FUNC_10(VAR_7);
 }
 if (FUNC_11(VAR_10))
  FUNC_5(VAR_2->adap, &VAR_2->q, VAR_10);




 VAR_2->service_ofldq_running = 0;
}
