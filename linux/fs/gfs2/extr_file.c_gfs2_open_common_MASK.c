
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct gfs2_file {int f_fl_mutex; } ;
struct file {struct gfs2_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (int ,int) ;
 struct gfs2_file* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 struct gfs2_file *VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_2->i_mode)) {
  VAR_5 = FUNC_2(VAR_2, VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 VAR_4 = FUNC_4(sizeof(struct gfs2_file), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_5(&VAR_4->f_fl_mutex);

 FUNC_3(FUNC_0(VAR_2), !VAR_3->private_data);
 VAR_3->private_data = VAR_4;
 return 0;
}
