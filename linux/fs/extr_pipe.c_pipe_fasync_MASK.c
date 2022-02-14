
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int fasync_readers; int fasync_writers; } ;
struct file {int f_mode; struct pipe_inode_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pipe_inode_info*) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 int FUNC_2 (int,struct file*,int,int *) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, struct file *VAR_3, int VAR_4)
{
 struct pipe_inode_info *VAR_5 = VAR_3->private_data;
 int VAR_6 = 0;

 FUNC_0(VAR_5);
 if (VAR_3->f_mode & VAR_0)
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_5->fasync_readers);
 if ((VAR_3->f_mode & VAR_1) && VAR_6 >= 0) {
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_5->fasync_writers);
  if (VAR_6 < 0 && (VAR_3->f_mode & VAR_0))

   FUNC_2(-1, VAR_3, 0, &VAR_5->fasync_readers);
 }
 FUNC_1(VAR_5);
 return VAR_6;
}
