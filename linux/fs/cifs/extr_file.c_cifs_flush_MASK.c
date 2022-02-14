
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;
struct file {int f_mode; } ;
typedef int fl_owner_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct inode*,struct file*,int) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct file *VAR_2, fl_owner_t VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = 0;

 if (VAR_2->f_mode & VAR_0)
  VAR_5 = FUNC_2(VAR_4->i_mapping);

 FUNC_0(VAR_1, "Flush inode %p file %p rc %d\n", VAR_4, VAR_2, VAR_5);

 return VAR_5;
}
