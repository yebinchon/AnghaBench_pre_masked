
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int state; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct net_device *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_1(VAR_1);

 if (!FUNC_4(VAR_0, &VAR_2->state))
  return;

 if (FUNC_2(VAR_2))
  FUNC_3(VAR_1);
 else
  FUNC_0(VAR_1, 0);
}
