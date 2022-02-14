
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int waiting; int mutex; int waitqueue; int at_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct cardstate*) ;
 int FUNC_1 (struct cardstate*,int *,int ,int *,int ,int *) ;
 int FUNC_2 (struct cardstate*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct cardstate *VAR_1)
{
 FUNC_3(&VAR_1->mutex);

 VAR_1->waiting = 1;

 if (!FUNC_1(VAR_1, &VAR_1->at_state, VAR_0, ((void*)0), 0, ((void*)0)))
  goto exit;
 FUNC_2(VAR_1);

 FUNC_5(VAR_1->waitqueue, !VAR_1->waiting);

 FUNC_0(VAR_1);

exit:
 FUNC_4(&VAR_1->mutex);
}
