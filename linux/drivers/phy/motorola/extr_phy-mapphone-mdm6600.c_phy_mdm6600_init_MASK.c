
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_mdm6600 {int enabled; struct gpio_desc** ctrl_gpios; } ;
struct phy {int dummy; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct gpio_desc*,int ) ;
 struct phy_mdm6600* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_2)
{
 struct phy_mdm6600 *VAR_3 = FUNC_1(VAR_2);
 struct gpio_desc *VAR_4 = VAR_3->ctrl_gpios[VAR_1];

 if (!VAR_3->enabled)
  return -VAR_0;

 FUNC_0(VAR_4, 0);

 return 0;
}
