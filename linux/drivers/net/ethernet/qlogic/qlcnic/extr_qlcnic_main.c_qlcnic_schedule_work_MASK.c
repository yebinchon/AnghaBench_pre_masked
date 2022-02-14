
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int work_func_t ;
struct qlcnic_adapter {int fw_work; int qlcnic_wq; int state; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct qlcnic_adapter *VAR_1,
     work_func_t VAR_2, int VAR_3)
{
 if (FUNC_3(VAR_0, &VAR_1->state))
  return;

 FUNC_0(&VAR_1->fw_work, VAR_2);
 FUNC_1(VAR_1->qlcnic_wq, &VAR_1->fw_work,
      FUNC_2(VAR_3));
}
