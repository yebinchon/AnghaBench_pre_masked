
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct mm_struct {int core_state; } ;


 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (struct seq_file*,char) ;

__attribute__((used)) static inline void FUNC_2(struct seq_file *VAR_0, struct mm_struct *VAR_1)
{
 FUNC_0(VAR_0, "CoreDumping:\t", !!VAR_1->core_state);
 FUNC_1(VAR_0, '\n');
}
