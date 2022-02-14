
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wm831x_dcdc {scalar_t__ base; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct wm831x_dcdc* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,int,int) ;
 int FUNC_2 (struct wm831x*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2, int VAR_3)
{
 struct wm831x_dcdc *VAR_4 = FUNC_0(VAR_2);
 struct wm831x *VAR_5 = VAR_4->wm831x;
 u16 VAR_6 = VAR_4->base + VAR_1;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_2(VAR_5, VAR_6, VAR_0, VAR_7);
}
