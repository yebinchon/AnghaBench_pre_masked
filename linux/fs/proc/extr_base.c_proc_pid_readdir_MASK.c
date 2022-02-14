
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgid_iter {int tgid; int * task; } ;
struct pid_namespace {int proc_thread_self; int proc_self; } ;
struct inode {int i_ino; } ;
struct file {int dummy; } ;
struct dir_context {scalar_t__ pos; } ;
typedef int name ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct dir_context*,char*,int,int ,int ) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct pid_namespace*,int *,int ) ;
 struct tgid_iter FUNC_5 (struct pid_namespace*,struct tgid_iter) ;
 int FUNC_6 (struct file*,struct dir_context*,char*,unsigned int,int ,int *,int *) ;
 int VAR_4 ;
 struct pid_namespace* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 unsigned int FUNC_9 (char*,int,char*,int) ;

int FUNC_10(struct file *VAR_5, struct dir_context *VAR_6)
{
 struct tgid_iter VAR_7;
 struct pid_namespace *VAR_8 = FUNC_7(FUNC_3(VAR_5));
 loff_t VAR_9 = VAR_6->pos;

 if (VAR_9 >= VAR_2 + VAR_3)
  return 0;

 if (VAR_9 == VAR_3 - 2) {
  struct inode *VAR_10 = FUNC_1(VAR_8->proc_self);
  if (!FUNC_2(VAR_6, "self", 4, VAR_10->i_ino, VAR_0))
   return 0;
  VAR_6->pos = VAR_9 = VAR_9 + 1;
 }
 if (VAR_9 == VAR_3 - 1) {
  struct inode *VAR_11 = FUNC_1(VAR_8->proc_thread_self);
  if (!FUNC_2(VAR_6, "thread-self", 11, VAR_11->i_ino, VAR_0))
   return 0;
  VAR_6->pos = VAR_9 = VAR_9 + 1;
 }
 VAR_7.tgid = VAR_9 - VAR_3;
 VAR_7.task = ((void*)0);
 for (VAR_7 = FUNC_5(VAR_8, VAR_7);
      VAR_7.task;
      VAR_7.tgid += 1, VAR_7 = FUNC_5(VAR_8, VAR_7)) {
  char VAR_12[10 + 1];
  unsigned int VAR_13;

  FUNC_0();
  if (!FUNC_4(VAR_8, VAR_7.task, VAR_1))
   continue;

  VAR_13 = FUNC_9(VAR_12, sizeof(VAR_12), "%u", VAR_7.tgid);
  VAR_6->pos = VAR_7.tgid + VAR_3;
  if (!FUNC_6(VAR_5, VAR_6, VAR_12, VAR_13,
         VAR_4, VAR_7.task, ((void*)0))) {
   FUNC_8(VAR_7.task);
   return 0;
  }
 }
 VAR_6->pos = VAR_2 + VAR_3;
 return 0;
}
