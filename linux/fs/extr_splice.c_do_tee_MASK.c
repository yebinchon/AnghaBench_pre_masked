
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct pipe_inode_info* FUNC_0 (struct file*) ;
 int FUNC_1 (struct pipe_inode_info*,unsigned int) ;
 int FUNC_2 (struct pipe_inode_info*,struct pipe_inode_info*,size_t,unsigned int) ;
 int FUNC_3 (struct pipe_inode_info*,unsigned int) ;

__attribute__((used)) static long FUNC_4(struct file *VAR_3, struct file *VAR_4, size_t VAR_5,
     unsigned int VAR_6)
{
 struct pipe_inode_info *VAR_7 = FUNC_0(VAR_3);
 struct pipe_inode_info *VAR_8 = FUNC_0(VAR_4);
 int VAR_9 = -VAR_0;





 if (VAR_7 && VAR_8 && VAR_7 != VAR_8) {
  if ((VAR_3->f_flags | VAR_4->f_flags) & VAR_1)
   VAR_6 |= VAR_2;





  VAR_9 = FUNC_1(VAR_7, VAR_6);
  if (!VAR_9) {
   VAR_9 = FUNC_3(VAR_8, VAR_6);
   if (!VAR_9)
    VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_5, VAR_6);
  }
 }

 return VAR_9;
}
