
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_obj {struct cmd_obj* parmbuf; } ;
struct TYPE_3__ {int bcompleted; } ;
struct TYPE_4__ {TYPE_1__ workparam; } ;
struct _adapter {TYPE_2__ mppriv; } ;


 int FUNC_0 (struct cmd_obj*) ;

void FUNC_1(struct _adapter *VAR_0,
          struct cmd_obj *VAR_1)
{
 FUNC_0(VAR_1->parmbuf);
 FUNC_0(VAR_1);
 VAR_0->mppriv.workparam.bcompleted = 1;
}
