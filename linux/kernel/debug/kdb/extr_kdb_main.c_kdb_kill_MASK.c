
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct task_struct* group_leader; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_0 (long,int *) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct task_struct*,long) ;
 long FUNC_3 (char const*,char**,int ) ;
 int FUNC_4 (long) ;

__attribute__((used)) static int FUNC_5(int VAR_3, const char **VAR_4)
{
 long VAR_5, VAR_6;
 char *VAR_7;
 struct task_struct *VAR_8;

 if (VAR_3 != 2)
  return VAR_0;

 VAR_5 = FUNC_3(VAR_4[1], &VAR_7, 0);
 if (*VAR_7)
  return VAR_1;
 if ((VAR_5 >= 0) || !FUNC_4(-VAR_5)) {
  FUNC_1("Invalid signal parameter.<-signal>\n");
  return 0;
 }
 VAR_5 = -VAR_5;

 VAR_6 = FUNC_3(VAR_4[2], &VAR_7, 0);
 if (*VAR_7)
  return VAR_1;
 if (VAR_6 <= 0) {
  FUNC_1("Process ID must be large than 0.\n");
  return 0;
 }


 VAR_8 = FUNC_0(VAR_6, &VAR_2);
 if (!VAR_8) {
  FUNC_1("The specified process isn't found.\n");
  return 0;
 }
 VAR_8 = VAR_8->group_leader;
 FUNC_2(VAR_8, VAR_5);
 return 0;
}
