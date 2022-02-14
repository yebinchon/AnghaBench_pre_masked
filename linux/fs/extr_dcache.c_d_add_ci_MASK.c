
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int d_parent; int d_wait; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (int ,struct qstr*) ;
 struct dentry* FUNC_3 (int ,struct qstr*,int ) ;
 struct dentry* FUNC_4 (int ,struct qstr*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 struct dentry* FUNC_6 (struct inode*,struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct inode*) ;

struct dentry *FUNC_9(struct dentry *VAR_1, struct inode *VAR_2,
   struct qstr *VAR_3)
{
 struct dentry *VAR_4, *VAR_5;





 VAR_4 = FUNC_4(VAR_1->d_parent, VAR_3);
 if (VAR_4) {
  FUNC_8(VAR_2);
  return VAR_4;
 }
 if (FUNC_5(VAR_1)) {
  VAR_4 = FUNC_3(VAR_1->d_parent, VAR_3,
     VAR_1->d_wait);
  if (FUNC_1(VAR_4) || !FUNC_5(VAR_4)) {
   FUNC_8(VAR_2);
   return VAR_4;
  }
 } else {
  VAR_4 = FUNC_2(VAR_1->d_parent, VAR_3);
  if (!VAR_4) {
   FUNC_8(VAR_2);
   return FUNC_0(-VAR_0);
  }
 }
 VAR_5 = FUNC_6(VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_7(VAR_4);
  return VAR_5;
 }
 return VAR_4;
}
