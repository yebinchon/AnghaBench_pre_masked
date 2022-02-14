
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ acg_enable; } ;
struct dwc2_hsotg {int dev; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc2_hsotg*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,int ,int ) ;

void FUNC_3(struct dwc2_hsotg *VAR_2)
{
 if (VAR_2->params.acg_enable) {
  u32 VAR_3 = FUNC_1(VAR_2, VAR_0);

  FUNC_0(VAR_2->dev, "Enabling Active Clock Gating\n");
  VAR_3 |= VAR_1;
  FUNC_2(VAR_2, VAR_3, VAR_0);
 }
}
