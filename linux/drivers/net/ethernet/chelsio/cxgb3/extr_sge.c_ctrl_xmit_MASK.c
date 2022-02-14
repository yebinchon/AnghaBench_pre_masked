
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_request_hdr {int wr_lo; int wr_hi; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct sge_txq {size_t pidx; int gen; size_t size; int cntxt_id; int lock; int in_use; int * desc; int token; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct adapter*,struct sge_txq*,struct sk_buff*,int,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sge_txq*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct adapter*,int ,int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct adapter *VAR_7, struct sge_txq *VAR_8,
       struct sk_buff *VAR_9)
{
 int VAR_10;
 struct work_request_hdr *VAR_11 = (struct work_request_hdr *)VAR_9->data;

 if (FUNC_11(!FUNC_6(VAR_9))) {
  FUNC_2(1);
  FUNC_4(VAR_9);
  return VAR_5;
 }

 VAR_11->wr_hi |= FUNC_5(VAR_3 | VAR_2);
 VAR_11->wr_lo = FUNC_5(FUNC_1(VAR_8->token));

 FUNC_8(&VAR_8->lock);
      again:FUNC_7(VAR_8);

 VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9, 1, VAR_6);
 if (FUNC_11(VAR_10)) {
  if (VAR_10 == 1) {
   FUNC_9(&VAR_8->lock);
   return VAR_4;
  }
  goto again;
 }

 FUNC_13(&VAR_8->desc[VAR_8->pidx], VAR_9, VAR_9->len, VAR_8->gen);

 VAR_8->in_use++;
 if (++VAR_8->pidx >= VAR_8->size) {
  VAR_8->pidx = 0;
  VAR_8->gen ^= 1;
 }
 FUNC_9(&VAR_8->lock);
 FUNC_12();
 FUNC_10(VAR_7, VAR_0,
       VAR_1 | FUNC_0(VAR_8->cntxt_id));
 return VAR_5;
}
