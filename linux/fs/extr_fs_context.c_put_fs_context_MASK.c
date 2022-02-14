
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_context {struct fs_context* source; int fs_type; int cred; int user_ns; int net_ns; int security; TYPE_1__* ops; scalar_t__ need_free; TYPE_2__* root; } ;
struct TYPE_4__ {struct super_block* d_sb; } ;
struct TYPE_3__ {int (* free ) (struct fs_context*) ;} ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct fs_context*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fs_context*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct fs_context*) ;

void FUNC_10(struct fs_context *VAR_0)
{
 struct super_block *VAR_1;

 if (VAR_0->root) {
  VAR_1 = VAR_0->root->d_sb;
  FUNC_1(VAR_0->root);
  VAR_0->root = ((void*)0);
  FUNC_0(VAR_1);
 }

 if (VAR_0->need_free && VAR_0->ops && VAR_0->ops->free)
  VAR_0->ops->free(VAR_0);

 FUNC_8(&VAR_0->security);
 FUNC_6(VAR_0->net_ns);
 FUNC_7(VAR_0->user_ns);
 FUNC_3(VAR_0->cred);
 FUNC_4(VAR_0);
 FUNC_5(VAR_0->fs_type);
 FUNC_2(VAR_0->source);
 FUNC_2(VAR_0);
}
