
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_fs_context {TYPE_1__* pid_ns; } ;
struct fs_context {int * ops; struct proc_fs_context* fs_private; int user_ns; } ;
struct TYPE_2__ {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct proc_fs_context* FUNC_2 (int,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct fs_context *VAR_4)
{
 struct proc_fs_context *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct proc_fs_context), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->pid_ns = FUNC_0(FUNC_4(VAR_2));
 FUNC_3(VAR_4->user_ns);
 VAR_4->user_ns = FUNC_1(VAR_5->pid_ns->user_ns);
 VAR_4->fs_private = VAR_5;
 VAR_4->ops = &VAR_3;
 return 0;
}
