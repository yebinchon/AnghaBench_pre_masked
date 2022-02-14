
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct dentry* s_root; } ;
struct ovl_layer {TYPE_1__* mnt; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* mnt_root; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 struct dentry* FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct super_block*,struct dentry*,struct ovl_layer*) ;

__attribute__((used)) static struct dentry *FUNC_5(struct super_block *VAR_2,
            struct dentry *VAR_3,
            struct ovl_layer *VAR_4)
{
 struct dentry *VAR_5, *VAR_6 = ((void*)0);
 struct dentry *VAR_7 = FUNC_0(-VAR_0);

 if (VAR_3 == VAR_4->mnt->mnt_root)
  return FUNC_1(VAR_2->s_root);


 VAR_5 = FUNC_1(VAR_3);
 for (;;) {
  VAR_6 = FUNC_2(VAR_5);





  VAR_7 = FUNC_4(VAR_2, VAR_5, VAR_4);
  if (VAR_7)
   break;

  if (VAR_6 == VAR_4->mnt->mnt_root) {
   VAR_7 = FUNC_1(VAR_2->s_root);
   break;
  }






  if (VAR_6 == VAR_5) {
   VAR_7 = FUNC_0(-VAR_1);
   break;
  }

  FUNC_3(VAR_5);
  VAR_5 = VAR_6;
 }

 FUNC_3(VAR_6);
 FUNC_3(VAR_5);

 return VAR_7;
}
