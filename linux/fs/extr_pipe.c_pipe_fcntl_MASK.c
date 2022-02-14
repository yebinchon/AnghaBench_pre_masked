
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {long buffers; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;


 long VAR_2 ;
 int FUNC_0 (struct pipe_inode_info*) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 struct pipe_inode_info* FUNC_2 (struct file*) ;
 long FUNC_3 (struct pipe_inode_info*,unsigned long) ;

long FUNC_4(struct file *VAR_3, unsigned int VAR_4, unsigned long VAR_5)
{
 struct pipe_inode_info *VAR_6;
 long VAR_7;

 VAR_6 = FUNC_2(VAR_3);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_6);

 switch (VAR_4) {
 case 128:
  VAR_7 = FUNC_3(VAR_6, VAR_5);
  break;
 case 129:
  VAR_7 = VAR_6->buffers * VAR_2;
  break;
 default:
  VAR_7 = -VAR_1;
  break;
 }

 FUNC_1(VAR_6);
 return VAR_7;
}
