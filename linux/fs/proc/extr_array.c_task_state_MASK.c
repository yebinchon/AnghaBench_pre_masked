
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct task_struct {scalar_t__ files; TYPE_1__* fs; int real_parent; } ;
struct seq_file {int dummy; } ;
struct pid_namespace {int level; } ;
struct pid {int level; TYPE_2__* numbers; } ;
struct group_info {int ngroups; int * gid; } ;
struct cred {struct group_info* group_info; int fsgid; int sgid; int egid; int gid; int fsuid; int suid; int euid; int uid; } ;
typedef unsigned int pid_t ;
struct TYPE_6__ {unsigned int max_fds; } ;
struct TYPE_5__ {struct pid_namespace* ns; } ;
struct TYPE_4__ {int umask; } ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (struct user_namespace*,int ) ;
 unsigned int FUNC_2 (struct user_namespace*,int ) ;
 struct cred* FUNC_3 (struct task_struct*) ;
 char* FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 unsigned int FUNC_6 (struct pid*,struct pid_namespace*) ;
 struct task_struct* FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct cred const*) ;
 struct task_struct* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct seq_file*,char*,int) ;
 int FUNC_13 (struct seq_file*,char*,unsigned int) ;
 int FUNC_14 (struct seq_file*,char) ;
 int FUNC_15 (struct seq_file*,char*) ;
 struct user_namespace* FUNC_16 (struct seq_file*) ;
 int FUNC_17 (struct task_struct*) ;
 unsigned int FUNC_18 (struct task_struct*) ;
 unsigned int FUNC_19 (struct task_struct*,struct pid_namespace*) ;
 unsigned int FUNC_20 (struct task_struct*,struct pid_namespace*) ;
 unsigned int FUNC_21 (struct task_struct*,struct pid_namespace*) ;
 unsigned int FUNC_22 (struct task_struct*,struct pid_namespace*) ;
 int FUNC_23 (struct task_struct*) ;

__attribute__((used)) static inline void FUNC_24(struct seq_file *VAR_0, struct pid_namespace *VAR_1,
    struct pid *VAR_2, struct task_struct *VAR_3)
{
 struct user_namespace *VAR_4 = FUNC_16(VAR_0);
 struct group_info *VAR_5;
 int VAR_6, VAR_7 = -1;
 struct task_struct *VAR_8;
 const struct cred *VAR_9;
 pid_t VAR_10, VAR_11 = 0, VAR_12, VAR_13;
 unsigned int VAR_14 = 0;

 FUNC_10();
 VAR_10 = FUNC_5(VAR_3) ?
  FUNC_22(FUNC_9(VAR_3->real_parent), VAR_1) : 0;

 VAR_8 = FUNC_7(VAR_3);
 if (VAR_8)
  VAR_11 = FUNC_20(VAR_8, VAR_1);

 VAR_12 = FUNC_22(VAR_3, VAR_1);
 VAR_13 = FUNC_18(VAR_3);
 VAR_9 = FUNC_3(VAR_3);

 FUNC_17(VAR_3);
 if (VAR_3->fs)
  VAR_7 = VAR_3->fs->umask;
 if (VAR_3->files)
  VAR_14 = FUNC_0(VAR_3->files)->max_fds;
 FUNC_23(VAR_3);
 FUNC_11();

 if (VAR_7 >= 0)
  FUNC_12(VAR_0, "Umask:\t%#04o\n", VAR_7);
 FUNC_15(VAR_0, "State:\t");
 FUNC_15(VAR_0, FUNC_4(VAR_3));

 FUNC_13(VAR_0, "\nTgid:\t", VAR_12);
 FUNC_13(VAR_0, "\nNgid:\t", VAR_13);
 FUNC_13(VAR_0, "\nPid:\t", FUNC_6(VAR_2, VAR_1));
 FUNC_13(VAR_0, "\nPPid:\t", VAR_10);
 FUNC_13(VAR_0, "\nTracerPid:\t", VAR_11);
 FUNC_13(VAR_0, "\nUid:\t", FUNC_2(VAR_4, VAR_9->uid));
 FUNC_13(VAR_0, "\t", FUNC_2(VAR_4, VAR_9->euid));
 FUNC_13(VAR_0, "\t", FUNC_2(VAR_4, VAR_9->suid));
 FUNC_13(VAR_0, "\t", FUNC_2(VAR_4, VAR_9->fsuid));
 FUNC_13(VAR_0, "\nGid:\t", FUNC_1(VAR_4, VAR_9->gid));
 FUNC_13(VAR_0, "\t", FUNC_1(VAR_4, VAR_9->egid));
 FUNC_13(VAR_0, "\t", FUNC_1(VAR_4, VAR_9->sgid));
 FUNC_13(VAR_0, "\t", FUNC_1(VAR_4, VAR_9->fsgid));
 FUNC_13(VAR_0, "\nFDSize:\t", VAR_14);

 FUNC_15(VAR_0, "\nGroups:\t");
 VAR_5 = VAR_9->group_info;
 for (VAR_6 = 0; VAR_6 < VAR_5->ngroups; VAR_6++)
  FUNC_13(VAR_0, VAR_6 ? " " : "",
    FUNC_1(VAR_4, VAR_5->gid[VAR_6]));
 FUNC_8(VAR_9);

 FUNC_14(VAR_0, ' ');
 FUNC_14(VAR_0, '\n');
}
