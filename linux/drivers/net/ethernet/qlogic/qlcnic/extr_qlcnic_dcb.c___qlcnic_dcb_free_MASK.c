
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_dcb {struct qlcnic_dcb* param; struct qlcnic_dcb* cfg; int * wq; int aen_work; int state; struct qlcnic_adapter* adapter; } ;
struct qlcnic_adapter {int * dcb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qlcnic_dcb*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct qlcnic_dcb *VAR_1)
{
 struct qlcnic_adapter *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->adapter;

 while (FUNC_3(VAR_0, &VAR_1->state))
  FUNC_4(10000, 11000);

 FUNC_0(&VAR_1->aen_work);

 if (VAR_1->wq) {
  FUNC_1(VAR_1->wq);
  VAR_1->wq = ((void*)0);
 }

 FUNC_2(VAR_1->cfg);
 VAR_1->cfg = ((void*)0);
 FUNC_2(VAR_1->param);
 VAR_1->param = ((void*)0);
 FUNC_2(VAR_1);
 VAR_2->dcb = ((void*)0);
}
