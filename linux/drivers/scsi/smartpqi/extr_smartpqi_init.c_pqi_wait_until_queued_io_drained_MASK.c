
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_queue_group {int * submit_lock; int * request_list; } ;
struct pqi_ctrl_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_2 (struct pqi_ctrl_info*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct pqi_ctrl_info *VAR_1,
 struct pqi_queue_group *VAR_2)
{
 unsigned int VAR_3;
 unsigned long VAR_4;
 bool VAR_5;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  while (1) {
   FUNC_3(
    &VAR_2->submit_lock[VAR_3], VAR_4);
   VAR_5 =
    FUNC_0(&VAR_2->request_list[VAR_3]);
   FUNC_4(
    &VAR_2->submit_lock[VAR_3], VAR_4);
   if (VAR_5)
    break;
   FUNC_1(VAR_1);
   if (FUNC_2(VAR_1))
    return -VAR_0;
   FUNC_5(1000, 2000);
  }
 }

 return 0;
}
