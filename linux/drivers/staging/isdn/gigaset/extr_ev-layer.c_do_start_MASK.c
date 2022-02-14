
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {scalar_t__ mstate; int isdn_up; int waitqueue; scalar_t__ waiting; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cardstate*) ;
 int FUNC_1 (struct cardstate*) ;
 int FUNC_2 (struct cardstate*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cardstate *VAR_2)
{
 FUNC_0(VAR_2);

 if (VAR_2->mstate != VAR_1)
  FUNC_2(VAR_2, VAR_0);

 VAR_2->isdn_up = 1;
 FUNC_1(VAR_2);

 VAR_2->waiting = 0;
 FUNC_3(&VAR_2->waitqueue);
}
