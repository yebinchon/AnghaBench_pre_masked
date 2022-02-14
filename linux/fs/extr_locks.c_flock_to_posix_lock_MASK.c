
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock64 {int l_len; int l_start; int l_whence; int l_type; } ;
struct flock {int l_len; int l_start; int l_whence; int l_type; } ;
struct file_lock {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,struct file_lock*,struct flock64*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, struct file_lock *VAR_1,
          struct flock *VAR_2)
{
 struct flock64 VAR_3 = {
  .l_type = VAR_2->l_type,
  .l_whence = VAR_2->l_whence,
  .l_start = VAR_2->l_start,
  .l_len = VAR_2->l_len,
 };

 return FUNC_0(VAR_0, VAR_1, &VAR_3);
}
