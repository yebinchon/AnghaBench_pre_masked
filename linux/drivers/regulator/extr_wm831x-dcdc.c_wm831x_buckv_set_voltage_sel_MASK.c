
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_dcdc {int base; unsigned int on_vsel; unsigned int dvs_vsel; scalar_t__ dvs_gpiod; struct wm831x* wm831x; } ;
struct wm831x {int dev; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 struct wm831x_dcdc* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*,int) ;
 int FUNC_3 (struct wm831x*,int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_4,
     unsigned VAR_5)
{
 struct wm831x_dcdc *VAR_6 = FUNC_1(VAR_4);
 struct wm831x *VAR_7 = VAR_6->wm831x;
 int VAR_8 = VAR_6->base + VAR_3;
 int VAR_9 = VAR_6->base + VAR_2;
 int VAR_10;


 if (VAR_6->dvs_gpiod && VAR_6->on_vsel == VAR_5)
  return FUNC_2(VAR_4, 0);

 if (VAR_6->dvs_gpiod && VAR_6->dvs_vsel == VAR_5)
  return FUNC_2(VAR_4, 1);


 VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_1, VAR_5);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_6->on_vsel = VAR_5;

 if (!VAR_6->dvs_gpiod)
  return VAR_10;


 VAR_10 = FUNC_2(VAR_4, 0);
 if (VAR_10 < 0)
  return VAR_10;







 if (VAR_5 > VAR_6->dvs_vsel) {
  VAR_10 = FUNC_3(VAR_7, VAR_9,
          VAR_0,
          VAR_5);
  if (VAR_10 == 0)
   VAR_6->dvs_vsel = VAR_5;
  else
   FUNC_0(VAR_7->dev,
     "Failed to set DCDC DVS VSEL: %d\n", VAR_10);
 }

 return 0;
}
