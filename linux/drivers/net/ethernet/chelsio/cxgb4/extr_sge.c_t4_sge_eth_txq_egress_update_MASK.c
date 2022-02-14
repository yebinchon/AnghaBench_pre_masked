
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {int size; int restarts; int in_use; } ;
struct sge_eth_txq {int txq; struct sge_txq q; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct adapter*,struct sge_txq*,int,int) ;
 int FUNC_5 (struct sge_txq*) ;

int FUNC_6(struct adapter *VAR_0, struct sge_eth_txq *VAR_1,
     int VAR_2)
{
 struct sge_txq *VAR_3 = &VAR_1->q;
 unsigned int VAR_4;

 if (!VAR_3->in_use || !FUNC_0(VAR_1->txq))
  return 0;


 VAR_4 = FUNC_4(VAR_0, &VAR_1->q, VAR_2, 1);






 if (FUNC_2(VAR_1->txq) && FUNC_5(VAR_3) > (VAR_3->size / 2)) {
  FUNC_3(VAR_1->txq);
  VAR_1->q.restarts++;
 }

 FUNC_1(VAR_1->txq);
 return VAR_4;
}
