
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int dcb_capability; } ;
struct qlcnic_dcb_cfg {TYPE_2__ capability; } ;
struct qlcnic_adapter {TYPE_1__* dcb; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int state; struct qlcnic_dcb_cfg* cfg; } ;


 int VAR_0 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static u8 FUNC_2(struct net_device *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_0(VAR_1);
 struct qlcnic_dcb_cfg *VAR_3 = VAR_2->dcb->cfg;

 if (!FUNC_1(VAR_0, &VAR_2->dcb->state))
  return 0;

 return VAR_3->capability.dcb_capability;
}
