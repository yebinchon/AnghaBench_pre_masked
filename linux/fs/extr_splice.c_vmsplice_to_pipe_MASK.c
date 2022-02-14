
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct iov_iter {int dummy; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct pipe_inode_info* FUNC_0 (struct file*) ;
 long FUNC_1 (struct iov_iter*,struct pipe_inode_info*,unsigned int) ;
 int FUNC_2 (struct pipe_inode_info*) ;
 int FUNC_3 (struct pipe_inode_info*) ;
 long FUNC_4 (struct pipe_inode_info*,unsigned int) ;
 int FUNC_5 (struct pipe_inode_info*) ;

__attribute__((used)) static long FUNC_6(struct file *VAR_3, struct iov_iter *VAR_4,
        unsigned int VAR_5)
{
 struct pipe_inode_info *VAR_6;
 long VAR_7 = 0;
 unsigned VAR_8 = 0;

 if (VAR_5 & VAR_2)
  VAR_8 = VAR_1;

 VAR_6 = FUNC_0(VAR_3);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_6);
 VAR_7 = FUNC_4(VAR_6, VAR_5);
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_4, VAR_6, VAR_8);
 FUNC_3(VAR_6);
 if (VAR_7 > 0)
  FUNC_5(VAR_6);
 return VAR_7;
}
