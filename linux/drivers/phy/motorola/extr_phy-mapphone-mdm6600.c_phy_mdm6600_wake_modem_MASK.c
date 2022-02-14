
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_mdm6600 {scalar_t__ awake; TYPE_1__* mode_gpios; } ;
struct gpio_desc {int dummy; } ;
struct TYPE_2__ {struct gpio_desc** desc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct gpio_desc*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct phy_mdm6600 *VAR_2)
{
 struct gpio_desc *VAR_3;

 VAR_3 = VAR_2->mode_gpios->desc[VAR_1];
 FUNC_0(VAR_3, 1);
 FUNC_2(5, 15);
 FUNC_0(VAR_3, 0);
 if (VAR_2->awake)
  FUNC_2(5, 15);
 else
  FUNC_1(VAR_0);
}
