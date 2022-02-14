
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cht_int33fe_data {int max17047; int fusb302; int pi3usb30532; } ;


 int FUNC_0 (struct cht_int33fe_data*) ;
 int FUNC_1 (int ) ;
 struct cht_int33fe_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct cht_int33fe_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->pi3usb30532);
 FUNC_1(VAR_1->fusb302);
 FUNC_1(VAR_1->max17047);

 FUNC_0(VAR_1);

 return 0;
}
