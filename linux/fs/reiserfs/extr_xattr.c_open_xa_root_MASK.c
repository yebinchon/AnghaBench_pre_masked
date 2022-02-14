
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int xattr_root; struct dentry* priv_root; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,struct dentry*,int) ;

__attribute__((used)) static struct dentry *FUNC_10(struct super_block *VAR_2, int VAR_3)
{
 struct dentry *VAR_4 = FUNC_1(VAR_2)->priv_root;
 struct dentry *VAR_5;

 if (FUNC_3(VAR_4))
  return FUNC_0(-VAR_0);

 FUNC_6(FUNC_2(VAR_4), VAR_1);

 VAR_5 = FUNC_4(FUNC_1(VAR_2)->xattr_root);
 if (!VAR_5)
  VAR_5 = FUNC_0(-VAR_0);
 else if (FUNC_3(VAR_5)) {
  int VAR_6 = -VAR_0;

  if (FUNC_8(VAR_3))
   VAR_6 = FUNC_9(FUNC_2(VAR_4), VAR_5, 0700);
  if (VAR_6) {
   FUNC_5(VAR_5);
   VAR_5 = FUNC_0(VAR_6);
  }
 }

 FUNC_7(FUNC_2(VAR_4));
 return VAR_5;
}
