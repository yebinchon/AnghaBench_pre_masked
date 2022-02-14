
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_context {TYPE_1__* root; } ;
struct TYPE_2__ {struct super_block* d_sb; } ;


 int FUNC_0 (struct super_block*,struct fs_context*) ;
 int FUNC_1 (struct super_block*) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->root->d_sb;

 FUNC_1(VAR_1);
 return FUNC_0(VAR_1, VAR_0);
}
