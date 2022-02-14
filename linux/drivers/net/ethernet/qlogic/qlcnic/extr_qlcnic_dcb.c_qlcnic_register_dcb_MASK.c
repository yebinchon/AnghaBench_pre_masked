
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_dcb {scalar_t__ state; struct qlcnic_adapter* adapter; } ;
struct qlcnic_adapter {struct qlcnic_dcb* dcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qlcnic_dcb* FUNC_0 (int,int ) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;

int FUNC_3(struct qlcnic_adapter *VAR_2)
{
 struct qlcnic_dcb *VAR_3;

 if (FUNC_2(VAR_2))
  return 0;

 VAR_3 = FUNC_0(sizeof(struct qlcnic_dcb), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->dcb = VAR_3;
 VAR_3->adapter = VAR_2;
 FUNC_1(VAR_2);
 VAR_3->state = 0;

 return 0;
}
