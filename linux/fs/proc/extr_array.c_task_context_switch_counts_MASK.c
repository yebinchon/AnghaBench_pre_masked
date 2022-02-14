
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int nivcsw; int nvcsw; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (struct seq_file*,char) ;

__attribute__((used)) static inline void FUNC_2(struct seq_file *VAR_0,
      struct task_struct *VAR_1)
{
 FUNC_0(VAR_0, "voluntary_ctxt_switches:\t", VAR_1->nvcsw);
 FUNC_0(VAR_0, "\nnonvoluntary_ctxt_switches:\t", VAR_1->nivcsw);
 FUNC_1(VAR_0, '\n');
}
