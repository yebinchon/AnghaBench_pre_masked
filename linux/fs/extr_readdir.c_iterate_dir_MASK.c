
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_rwsem; } ;
struct file {int f_pos; TYPE_1__* f_op; } ;
struct dir_context {int pos; } ;
struct TYPE_2__ {int (* iterate_shared ) (struct file*,struct dir_context*) ;int (* iterate ) (struct file*,struct dir_context*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct file*,int ) ;
 int FUNC_9 (struct file*,struct dir_context*) ;
 int FUNC_10 (struct file*,struct dir_context*) ;

int FUNC_11(struct file *VAR_3, struct dir_context *VAR_4)
{
 struct inode *VAR_5 = FUNC_4(VAR_3);
 bool VAR_6 = 0;
 int VAR_7 = -VAR_1;
 if (VAR_3->f_op->iterate_shared)
  VAR_6 = 1;
 else if (!VAR_3->f_op->iterate)
  goto out;

 VAR_7 = FUNC_8(VAR_3, VAR_2);
 if (VAR_7)
  goto out;

 if (VAR_6)
  VAR_7 = FUNC_1(&VAR_5->i_rwsem);
 else
  VAR_7 = FUNC_2(&VAR_5->i_rwsem);
 if (VAR_7)
  goto out;

 VAR_7 = -VAR_0;
 if (!FUNC_0(VAR_5)) {
  VAR_4->pos = VAR_3->f_pos;
  if (VAR_6)
   VAR_7 = VAR_3->f_op->iterate_shared(VAR_3, VAR_4);
  else
   VAR_7 = VAR_3->f_op->iterate(VAR_3, VAR_4);
  VAR_3->f_pos = VAR_4->pos;
  FUNC_5(VAR_3);
  FUNC_3(VAR_3);
 }
 if (VAR_6)
  FUNC_7(VAR_5);
 else
  FUNC_6(VAR_5);
out:
 return VAR_7;
}
