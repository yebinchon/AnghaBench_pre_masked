
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_pinctrl {int dev; } ;
struct rockchip_pin_bank {TYPE_1__* iomux; struct rockchip_pinctrl* drvdata; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct rockchip_pin_bank *VAR_5,
          int VAR_6, int VAR_7)
{
 struct rockchip_pinctrl *VAR_8 = VAR_5->drvdata;
 int VAR_9 = (VAR_6 / 8);

 if (VAR_9 > 3)
  return -VAR_0;

 if (VAR_5->iomux[VAR_9].type & VAR_3) {
  FUNC_0(VAR_8->dev, "pin %d is unrouted\n", VAR_6);
  return -VAR_0;
 }

 if (VAR_5->iomux[VAR_9].type & VAR_2) {
  if (VAR_7 != VAR_4) {
   FUNC_0(VAR_8->dev,
    "pin %d only supports a gpio mux\n", VAR_6);
   return -VAR_1;
  }
 }

 return 0;
}
