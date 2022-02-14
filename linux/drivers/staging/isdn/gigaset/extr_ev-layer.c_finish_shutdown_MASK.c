
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {scalar_t__ mstate; int waitqueue; scalar_t__ waiting; int cmd_result; scalar_t__ isdn_up; int mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cardstate*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cardstate *VAR_4)
{
 if (VAR_4->mstate != VAR_1) {
  VAR_4->mstate = VAR_2;
  VAR_4->mode = VAR_3;
 }


 if (VAR_4->isdn_up) {
  VAR_4->isdn_up = 0;
  FUNC_0(VAR_4);
 }



 VAR_4->cmd_result = -VAR_0;
 VAR_4->waiting = 0;
 FUNC_1(&VAR_4->waitqueue);
}
