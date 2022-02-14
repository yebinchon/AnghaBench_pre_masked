
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tusb1210 {scalar_t__ vendor_specific2; int ulpi; int gpio_cs; int gpio_reset; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct tusb1210* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_1)
{
 struct tusb1210 *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->gpio_reset, 1);
 FUNC_0(VAR_2->gpio_cs, 1);


 if (VAR_2->vendor_specific2)
  FUNC_2(VAR_2->ulpi, VAR_0,
      VAR_2->vendor_specific2);

 return 0;
}
