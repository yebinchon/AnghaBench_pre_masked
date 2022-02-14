
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_queue_group {scalar_t__* iq_pi_copy; int * iq_ci; } ;
struct pqi_ctrl_info {unsigned int num_queue_groups; struct pqi_queue_group* queue_groups; } ;
typedef scalar_t__ pqi_index_t ;


 int VAR_0 ;
 int FUNC_0 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_1 (struct pqi_ctrl_info*) ;
 int FUNC_2 (struct pqi_ctrl_info*,struct pqi_queue_group*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct pqi_ctrl_info *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;
 struct pqi_queue_group *VAR_5;
 pqi_index_t VAR_6;
 pqi_index_t VAR_7;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_queue_groups; VAR_3++) {
  VAR_5 = &VAR_1->queue_groups[VAR_3];

  VAR_2 = FUNC_2(VAR_1, VAR_5);
  if (VAR_2)
   return VAR_2;

  for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
   VAR_6 = VAR_5->iq_pi_copy[VAR_4];

   while (1) {
    VAR_7 = FUNC_3(VAR_5->iq_ci[VAR_4]);
    if (VAR_7 == VAR_6)
     break;
    FUNC_0(VAR_1);
    if (FUNC_1(VAR_1))
     return -VAR_0;
    FUNC_4(1000, 2000);
   }
  }
 }

 return 0;
}
