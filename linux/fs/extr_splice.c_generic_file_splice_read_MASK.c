
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct kiocb {int ki_pos; } ;
struct iov_iter {int idx; scalar_t__ iov_offset; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,struct kiocb*,struct iov_iter*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct kiocb*,struct file*) ;
 int FUNC_3 (struct iov_iter*,int ) ;
 int FUNC_4 (struct iov_iter*,int ,struct pipe_inode_info*,size_t) ;

ssize_t FUNC_5(struct file *VAR_3, loff_t *VAR_4,
     struct pipe_inode_info *VAR_5, size_t VAR_6,
     unsigned int VAR_7)
{
 struct iov_iter VAR_8;
 struct kiocb VAR_9;
 int VAR_10, VAR_11;

 FUNC_4(&VAR_8, VAR_2, VAR_5, VAR_6);
 VAR_10 = VAR_8.idx;
 FUNC_2(&VAR_9, VAR_3);
 VAR_9.ki_pos = *VAR_4;
 VAR_11 = FUNC_0(VAR_3, &VAR_9, &VAR_8);
 if (VAR_11 > 0) {
  *VAR_4 = VAR_9.ki_pos;
  FUNC_1(VAR_3);
 } else if (VAR_11 < 0) {
  VAR_8.idx = VAR_10;
  VAR_8.iov_offset = 0;
  FUNC_3(&VAR_8, 0);




  if (VAR_11 == -VAR_1)
   VAR_11 = -VAR_0;
 }

 return VAR_11;
}
