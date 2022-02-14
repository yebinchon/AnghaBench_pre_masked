
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int vendor; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int*) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;
 int VAR_4 = 0;

 if (FUNC_3(VAR_2))
  return FUNC_4(VAR_2);

 VAR_3 = FUNC_1(VAR_2, FUNC_0(0), &VAR_4);
 if (VAR_4 == -VAR_0)
  return VAR_4;
 if ((VAR_3 & 0xffff) != VAR_2->pdev->vendor)
  return 1;

 return 0;
}
