
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct super_block {int dummy; } ;
struct proc_fs_context {int mask; int hidepid; int gid; } ;
struct pid_namespace {int hide_pid; int pid_gid; } ;
struct fs_context {struct proc_fs_context* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct user_namespace*,int ) ;

__attribute__((used)) static void FUNC_1(struct super_block *VAR_2,
          struct fs_context *VAR_3,
          struct pid_namespace *VAR_4,
          struct user_namespace *VAR_5)
{
 struct proc_fs_context *VAR_6 = VAR_3->fs_private;

 if (VAR_6->mask & (1 << VAR_0))
  VAR_4->pid_gid = FUNC_0(VAR_5, VAR_6->gid);
 if (VAR_6->mask & (1 << VAR_1))
  VAR_4->hide_pid = VAR_6->hidepid;
}
