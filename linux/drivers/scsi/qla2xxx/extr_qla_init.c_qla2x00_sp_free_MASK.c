
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct srb_iocb {int timer; } ;
struct TYPE_5__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ srb_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(srb_t *VAR_0)
{
 struct srb_iocb *VAR_1 = &VAR_0->u.iocb_cmd;

 FUNC_0(&VAR_1->timer);
 FUNC_1(VAR_0);
}
