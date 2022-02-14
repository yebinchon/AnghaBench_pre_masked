
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mbx_24xx_entry {int * mb; int handle; int entry_type; } ;
struct TYPE_7__ {int * out_mb; } ;
struct TYPE_8__ {TYPE_1__ mbx; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_3__ iocb_cmd; } ;
struct TYPE_11__ {TYPE_4__ u; int handle; } ;
typedef TYPE_5__ srb_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(srb_t *VAR_1, struct mbx_24xx_entry *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_2->entry_type = VAR_0;
 VAR_2->handle = VAR_1->handle;
 VAR_4 = FUNC_2(FUNC_0(VAR_2->mb), FUNC_0(VAR_1->u.iocb_cmd.u.mbx.out_mb));

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  VAR_2->mb[VAR_3] = FUNC_1(VAR_1->u.iocb_cmd.u.mbx.out_mb[VAR_3]);
}
