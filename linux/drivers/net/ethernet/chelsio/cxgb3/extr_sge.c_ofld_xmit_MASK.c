
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int priority; scalar_t__ head; } ;
struct sge_txq {unsigned int gen; unsigned int in_use; unsigned int pidx; unsigned int size; int lock; } ;
struct adapter {int pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct adapter*,struct sge_txq*,struct sk_buff*,unsigned int,int ) ;
 int FUNC_2 (struct adapter*,struct sge_txq*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,struct sk_buff*,int *) ;
 int FUNC_5 (struct adapter*,struct sge_txq*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct adapter*,struct sk_buff*,struct sge_txq*,unsigned int,unsigned int,unsigned int,int *) ;

__attribute__((used)) static int FUNC_10(struct adapter *VAR_4, struct sge_txq *VAR_5,
       struct sk_buff *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8 = FUNC_0(VAR_6), VAR_9, VAR_10;

 FUNC_6(&VAR_5->lock);
again: FUNC_5(VAR_4, VAR_5, VAR_3);

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_8, VAR_2);
 if (FUNC_8(VAR_7)) {
  if (VAR_7 == 1) {
   VAR_6->priority = VAR_8;
   FUNC_7(&VAR_5->lock);
   return VAR_0;
  }
  goto again;
 }

 if (!FUNC_3(VAR_6) &&
     FUNC_4(VAR_4->pdev, VAR_6, (dma_addr_t *)VAR_6->head)) {
  FUNC_7(&VAR_5->lock);
  return VAR_1;
 }

 VAR_10 = VAR_5->gen;
 VAR_5->in_use += VAR_8;
 VAR_9 = VAR_5->pidx;
 VAR_5->pidx += VAR_8;
 if (VAR_5->pidx >= VAR_5->size) {
  VAR_5->pidx -= VAR_5->size;
  VAR_5->gen ^= 1;
 }
 FUNC_7(&VAR_5->lock);

 FUNC_9(VAR_4, VAR_6, VAR_5, VAR_9, VAR_10, VAR_8, (dma_addr_t *)VAR_6->head);
 FUNC_2(VAR_4, VAR_5);
 return VAR_1;
}
