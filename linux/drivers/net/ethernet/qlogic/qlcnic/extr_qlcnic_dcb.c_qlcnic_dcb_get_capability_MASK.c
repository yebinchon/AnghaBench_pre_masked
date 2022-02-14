
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_adapter {TYPE_3__* dcb; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* cfg; int state; } ;
struct TYPE_4__ {int dcb_capability; } ;
struct TYPE_5__ {TYPE_1__ capability; } ;
 int VAR_0 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static u8 FUNC_2(struct net_device *VAR_1, int VAR_2,
        u8 *VAR_3)
{
 struct qlcnic_adapter *VAR_4 = FUNC_0(VAR_1);

 if (!FUNC_1(VAR_0, &VAR_4->dcb->state))
  return 1;

 switch (VAR_2) {
 case 130:
 case 128:
 case 132:
 case 133:
  *VAR_3 = 1;
  break;
 case 129:
 case 131:
  *VAR_3 = 0x80;
  break;
 case 134:
  *VAR_3 = VAR_4->dcb->cfg->capability.dcb_capability;
  break;
 default:
  *VAR_3 = 0;
 }

 return 0;
}
