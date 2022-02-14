
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_node {int list; int ackto; } ;
struct ath_dynack {int qlock; int nodes; int ackto; } ;
struct ath_hw {struct ath_dynack dynack; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ath_hw *VAR_0, struct ath_node *VAR_1)
{
 struct ath_dynack *VAR_2 = &VAR_0->dynack;

 VAR_1->ackto = VAR_2->ackto;

 FUNC_1(&VAR_2->qlock);
 FUNC_0(&VAR_1->list, &VAR_2->nodes);
 FUNC_2(&VAR_2->qlock);
}
