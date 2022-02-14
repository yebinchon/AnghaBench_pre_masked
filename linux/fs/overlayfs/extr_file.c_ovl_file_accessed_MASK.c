
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_mtime; } ;
struct file {int f_flags; int f_path; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct file*) ;
 struct inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct file *VAR_1)
{
 struct inode *VAR_2, *VAR_3;

 if (VAR_1->f_flags & VAR_0)
  return;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3)
  return;

 if ((!FUNC_2(&VAR_2->i_mtime, &VAR_3->i_mtime) ||
      !FUNC_2(&VAR_2->i_ctime, &VAR_3->i_ctime))) {
  VAR_2->i_mtime = VAR_3->i_mtime;
  VAR_2->i_ctime = VAR_3->i_ctime;
 }

 FUNC_3(&VAR_1->f_path);
}
