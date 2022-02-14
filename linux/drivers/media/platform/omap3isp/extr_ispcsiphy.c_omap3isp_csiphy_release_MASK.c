
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct isp_pipeline {int external; } ;
struct isp_csiphy {int mutex; int * entity; int vdd; TYPE_3__* isp; } ;
struct TYPE_4__ {int phy_layer; } ;
struct TYPE_5__ {TYPE_1__ ccp2; } ;
struct isp_bus_cfg {TYPE_2__ bus; int interface; } ;
struct TYPE_6__ {scalar_t__ revision; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct isp_csiphy*,int) ;
 int FUNC_1 (struct isp_csiphy*,int ,int,int ) ;
 int FUNC_2 (struct isp_csiphy*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct isp_pipeline* FUNC_6 (int *) ;
 struct isp_bus_cfg* FUNC_7 (int ) ;

void FUNC_8(struct isp_csiphy *VAR_2)
{
 FUNC_3(&VAR_2->mutex);
 if (VAR_2->entity) {
  struct isp_pipeline *VAR_3 = FUNC_6(VAR_2->entity);
  struct isp_bus_cfg *VAR_4 =
   FUNC_7(VAR_3->external);

  FUNC_1(VAR_2, VAR_4->interface, 0,
       VAR_4->bus.ccp2.phy_layer);
  if (VAR_2->isp->revision == VAR_1) {
   FUNC_0(VAR_2, 0);
   FUNC_2(VAR_2, VAR_0);
  }
  FUNC_5(VAR_2->vdd);
  VAR_2->entity = ((void*)0);
 }
 FUNC_4(&VAR_2->mutex);
}
