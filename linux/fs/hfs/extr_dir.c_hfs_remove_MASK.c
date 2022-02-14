
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; int i_ctime; int i_ino; int i_mode; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ,struct inode*,int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 if (FUNC_0(VAR_3->i_mode) && VAR_3->i_size != 2)
  return -VAR_0;
 VAR_4 = FUNC_4(VAR_3->i_ino, VAR_1, &VAR_2->d_name);
 if (VAR_4)
  return VAR_4;
 FUNC_1(VAR_3);
 VAR_3->i_ctime = FUNC_2(VAR_3);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3);
 return 0;
}
