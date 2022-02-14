
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_dcb {int aen_work; int wq; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_dcb *VAR_1, void *VAR_2)
{
 if (FUNC_1(VAR_0, &VAR_1->state))
  return;

 FUNC_0(VAR_1->wq, &VAR_1->aen_work, 0);
}
