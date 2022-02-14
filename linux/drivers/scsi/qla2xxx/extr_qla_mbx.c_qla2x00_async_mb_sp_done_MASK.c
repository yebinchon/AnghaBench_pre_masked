
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rc; int comp; } ;
struct TYPE_8__ {TYPE_1__ mbx; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_3__ iocb_cmd; } ;
struct TYPE_11__ {TYPE_4__ u; } ;
typedef TYPE_5__ srb_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(srb_t *VAR_0, int VAR_1)
{
 VAR_0->u.iocb_cmd.u.mbx.rc = VAR_1;

 FUNC_0(&VAR_0->u.iocb_cmd.u.mbx.comp);

}
