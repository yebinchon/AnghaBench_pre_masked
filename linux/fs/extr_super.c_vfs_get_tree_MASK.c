
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {scalar_t__ s_maxbytes; int s_flags; int s_bdi; } ;
struct fs_context {TYPE_3__* fs_type; int security; TYPE_2__* root; TYPE_1__* ops; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {struct super_block* d_sb; } ;
struct TYPE_4__ {int (* get_tree ) (struct fs_context*) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fs_context*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct super_block*,int ,int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct fs_context*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct fs_context *VAR_2)
{
 struct super_block *VAR_3;
 int VAR_4;

 if (VAR_2->root)
  return -VAR_0;




 VAR_4 = VAR_2->ops->get_tree(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 if (!VAR_2->root) {
  FUNC_4("Filesystem %s get_tree() didn't set fc->root\n",
         VAR_2->fs_type->name);



  FUNC_0();
 }

 VAR_3 = VAR_2->root->d_sb;
 FUNC_2(!VAR_3->s_bdi);







 FUNC_6();
 VAR_3->s_flags |= VAR_1;

 VAR_4 = FUNC_5(VAR_3, VAR_2->security, 0, ((void*)0));
 if (FUNC_8(VAR_4)) {
  FUNC_3(VAR_2);
  return VAR_4;
 }







 FUNC_1((VAR_3->s_maxbytes < 0), "%s set sb->s_maxbytes to "
  "negative value (%lld)\n", VAR_2->fs_type->name, VAR_3->s_maxbytes);

 return 0;
}
