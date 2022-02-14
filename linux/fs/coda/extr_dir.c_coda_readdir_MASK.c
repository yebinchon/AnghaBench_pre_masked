
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
struct dir_context {int dummy; } ;
struct coda_file_info {struct file* cfi_container; } ;
struct TYPE_2__ {int (* iterate ) (struct file*,struct dir_context*) ;int (* iterate_shared ) (struct file*,struct dir_context*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct coda_file_info* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,struct dir_context*) ;
 int FUNC_3 (struct file*) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct file*,struct dir_context*) ;
 int FUNC_10 (struct file*,struct dir_context*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_1, struct dir_context *VAR_2)
{
 struct coda_file_info *VAR_3;
 struct file *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = VAR_3->cfi_container;

 if (VAR_4->f_op->iterate || VAR_4->f_op->iterate_shared) {
  struct inode *VAR_6 = FUNC_4(VAR_4);
  VAR_5 = -VAR_0;
  if (!FUNC_0(VAR_6)) {
   if (VAR_4->f_op->iterate_shared) {
    FUNC_6(VAR_6);
    VAR_5 = VAR_4->f_op->iterate_shared(VAR_4, VAR_2);
    FUNC_3(VAR_4);
    FUNC_8(VAR_6);
   } else {
    FUNC_5(VAR_6);
    VAR_5 = VAR_4->f_op->iterate(VAR_4, VAR_2);
    FUNC_3(VAR_4);
    FUNC_7(VAR_6);
   }
  }
  return VAR_5;
 }

 return FUNC_2(VAR_1, VAR_2);
}
