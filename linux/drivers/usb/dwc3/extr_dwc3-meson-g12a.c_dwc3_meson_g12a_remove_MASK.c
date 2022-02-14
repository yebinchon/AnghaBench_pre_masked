
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct dwc3_meson_g12a {int * phys; int role_switch; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct dwc3_meson_g12a* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct dwc3_meson_g12a *VAR_2 = FUNC_3(VAR_1);
 struct device *VAR_3 = &VAR_1->dev;
 int VAR_4;

 FUNC_7(VAR_2->role_switch);

 FUNC_0(VAR_3);

 for (VAR_4 = 0 ; VAR_4 < VAR_0 ; ++VAR_4) {
  FUNC_2(VAR_2->phys[VAR_4]);
  FUNC_1(VAR_2->phys[VAR_4]);
 }

 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3);

 return 0;
}
