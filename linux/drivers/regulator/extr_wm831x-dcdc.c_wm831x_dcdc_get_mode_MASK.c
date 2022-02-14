
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wm831x_dcdc {scalar_t__ base; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 scalar_t__ VAR_7 ;
 struct wm831x_dcdc* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm831x*,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct regulator_dev *VAR_8)

{
 struct wm831x_dcdc *VAR_9 = FUNC_1(VAR_8);
 struct wm831x *VAR_10 = VAR_9->wm831x;
 u16 VAR_11 = VAR_9->base + VAR_7;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_10, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = (VAR_12 & VAR_5) >> VAR_6;

 switch (VAR_12) {
 case 131:
  return VAR_1;
 case 129:
  return VAR_3;
 case 128:
  return VAR_4;
 case 130:
  return VAR_2;
 default:
  FUNC_0();
  return -VAR_0;
 }
}
