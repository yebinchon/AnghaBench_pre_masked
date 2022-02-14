
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int portnum; int netdev; int pdev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

void FUNC_4(struct qlcnic_adapter *VAR_0)
{
 if (!FUNC_3(VAR_0))
  return;

 if (!FUNC_2(VAR_0))
  return;

 FUNC_1(VAR_0->pdev);
 FUNC_0(VAR_0->netdev,
      "SR-IOV is disabled successfully on port %d\n",
      VAR_0->portnum);
}
