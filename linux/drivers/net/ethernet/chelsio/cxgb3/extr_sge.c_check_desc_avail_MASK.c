
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sge_txq {unsigned int size; unsigned int in_use; int stops; int sendq; } ;
struct sge_qset {int txq_stopped; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (unsigned int,int *) ;
 scalar_t__ FUNC_2 (struct sge_txq*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (unsigned int,int *) ;
 struct sge_qset* FUNC_6 (struct sge_txq*,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline int FUNC_8(struct adapter *VAR_0, struct sge_txq *VAR_1,
       struct sk_buff *VAR_2, unsigned int VAR_3,
       unsigned int VAR_4)
{
 if (FUNC_7(!FUNC_3(&VAR_1->sendq))) {
       addq_exit:FUNC_0(&VAR_1->sendq, VAR_2);
  return 1;
 }
 if (FUNC_7(VAR_1->size - VAR_1->in_use < VAR_3)) {
  struct sge_qset *VAR_5 = FUNC_6(VAR_1, VAR_4);

  FUNC_1(VAR_4, &VAR_5->txq_stopped);
  FUNC_4();

  if (FUNC_2(VAR_1) &&
      FUNC_5(VAR_4, &VAR_5->txq_stopped))
   return 2;

  VAR_1->stops++;
  goto addq_exit;
 }
 return 0;
}
