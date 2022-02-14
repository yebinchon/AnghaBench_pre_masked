
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_writecount; } ;
struct gfs2_inode {int dummy; } ;
struct file {int f_mode; int * private_data; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct gfs2_inode*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->private_data);
 VAR_2->private_data = ((void*)0);

 if (!(VAR_2->f_mode & VAR_0))
  return 0;

 FUNC_1(VAR_3, &VAR_1->i_writecount);
 return 0;
}
