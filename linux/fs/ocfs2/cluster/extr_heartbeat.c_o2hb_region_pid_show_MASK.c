
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {scalar_t__ hr_task; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 struct o2hb_region* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_1, char *VAR_2)
{
 struct o2hb_region *VAR_3 = FUNC_4(VAR_1);
 pid_t VAR_4 = 0;

 FUNC_0(&VAR_0);
 if (VAR_3->hr_task)
  VAR_4 = FUNC_3(VAR_3->hr_task);
 FUNC_1(&VAR_0);

 if (!VAR_4)
  return 0;

 return FUNC_2(VAR_2, "%u\n", VAR_4);
}
