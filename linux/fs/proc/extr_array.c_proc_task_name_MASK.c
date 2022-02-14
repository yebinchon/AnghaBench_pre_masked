
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcomm ;
struct task_struct {int flags; } ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,struct task_struct*) ;
 int FUNC_1 (struct seq_file*,int) ;
 size_t FUNC_2 (struct seq_file*,char**) ;
 int FUNC_3 (char*,char*,size_t,int,char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,int,struct task_struct*) ;

void FUNC_6(struct seq_file *VAR_3, struct task_struct *VAR_4, bool VAR_5)
{
 char *VAR_6;
 size_t VAR_7;
 char VAR_8[64];
 int VAR_9;

 if (VAR_4->flags & VAR_2)
  FUNC_5(VAR_8, sizeof(VAR_8), VAR_4);
 else
  FUNC_0(VAR_8, sizeof(VAR_8), VAR_4);

 VAR_7 = FUNC_2(VAR_3, &VAR_6);
 if (VAR_5) {
  VAR_9 = FUNC_3(VAR_8, VAR_6, VAR_7,
     VAR_0 | VAR_1, "\n\\");
  if (VAR_9 >= VAR_7)
   VAR_9 = -1;
 } else {
  VAR_9 = FUNC_4(VAR_6, VAR_8, VAR_7);
 }

 FUNC_1(VAR_3, VAR_9);
}
