
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qlcnic_dcb_cee {TYPE_3__* app; } ;
struct qlcnic_adapter {TYPE_2__* dcb; } ;
struct net_device {int dummy; } ;
struct dcb_peer_app_info {int dummy; } ;
struct TYPE_6__ {scalar_t__ valid; } ;
struct TYPE_5__ {TYPE_1__* cfg; int state; } ;
struct TYPE_4__ {struct qlcnic_dcb_cee* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct dcb_peer_app_info*,int ,int) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
        struct dcb_peer_app_info *VAR_4,
        u16 *VAR_5)
{
 struct qlcnic_adapter *VAR_6 = FUNC_1(VAR_3);
 struct qlcnic_dcb_cee *VAR_7;
 int VAR_8;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 *VAR_5 = 0;

 if (!FUNC_2(VAR_0, &VAR_6->dcb->state))
  return 0;

 VAR_7 = &VAR_6->dcb->cfg->type[VAR_2];

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_7->app[VAR_8].valid)
   (*VAR_5)++;
 }

 return 0;
}
