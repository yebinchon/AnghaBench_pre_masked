
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_isink {int reg; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm831x_isink* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct wm831x*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2)
{
 struct wm831x_isink *VAR_3 = FUNC_0(VAR_2);
 struct wm831x *VAR_4 = VAR_3->wm831x;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3->reg, VAR_0, 0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3->reg, VAR_1, 0);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_5;

}
