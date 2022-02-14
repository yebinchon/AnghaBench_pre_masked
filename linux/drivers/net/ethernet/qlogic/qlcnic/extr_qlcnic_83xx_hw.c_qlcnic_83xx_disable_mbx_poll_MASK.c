
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int mbx_poll_work; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct qlcnic_adapter *VAR_1)
{
 if (!FUNC_1(VAR_0, &VAR_1->state))
  return;
 FUNC_0(&VAR_1->mbx_poll_work);
}
