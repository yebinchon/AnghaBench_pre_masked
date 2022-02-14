
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int comp; } ;
struct TYPE_9__ {TYPE_2__ abt; } ;
struct srb_iocb {TYPE_3__ u; int timer; } ;
struct TYPE_7__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_10__ {int flags; int (* free ) (TYPE_4__*) ;TYPE_1__ u; } ;
typedef TYPE_4__ srb_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(srb_t *VAR_1, int VAR_2)
{
 struct srb_iocb *VAR_3 = &VAR_1->u.iocb_cmd;

 FUNC_1(&VAR_1->u.iocb_cmd.timer);
 if (VAR_1->flags & VAR_0)
  FUNC_0(&VAR_3->u.abt.comp);
 else
  VAR_1->free(VAR_1);
}
