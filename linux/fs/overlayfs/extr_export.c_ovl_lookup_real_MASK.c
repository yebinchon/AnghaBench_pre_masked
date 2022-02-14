
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct dentry* s_root; } ;
struct ovl_layer {int idx; TYPE_1__* mnt; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* mnt_root; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 struct dentry* FUNC_7 (struct dentry*,int ) ;
 struct dentry* FUNC_8 (struct super_block*,struct dentry*,struct ovl_layer*) ;
 struct dentry* FUNC_9 (struct dentry*,struct dentry*,struct ovl_layer*) ;
 int FUNC_10 (char*,struct dentry*,int ,struct dentry*,int) ;

__attribute__((used)) static struct dentry *FUNC_11(struct super_block *VAR_2,
          struct dentry *VAR_3,
          struct ovl_layer *VAR_4)
{
 struct dentry *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_8(VAR_2, VAR_3, VAR_4);
 if (FUNC_1(VAR_5))
  return VAR_5;

 while (!VAR_6) {
  struct dentry *VAR_7, *VAR_8;
  struct dentry *VAR_9 = ((void*)0);
  struct dentry *VAR_10 = FUNC_7(VAR_5,
           VAR_4->idx);

  if (VAR_10 == VAR_3)
   break;


  VAR_7 = FUNC_4(VAR_3);
  for (;;) {
   VAR_9 = FUNC_5(VAR_7);

   if (VAR_9 == VAR_10)
    break;
   if (VAR_9 == VAR_4->mnt->mnt_root) {
    FUNC_6(VAR_5);
    VAR_5 = FUNC_4(VAR_2->s_root);
    break;
   }







   if (VAR_9 == VAR_7) {
    VAR_6 = -VAR_1;
    break;
   }

   FUNC_6(VAR_7);
   VAR_7 = VAR_9;
  }

  if (!VAR_6) {
   VAR_8 = FUNC_9(VAR_5, VAR_7, VAR_4);
   if (FUNC_1(VAR_8))
    VAR_6 = FUNC_2(VAR_8);
   if (VAR_6 == -VAR_0) {
    VAR_8 = FUNC_8(VAR_2, VAR_3,
        VAR_4);
    VAR_6 = FUNC_3(VAR_8);
   }
   if (!VAR_6) {
    FUNC_6(VAR_5);
    VAR_5 = VAR_8;
   }
  }

  FUNC_6(VAR_9);
  FUNC_6(VAR_7);
 }

 if (VAR_6)
  goto fail;

 return VAR_5;

fail:
 FUNC_10("overlayfs: failed to lookup by real (%pd2, layer=%d, connected=%pd2, err=%i)\n",
       VAR_3, VAR_4->idx, VAR_5, VAR_6);
 FUNC_6(VAR_5);
 return FUNC_0(VAR_6);
}
