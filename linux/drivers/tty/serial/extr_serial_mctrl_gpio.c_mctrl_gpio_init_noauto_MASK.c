
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mctrl_gpios {int * gpio; } ;
struct device {int dummy; } ;
typedef enum mctrl_gpio_idx { ____Placeholder_mctrl_gpio_idx } mctrl_gpio_idx ;
struct TYPE_2__ {int flags; int name; } ;


 int VAR_0 ;
 struct mctrl_gpios* FUNC_0 (int ) ;
 struct mctrl_gpios* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int ,unsigned int,int ) ;
 struct mctrl_gpios* FUNC_5 (struct device*,int,int ) ;
 char* FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (char*) ;
 TYPE_1__* VAR_3 ;

struct mctrl_gpios *FUNC_8(struct device *VAR_4, unsigned int VAR_5)
{
 struct mctrl_gpios *VAR_6;
 enum mctrl_gpio_idx VAR_7;

 VAR_6 = FUNC_5(VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  char *VAR_8;
  bool VAR_9;


  VAR_8 = FUNC_6(VAR_1, "%s-gpios",
         VAR_3[VAR_7].name);
  if (!VAR_8)
   continue;

  VAR_9 = FUNC_3(VAR_4, VAR_8);
  FUNC_7(VAR_8);
  if (!VAR_9)
   continue;

  VAR_6->gpio[VAR_7] =
   FUNC_4(VAR_4,
            VAR_3[VAR_7].name,
            VAR_5,
            VAR_3[VAR_7].flags);

  if (FUNC_2(VAR_6->gpio[VAR_7]))
   return FUNC_0(VAR_6->gpio[VAR_7]);
 }

 return VAR_6;
}
