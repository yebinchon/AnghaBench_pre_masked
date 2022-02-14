
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ldo {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm831x_ldo* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_4)
{
 struct wm831x_ldo *VAR_5 = FUNC_0(VAR_4);
 struct wm831x *VAR_6 = VAR_5->wm831x;
 int VAR_7 = 1 << FUNC_1(VAR_4);
 int VAR_8;


 VAR_8 = FUNC_4(VAR_6, VAR_2);
 if (VAR_8 < 0)
  return VAR_8;
 if (!(VAR_8 & VAR_7))
  return VAR_1;


 VAR_8 = FUNC_4(VAR_6, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_8 & VAR_7)
  return VAR_0;

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8 < 0)
  return VAR_8;
 else
  return FUNC_2(VAR_8);
}
