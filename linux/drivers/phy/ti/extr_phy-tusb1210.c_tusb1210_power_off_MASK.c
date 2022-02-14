
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tusb1210 {int gpio_cs; int gpio_reset; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct tusb1210* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct tusb1210 *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->gpio_reset, 0);
 FUNC_0(VAR_1->gpio_cs, 0);

 return 0;
}
