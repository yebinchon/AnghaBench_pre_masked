
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {scalar_t__ user_ns; struct proc_fs_context* fs_private; } ;
struct proc_fs_context {struct pid_namespace* pid_ns; } ;
struct pid_namespace {scalar_t__ user_ns; struct vfsmount* proc_mnt; } ;
struct fs_context {scalar_t__ user_ns; struct proc_fs_context* fs_private; } ;


 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct vfsmount*) ;
 int VAR_0 ;
 struct vfsmount* FUNC_2 (struct vfsmount*) ;
 struct vfsmount* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct pid_namespace*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_6 (struct vfsmount*) ;
 int FUNC_7 (struct pid_namespace*) ;
 int FUNC_8 (scalar_t__) ;

int FUNC_9(struct pid_namespace *VAR_2)
{
 struct proc_fs_context *VAR_3;
 struct fs_context *VAR_4;
 struct vfsmount *VAR_5;

 VAR_4 = FUNC_3(&VAR_1, VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (VAR_4->user_ns != VAR_2->user_ns) {
  FUNC_8(VAR_4->user_ns);
  VAR_4->user_ns = FUNC_5(VAR_2->user_ns);
 }

 VAR_3 = VAR_4->fs_private;
 if (VAR_3->pid_ns != VAR_2) {
  FUNC_7(VAR_3->pid_ns);
  FUNC_4(VAR_2);
  VAR_3->pid_ns = VAR_2;
 }

 VAR_5 = FUNC_2(VAR_4);
 FUNC_6(VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_2->proc_mnt = VAR_5;
 return 0;
}
