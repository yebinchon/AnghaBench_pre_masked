
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int fasync_writers; int fasync_readers; int wait; scalar_t__ writers; scalar_t__ readers; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct pipe_inode_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct pipe_inode_info*) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct inode*,struct pipe_inode_info*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_11, struct file *VAR_12)
{
 struct pipe_inode_info *VAR_13 = VAR_12->private_data;

 FUNC_0(VAR_13);
 if (VAR_12->f_mode & VAR_6)
  VAR_13->readers--;
 if (VAR_12->f_mode & VAR_7)
  VAR_13->writers--;

 if (VAR_13->readers || VAR_13->writers) {
  FUNC_4(&VAR_13->wait, VAR_2 | VAR_3 | VAR_4 | VAR_5 | VAR_0 | VAR_1);
  FUNC_2(&VAR_13->fasync_readers, VAR_10, VAR_8);
  FUNC_2(&VAR_13->fasync_writers, VAR_10, VAR_9);
 }
 FUNC_1(VAR_13);

 FUNC_3(VAR_11, VAR_13);
 return 0;
}
