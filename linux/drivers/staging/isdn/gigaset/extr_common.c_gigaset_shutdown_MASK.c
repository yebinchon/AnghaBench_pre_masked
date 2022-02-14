
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int flags; int waiting; int mutex; int waitqueue; int at_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cardstate*) ;
 int FUNC_1 (struct cardstate*,int *,int ,int *,int ,int *) ;
 int FUNC_2 (struct cardstate*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct cardstate *VAR_3)
{
 FUNC_3(&VAR_3->mutex);

 if (!(VAR_3->flags & VAR_2)) {
  FUNC_4(&VAR_3->mutex);
  return -VAR_0;
 }

 VAR_3->waiting = 1;

 if (!FUNC_1(VAR_3, &VAR_3->at_state, VAR_1, ((void*)0), 0, ((void*)0)))
  goto exit;
 FUNC_2(VAR_3);

 FUNC_5(VAR_3->waitqueue, !VAR_3->waiting);

 FUNC_0(VAR_3);

exit:
 FUNC_4(&VAR_3->mutex);
 return 0;
}
