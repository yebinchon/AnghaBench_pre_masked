
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_fsm {int hnp_polling_work; int host_req_flag; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct otg_fsm *VAR_2)
{




 if (!VAR_2->host_req_flag)
  return;

 FUNC_0(&VAR_2->hnp_polling_work, VAR_1);
 FUNC_2(&VAR_2->hnp_polling_work,
     FUNC_1(VAR_0));
}
