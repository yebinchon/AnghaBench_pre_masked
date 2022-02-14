
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_state; } ;
struct file {TYPE_2__* f_op; TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_4__ {int (* fsync ) (struct file*,int ,int ,int) ;} ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,int ,int ,int) ;

int FUNC_2(struct file *VAR_2, loff_t VAR_3, loff_t VAR_4, int VAR_5)
{
 struct inode *VAR_6 = VAR_2->f_mapping->host;

 if (!VAR_2->f_op->fsync)
  return -VAR_0;
 if (!VAR_5 && (VAR_6->i_state & VAR_1))
  FUNC_0(VAR_6);
 return VAR_2->f_op->fsync(VAR_2, VAR_3, VAR_4, VAR_5);
}
