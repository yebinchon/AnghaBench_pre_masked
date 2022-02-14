
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_dcb {TYPE_2__* cfg; int state; } ;
struct qlcnic_adapter {struct qlcnic_dcb* dcb; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int pfc_mode_enable; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static u8 FUNC_2(struct net_device *VAR_2)
{
 struct qlcnic_adapter *VAR_3 = FUNC_0(VAR_2);
 struct qlcnic_dcb *VAR_4 = VAR_3->dcb;

 if (!FUNC_1(VAR_0, &VAR_4->state))
  return 0;

 return VAR_4->cfg->type[VAR_1].pfc_mode_enable;
}
