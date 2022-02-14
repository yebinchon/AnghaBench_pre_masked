
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct file {struct pipe_inode_info* private_data; int * f_op; } ;


 int VAR_0 ;

struct pipe_inode_info *FUNC_0(struct file *VAR_1)
{
 return VAR_1->f_op == &VAR_0 ? VAR_1->private_data : ((void*)0);
}
