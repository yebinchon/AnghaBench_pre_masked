
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct mm_struct {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct seq_file *VAR_2, struct mm_struct *VAR_3)
{
 bool VAR_4 = FUNC_0(VAR_0);

 if (VAR_4)
  VAR_4 = !FUNC_2(VAR_1, &VAR_3->flags);
 FUNC_1(VAR_2, "THP_enabled:\t%d\n", VAR_4);
}
