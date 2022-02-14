
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_mdm6600 {TYPE_1__* status_gpios; struct device* dev; } ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct gpio_desc** desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct device*,int,int *,int ,int,char*,struct phy_mdm6600*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct phy_mdm6600 *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev;
 int VAR_8, VAR_9, VAR_10;

 for (VAR_8 = VAR_3;
      VAR_8 <= VAR_4; VAR_8++) {
  struct gpio_desc *VAR_11 = VAR_6->status_gpios->desc[VAR_8];

  VAR_10 = FUNC_2(VAR_11);
  if (VAR_10 <= 0)
   continue;

  VAR_9 = FUNC_1(VAR_7, VAR_10, ((void*)0),
     VAR_5,
     VAR_2 |
     VAR_1 |
     VAR_0,
     "mdm6600",
     VAR_6);
  if (VAR_9)
   FUNC_0(VAR_7, "no modem status irq%i: %i\n",
     VAR_10, VAR_9);
 }
}
