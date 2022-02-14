
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int mbx_poll_work; int qlcnic_wq; int state; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct qlcnic_adapter *VAR_2)
{
 if (FUNC_2(VAR_0, &VAR_2->state))
  return;

 FUNC_0(&VAR_2->mbx_poll_work, VAR_1);
 FUNC_1(VAR_2->qlcnic_wq, &VAR_2->mbx_poll_work, 0);
}
