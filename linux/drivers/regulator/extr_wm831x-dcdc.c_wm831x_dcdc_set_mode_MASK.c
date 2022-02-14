
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wm831x_dcdc {scalar_t__ base; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct wm831x_dcdc* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct wm831x*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1, unsigned int VAR_2)
{
 struct wm831x_dcdc *VAR_3 = FUNC_0(VAR_1);
 struct wm831x *VAR_4 = VAR_3->wm831x;
 u16 VAR_5 = VAR_3->base + VAR_0;

 return FUNC_1(VAR_4, VAR_5, VAR_2);
}
