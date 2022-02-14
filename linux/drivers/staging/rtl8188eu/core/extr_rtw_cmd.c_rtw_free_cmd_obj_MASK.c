
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_obj {scalar_t__ cmdcode; scalar_t__ rspsz; struct cmd_obj* rsp; struct cmd_obj* parmbuf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cmd_obj*) ;

void FUNC_1(struct cmd_obj *VAR_2)
{
 if ((VAR_2->cmdcode != VAR_1) && (VAR_2->cmdcode != VAR_0)) {

  FUNC_0(VAR_2->parmbuf);
 }

 if (VAR_2->rsp) {
  if (VAR_2->rspsz != 0) {

   FUNC_0(VAR_2->rsp);
  }
 }


 FUNC_0(VAR_2);
}
