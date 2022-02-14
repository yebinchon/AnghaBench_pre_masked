
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vp_ctrl_entry_24xx {int entry_count; int* vp_idx_map; void* vp_count; void* command; int handle; int entry_type; } ;
struct TYPE_7__ {int cmd; int vp_index; } ;
struct TYPE_8__ {TYPE_1__ ctrlvp; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_3__ iocb_cmd; } ;
struct TYPE_11__ {TYPE_4__ u; int handle; } ;
typedef TYPE_5__ srb_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(srb_t *VAR_1, struct vp_ctrl_entry_24xx *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_2->entry_type = VAR_0;
 VAR_2->handle = VAR_1->handle;
 VAR_2->entry_count = 1;
 VAR_2->command = FUNC_0(VAR_1->u.iocb_cmd.u.ctrlvp.cmd);
 VAR_2->vp_count = FUNC_0(1);





 VAR_3 = (VAR_1->u.iocb_cmd.u.ctrlvp.vp_index - 1) / 8;
 VAR_4 = (VAR_1->u.iocb_cmd.u.ctrlvp.vp_index - 1) & 7;
 VAR_2->vp_idx_map[VAR_3] |= 1 << VAR_4;
}
