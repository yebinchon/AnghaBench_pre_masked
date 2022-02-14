
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; int s_xattr; struct dentry* s_root; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int s_mount_opt; struct dentry* xattr_root; struct dentry* priv_root; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct dentry* FUNC_10 (int ,struct dentry*,int ) ;
 scalar_t__ FUNC_11 (struct super_block*) ;
 int VAR_5 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct super_block*) ;

int FUNC_14(struct super_block *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 struct dentry *VAR_9 = FUNC_2(VAR_6)->priv_root;

 VAR_8 = FUNC_13(VAR_6);
 if (VAR_8)
  goto error;

 if (FUNC_6(VAR_9) && !(VAR_7 & VAR_3)) {
  FUNC_8(FUNC_5(VAR_6->s_root));
  VAR_8 = FUNC_4(FUNC_2(VAR_6)->priv_root);
  FUNC_9(FUNC_5(VAR_6->s_root));
 }

 if (FUNC_7(VAR_9)) {
  VAR_6->s_xattr = VAR_5;
  FUNC_8(FUNC_5(VAR_9));
  if (!FUNC_2(VAR_6)->xattr_root) {
   struct dentry *VAR_10;

   VAR_10 = FUNC_10(VAR_4, VAR_9,
      FUNC_12(VAR_4));
   if (!FUNC_0(VAR_10))
    FUNC_2(VAR_6)->xattr_root = VAR_10;
   else
    VAR_8 = FUNC_1(VAR_10);
  }
  FUNC_9(FUNC_5(VAR_9));
 }

error:
 if (VAR_8) {
  FUNC_3(VAR_1, &FUNC_2(VAR_6)->s_mount_opt);
  FUNC_3(VAR_0, &FUNC_2(VAR_6)->s_mount_opt);
 }


 if (FUNC_11(VAR_6))
  VAR_6->s_flags |= VAR_2;
 else
  VAR_6->s_flags &= ~VAR_2;

 return VAR_8;
}
