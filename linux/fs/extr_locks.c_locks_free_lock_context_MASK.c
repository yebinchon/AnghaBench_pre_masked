
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct file_lock_context* i_flctx; } ;
struct file_lock_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct file_lock_context*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct file_lock_context*) ;

void
FUNC_3(struct inode *VAR_1)
{
 struct file_lock_context *VAR_2 = VAR_1->i_flctx;

 if (FUNC_2(VAR_2)) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_0, VAR_2);
 }
}
