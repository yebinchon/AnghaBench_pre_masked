
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {char* comm; } ;
struct seq_file {int dummy; } ;
struct gfs2_holder {scalar_t__ gh_ip; scalar_t__ gh_owner_pid; int gh_error; int gh_iflags; int gh_flags; int gh_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,char const*,int ,int ,int ,long,char*,void*) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct task_struct* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct seq_file *VAR_1, const struct gfs2_holder *VAR_2,
   const char *VAR_3)
{
 struct task_struct *VAR_4 = ((void*)0);
 char VAR_5[32];

 FUNC_4();
 if (VAR_2->gh_owner_pid)
  VAR_4 = FUNC_3(VAR_2->gh_owner_pid, VAR_0);
 FUNC_0(VAR_1, "%s H: s:%s f:%s e:%d p:%ld [%s] %pS\n",
         VAR_3, FUNC_6(VAR_2->gh_state),
         FUNC_1(VAR_5, VAR_2->gh_flags, VAR_2->gh_iflags),
         VAR_2->gh_error,
         VAR_2->gh_owner_pid ? (long)FUNC_2(VAR_2->gh_owner_pid) : -1,
         VAR_4 ? VAR_4->comm : "(ended)",
         (void *)VAR_2->gh_ip);
 FUNC_5();
}
