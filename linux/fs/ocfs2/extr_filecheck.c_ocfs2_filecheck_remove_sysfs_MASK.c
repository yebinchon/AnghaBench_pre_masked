
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fs_kobj_unregister; int fs_kobj; int fs_fcheck; } ;
struct ocfs2_super {TYPE_1__ osb_fc_ent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ocfs2_super *VAR_0)
{
 if (!VAR_0->osb_fc_ent.fs_fcheck)
  return;

 FUNC_0(&VAR_0->osb_fc_ent.fs_kobj);
 FUNC_1(&VAR_0->osb_fc_ent.fs_kobj);
 FUNC_3(&VAR_0->osb_fc_ent.fs_kobj_unregister);
 FUNC_2(&VAR_0->osb_fc_ent);
}
