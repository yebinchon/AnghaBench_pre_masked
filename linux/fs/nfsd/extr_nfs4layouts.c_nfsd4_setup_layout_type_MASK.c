
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* mnt; } ;
struct svc_export {int ex_flags; int ex_layout_types; TYPE_2__ ex_path; } ;
struct super_block {TYPE_6__* s_bdev; TYPE_3__* s_export_op; } ;
struct TYPE_12__ {TYPE_5__* bd_disk; } ;
struct TYPE_11__ {int queue; TYPE_4__* fops; } ;
struct TYPE_10__ {scalar_t__ pr_ops; } ;
struct TYPE_9__ {scalar_t__ commit_blocks; scalar_t__ map_blocks; scalar_t__ get_uuid; } ;
struct TYPE_7__ {struct super_block* mnt_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

void FUNC_1(struct svc_export *VAR_4)
{




 if (!(VAR_4->ex_flags & VAR_3))
  return;
}
