
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct files_struct {int dummy; } ;
struct file {int f_mode; } ;
struct fd_data {unsigned int fd; int mode; } ;
struct dir_context {int pos; } ;
typedef int name ;
typedef int instantiate_t ;
struct TYPE_2__ {unsigned int max_fds; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct file*,struct dir_context*) ;
 struct file* FUNC_2 (struct files_struct*,unsigned int) ;
 int FUNC_3 (struct file*) ;
 TYPE_1__* FUNC_4 (struct files_struct*) ;
 struct files_struct* FUNC_5 (struct task_struct*) ;
 struct task_struct* FUNC_6 (int ) ;
 int FUNC_7 (struct file*,struct dir_context*,char*,unsigned int,int ,struct task_struct*,struct fd_data*) ;
 int FUNC_8 (struct files_struct*) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 unsigned int FUNC_12 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_1, struct dir_context *VAR_2,
         instantiate_t VAR_3)
{
 struct task_struct *VAR_4 = FUNC_6(FUNC_3(VAR_1));
 struct files_struct *VAR_5;
 unsigned int VAR_6;

 if (!VAR_4)
  return -VAR_0;

 if (!FUNC_1(VAR_1, VAR_2))
  goto out;
 VAR_5 = FUNC_5(VAR_4);
 if (!VAR_5)
  goto out;

 FUNC_10();
 for (VAR_6 = VAR_2->pos - 2;
      VAR_6 < FUNC_4(VAR_5)->max_fds;
      VAR_6++, VAR_2->pos++) {
  struct file *VAR_7;
  struct fd_data VAR_8;
  char VAR_9[10 + 1];
  unsigned int VAR_10;

  VAR_7 = FUNC_2(VAR_5, VAR_6);
  if (!VAR_7)
   continue;
  VAR_8.mode = VAR_7->f_mode;
  FUNC_11();
  VAR_8.fd = VAR_6;

  VAR_10 = FUNC_12(VAR_9, sizeof(VAR_9), "%u", VAR_6);
  if (!FUNC_7(VAR_1, VAR_2,
         VAR_9, VAR_10, VAR_3, VAR_4,
         &VAR_8))
   goto out_fd_loop;
  FUNC_0();
  FUNC_10();
 }
 FUNC_11();
out_fd_loop:
 FUNC_8(VAR_5);
out:
 FUNC_9(VAR_4);
 return 0;
}
