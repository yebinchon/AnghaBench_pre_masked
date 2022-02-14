
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_dcdc {struct wm831x* wm831x; } ;
struct wm831x {int dev; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 struct wm831x_dcdc* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_5)
{
 struct wm831x_dcdc *VAR_6 = FUNC_1(VAR_5);
 struct wm831x *VAR_7 = VAR_6->wm831x;
 int VAR_8;


 VAR_8 = FUNC_3(VAR_7, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_8 & (1 << FUNC_2(VAR_5))) {
  FUNC_0(VAR_7->dev, "DCDC%d under voltage\n",
   FUNC_2(VAR_5) + 1);
  return VAR_0;
 }


 VAR_8 = FUNC_3(VAR_7, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_8 & (1 << FUNC_2(VAR_5)))
  return VAR_2;
 else
  return VAR_1;
}
