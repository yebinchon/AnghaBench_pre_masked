
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue {int lock; int state; int qid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ap_queue *VAR_1)
{







 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1->qid);
 VAR_1->state = VAR_0;
 FUNC_2(&VAR_1->lock);
}
