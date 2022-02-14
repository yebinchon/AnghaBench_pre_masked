
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int ip_lockres; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,char*,struct dentry*,...) ;
 int FUNC_3 (struct inode*,struct dentry*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1,
   struct dentry *VAR_2)
{
 int VAR_3;
 struct inode *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(0, "unlink inode %lu\n", VAR_4->i_ino);



 VAR_3 = FUNC_4(&FUNC_0(VAR_4)->ip_lockres);
 if (VAR_3 < 0) {
  FUNC_2(VAR_0, "unlink %pd, error %d from destroy\n",
       VAR_2, VAR_3);
  goto bail;
 }
 VAR_3 = FUNC_3(VAR_1, VAR_2);
bail:
 return VAR_3;
}
