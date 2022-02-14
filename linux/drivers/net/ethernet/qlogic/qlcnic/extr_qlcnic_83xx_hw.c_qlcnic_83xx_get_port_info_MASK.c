
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_hardware_context {int port_config; int link_autoneg; void* port_type; } ;
struct qlcnic_adapter {TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

int FUNC_3(struct qlcnic_adapter *VAR_7)
{
 struct qlcnic_hardware_context *VAR_8 = VAR_7->ahw;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9) {
  FUNC_1(&VAR_7->pdev->dev,
   "Get Port Info failed\n");
 } else {

  if (VAR_8->port_config & VAR_4) {
   VAR_8->port_type = VAR_2;
  } else if (VAR_8->port_config & VAR_5 ||
      VAR_8->port_config & VAR_3 ||
      VAR_8->port_config & VAR_6) {
   VAR_8->port_type = VAR_1;
  } else {
   VAR_8->port_type = VAR_2;
  }

  if (FUNC_0(VAR_8->port_config))
   VAR_8->link_autoneg = VAR_0;

 }
 return VAR_9;
}
