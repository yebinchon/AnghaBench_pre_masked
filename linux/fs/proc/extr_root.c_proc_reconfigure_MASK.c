
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct pid_namespace* s_fs_info; } ;
struct pid_namespace {int dummy; } ;
struct fs_context {TYPE_1__* root; } ;
struct TYPE_2__ {struct super_block* d_sb; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct super_block*,struct fs_context*,struct pid_namespace*,int ) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static int FUNC_3(struct fs_context *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->root->d_sb;
 struct pid_namespace *VAR_2 = VAR_1->s_fs_info;

 FUNC_2(VAR_1);

 FUNC_1(VAR_1, VAR_0, VAR_2, FUNC_0());
 return 0;
}
