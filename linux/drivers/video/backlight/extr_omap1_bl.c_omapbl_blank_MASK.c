
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_backlight {int current_intensity; int dev; TYPE_1__* pdata; } ;
struct TYPE_2__ {int (* set_power ) (int ,int) ;} ;







 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct omap_backlight *VAR_0, int VAR_1)
{
 if (VAR_0->pdata->set_power)
  VAR_0->pdata->set_power(VAR_0->dev, VAR_1);

 switch (VAR_1) {
 case 131:
 case 128:
 case 132:
 case 130:
  FUNC_1(0);
  FUNC_0(0);
  break;

 case 129:
  FUNC_1(VAR_0->current_intensity);
  FUNC_0(1);
  break;
 }
}
