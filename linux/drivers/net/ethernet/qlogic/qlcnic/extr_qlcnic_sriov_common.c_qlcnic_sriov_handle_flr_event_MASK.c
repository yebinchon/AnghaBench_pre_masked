
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_vf_info {struct qlcnic_adapter* adapter; } ;
struct qlcnic_sriov {int dummy; } ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_sriov*,struct qlcnic_vf_info*) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_sriov *VAR_0,
       struct qlcnic_vf_info *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = VAR_1->adapter;

 if (FUNC_1(VAR_2))
  FUNC_2(VAR_0, VAR_1);
 else
  FUNC_0(&VAR_2->pdev->dev,
   "Invalid event to VF. VF should not get FLR event\n");
}
