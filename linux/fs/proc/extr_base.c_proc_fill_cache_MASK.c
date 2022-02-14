
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct qstr {int dummy; } ;
struct inode {int i_ino; int i_mode; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dir_context {int dummy; } ;
struct dentry {int dummy; } ;
typedef struct dentry* (* instantiate_t ) (struct dentry*,struct task_struct*,void const*) ;
typedef int ino_t ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 struct qstr FUNC_2 (char const*,unsigned int) ;
 struct dentry* FUNC_3 (struct dentry*,struct qstr*,int *) ;
 struct dentry* FUNC_4 (struct dentry*,struct qstr*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 struct inode* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dir_context*,char const*,unsigned int,int,unsigned int) ;
 int FUNC_9 (struct dentry*) ;
 scalar_t__ FUNC_10 (struct dentry*) ;
 int VAR_1 ;

bool FUNC_11(struct file *VAR_2, struct dir_context *VAR_3,
 const char *VAR_4, unsigned int VAR_5,
 instantiate_t VAR_6, struct task_struct *VAR_7, const void *VAR_8)
{
 struct dentry *VAR_9, *VAR_10 = VAR_2->f_path.dentry;
 struct qstr VAR_11 = FUNC_2(VAR_4, VAR_5);
 struct inode *VAR_12;
 unsigned VAR_13 = VAR_0;
 ino_t VAR_14 = 1;

 VAR_9 = FUNC_4(VAR_10, &VAR_11);
 if (!VAR_9) {
  FUNC_0(VAR_1);
  VAR_9 = FUNC_3(VAR_10, &VAR_11, &VAR_1);
  if (FUNC_1(VAR_9))
   goto end_instantiate;
  if (FUNC_5(VAR_9)) {
   struct dentry *VAR_15;
   VAR_15 = VAR_6(VAR_9, VAR_7, VAR_8);
   FUNC_7(VAR_9);
   if (FUNC_10(VAR_15)) {
    FUNC_9(VAR_9);
    VAR_9 = VAR_15;
    if (FUNC_1(VAR_9))
     goto end_instantiate;
   }
  }
 }
 VAR_12 = FUNC_6(VAR_9);
 VAR_14 = VAR_12->i_ino;
 VAR_13 = VAR_12->i_mode >> 12;
 FUNC_9(VAR_9);
end_instantiate:
 return FUNC_8(VAR_3, VAR_4, VAR_5, VAR_14, VAR_13);
}
