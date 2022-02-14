
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ldo {int base; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct wm831x_ldo* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct wm831x*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_7)
{
 struct wm831x_ldo *VAR_8 = FUNC_0(VAR_7);
 struct wm831x *VAR_9 = VAR_8->wm831x;
 int VAR_10 = VAR_8->base + VAR_5;
 int VAR_11 = VAR_8->base + VAR_6;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_9, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 if (!(VAR_12 & VAR_4))
  return VAR_1;

 VAR_12 = FUNC_1(VAR_9, VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_12 & VAR_3)
  return VAR_2;
 else
  return VAR_0;
}
