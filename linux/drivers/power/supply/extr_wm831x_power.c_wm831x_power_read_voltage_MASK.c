
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct wm831x {int dummy; } ;
typedef enum wm831x_auxadc { ____Placeholder_wm831x_auxadc } wm831x_auxadc ;


 int FUNC_0 (struct wm831x*,int) ;

__attribute__((used)) static int FUNC_1(struct wm831x *VAR_0,
         enum wm831x_auxadc VAR_1,
         union power_supply_propval *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 >= 0)
  VAR_2->intval = VAR_3;

 return VAR_3;
}
