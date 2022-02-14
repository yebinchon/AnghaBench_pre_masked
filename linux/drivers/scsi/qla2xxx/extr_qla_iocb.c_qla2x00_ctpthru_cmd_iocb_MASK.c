
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ct_entry_24xx {int handle; } ;
struct TYPE_11__ {struct ct_entry_24xx* iocb; } ;
struct TYPE_7__ {TYPE_6__ ctarg; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
struct TYPE_9__ {TYPE_2__ iocb_cmd; } ;
struct TYPE_10__ {int handle; TYPE_3__ u; int vha; } ;
typedef TYPE_4__ srb_t ;


 int FUNC_0 (int ,TYPE_6__*) ;

__attribute__((used)) static void
FUNC_1(srb_t *VAR_0, struct ct_entry_24xx *VAR_1)
{
 VAR_0->u.iocb_cmd.u.ctarg.iocb = VAR_1;
 FUNC_0(VAR_0->vha, &VAR_0->u.iocb_cmd.u.ctarg);
 VAR_1->handle = VAR_0->handle;
}
