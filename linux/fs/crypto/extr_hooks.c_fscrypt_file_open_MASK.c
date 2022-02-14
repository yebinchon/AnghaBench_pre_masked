
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int i_ino; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (TYPE_1__*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,char*,int ) ;

int FUNC_8(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3;
 struct dentry *VAR_4;

 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_4 = FUNC_2(FUNC_4(VAR_2));
 if (FUNC_0(FUNC_1(VAR_4)) &&
     !FUNC_5(FUNC_1(VAR_4), VAR_1)) {
  FUNC_7(VAR_1,
        "Inconsistent encryption context (parent directory: %lu)",
        FUNC_1(VAR_4)->i_ino);
  VAR_3 = -VAR_0;
 }
 FUNC_3(VAR_4);
 return VAR_3;
}
