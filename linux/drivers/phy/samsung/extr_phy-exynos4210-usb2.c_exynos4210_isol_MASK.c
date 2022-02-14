
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct samsung_usb2_phy_instance {TYPE_1__* cfg; struct samsung_usb2_phy_driver* drv; } ;
struct samsung_usb2_phy_driver {int reg_pmu; } ;
struct TYPE_2__ {int id; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct samsung_usb2_phy_instance *VAR_4, bool VAR_5)
{
 struct samsung_usb2_phy_driver *VAR_6 = VAR_4->drv;
 u32 VAR_7;
 u32 VAR_8;

 switch (VAR_4->cfg->id) {
 case 129:
  VAR_7 = VAR_1;
  VAR_8 = VAR_0;
  break;
 case 128:
  VAR_7 = VAR_3;
  VAR_8 = VAR_2;
  break;
 default:
  return;
 }

 FUNC_0(VAR_6->reg_pmu, VAR_7, VAR_8, VAR_5 ? 0 : VAR_8);
}
