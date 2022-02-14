
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 if (!FUNC_0(VAR_2))
  return 0;

 if (VAR_3->f_mode & VAR_1) {
  FUNC_2("Denying opening verity file (ino %lu) for write\n",
    VAR_2->i_ino);
  return -VAR_0;
 }

 return FUNC_1(VAR_2);
}
