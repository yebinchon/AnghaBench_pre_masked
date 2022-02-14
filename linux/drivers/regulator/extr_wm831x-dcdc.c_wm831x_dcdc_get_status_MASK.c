
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 struct wm831x_dcdc* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_7)
{
 struct wm831x_dcdc *VAR_8 = FUNC_1(VAR_7);
 struct wm831x *VAR_9 = VAR_8->wm831x;
 int VAR_10;


 VAR_10 = FUNC_3(VAR_9, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_10 & (1 << FUNC_2(VAR_7))) {
  FUNC_0(VAR_9->dev, "DCDC%d under voltage\n",
   FUNC_2(VAR_7) + 1);
  return VAR_0;
 }


 if (FUNC_2(VAR_7) < 2) {
  if (VAR_10 & (VAR_4 << FUNC_2(VAR_7))) {
   FUNC_0(VAR_9->dev, "DCDC%d over voltage\n",
    FUNC_2(VAR_7) + 1);
   return VAR_0;
  }

  if (VAR_10 & (VAR_3 << FUNC_2(VAR_7))) {
   FUNC_0(VAR_9->dev, "DCDC%d over current\n",
    FUNC_2(VAR_7) + 1);
   return VAR_0;
  }
 }


 VAR_10 = FUNC_3(VAR_9, VAR_5);
 if (VAR_10 < 0)
  return VAR_10;
 if (!(VAR_10 & (1 << FUNC_2(VAR_7))))
  return VAR_1;



 return VAR_2;
}
