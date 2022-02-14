
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int netdev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

int FUNC_3(struct qlcnic_adapter *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0->netdev,
      "failed to set Rx coalescing parameters\n");

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0->netdev,
      "failed to set Tx coalescing parameters\n");

 return VAR_1;
}
