
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_meson_g12a {int otg_phy_mode; scalar_t__ vbus; int dev; int * phys; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc3_meson_g12a*,size_t,int) ;
 int FUNC_2 (struct dwc3_meson_g12a*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct dwc3_meson_g12a *VAR_4,
     enum phy_mode VAR_5)
{
 int VAR_6;

 if (!VAR_4->phys[VAR_3])
  return -VAR_0;

 if (VAR_5 == VAR_2)
  FUNC_0(VAR_4->dev, "switching to Host Mode\n");
 else
  FUNC_0(VAR_4->dev, "switching to Device Mode\n");

 if (VAR_4->vbus) {
  if (VAR_5 == VAR_1)
   VAR_6 = FUNC_3(VAR_4->vbus);
  else
   VAR_6 = FUNC_4(VAR_4->vbus);
  if (VAR_6)
   return VAR_6;
 }

 VAR_4->otg_phy_mode = VAR_5;

 FUNC_1(VAR_4, VAR_3, VAR_5);

 FUNC_2(VAR_4);

 return 0;
}
