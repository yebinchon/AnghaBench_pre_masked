
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct gpio_desc* reset; } ;
struct madera {TYPE_1__ pdata; int dev; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 struct gpio_desc* FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct madera *VAR_2)
{
 struct gpio_desc *VAR_3;
 int VAR_4;

 if (VAR_2->pdata.reset)
  return 0;

 VAR_3 = FUNC_4(VAR_2->dev, "reset", VAR_1);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 != -VAR_0)
   FUNC_2(VAR_2->dev, "Failed to request /RESET: %d\n",
    VAR_4);
  return VAR_4;
 }






 if (!VAR_3)
  FUNC_3(VAR_2->dev,
    "Running without reset GPIO is not recommended\n");

 VAR_2->pdata.reset = VAR_3;

 return 0;
}
