
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct kernfs_root {int dummy; } ;
struct fs_context {TYPE_1__* root; } ;
struct TYPE_7__ {int children; } ;
struct TYPE_9__ {TYPE_2__ self; } ;
struct cgroup_root {int subsys_mask; int flags; int release_agent_path; TYPE_5__ cgrp; int name; } ;
struct cgroup_fs_context {int subsys_mask; int flags; scalar_t__ release_agent; scalar_t__ name; } ;
struct TYPE_8__ {int comm; } ;
struct TYPE_6__ {int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fs_context*,char*,int,char*,int,int ) ;
 struct cgroup_fs_context* FUNC_2 (struct fs_context*) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_2 ;
 struct cgroup_root* FUNC_4 (struct kernfs_root*) ;
 struct cgroup_root VAR_3 ;
 int FUNC_5 (struct fs_context*) ;
 TYPE_3__* VAR_4 ;
 struct kernfs_root* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (struct cgroup_root*,int) ;
 int VAR_5 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (struct cgroup_root*) ;

int FUNC_17(struct fs_context *VAR_6)
{
 struct cgroup_fs_context *VAR_7 = FUNC_2(VAR_6);
 struct kernfs_root *VAR_8 = FUNC_6(VAR_6->root->d_sb);
 struct cgroup_root *VAR_9 = FUNC_4(VAR_8);
 int VAR_10 = 0;
 u16 VAR_11, VAR_12;

 FUNC_3(&VAR_3.cgrp);


 VAR_10 = FUNC_5(VAR_6);
 if (VAR_10)
  goto out_unlock;

 if (VAR_7->subsys_mask != VAR_9->subsys_mask || VAR_7->release_agent)
  FUNC_9("option changes via remount are deprecated (pid=%d comm=%s)\n",
   FUNC_15(VAR_4), VAR_4->comm);

 VAR_11 = VAR_7->subsys_mask & ~VAR_9->subsys_mask;
 VAR_12 = VAR_9->subsys_mask & ~VAR_7->subsys_mask;


 if ((VAR_7->flags ^ VAR_9->flags) ||
     (VAR_7->name && FUNC_13(VAR_7->name, VAR_9->name))) {
  FUNC_1(VAR_6, "option or name mismatch, new: 0x%x \"%s\", old: 0x%x \"%s\"",
         VAR_7->flags, VAR_7->name ?: "", VAR_9->flags, VAR_9->name);
  VAR_10 = -VAR_1;
  goto out_unlock;
 }


 if (!FUNC_7(&VAR_9->cgrp.self.children)) {
  VAR_10 = -VAR_0;
  goto out_unlock;
 }

 VAR_10 = FUNC_10(VAR_9, VAR_11);
 if (VAR_10)
  goto out_unlock;

 FUNC_0(FUNC_10(&VAR_3, VAR_12));

 if (VAR_7->release_agent) {
  FUNC_11(&VAR_5);
  FUNC_14(VAR_9->release_agent_path, VAR_7->release_agent);
  FUNC_12(&VAR_5);
 }

 FUNC_16(VAR_9);

 out_unlock:
 FUNC_8(&VAR_2);
 return VAR_10;
}
