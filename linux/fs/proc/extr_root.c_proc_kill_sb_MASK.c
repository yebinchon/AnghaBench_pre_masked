
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_fs_info; } ;
struct pid_namespace {scalar_t__ proc_thread_self; scalar_t__ proc_self; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct pid_namespace*) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0)
{
 struct pid_namespace *VAR_1;

 VAR_1 = (struct pid_namespace *)VAR_0->s_fs_info;
 if (VAR_1->proc_self)
  FUNC_0(VAR_1->proc_self);
 if (VAR_1->proc_thread_self)
  FUNC_0(VAR_1->proc_thread_self);
 FUNC_1(VAR_0);
 FUNC_2(VAR_1);
}
