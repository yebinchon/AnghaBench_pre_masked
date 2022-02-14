
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct axp288_fg_info {scalar_t__* irq; int * iio_channel; int bat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct axp288_fg_info*) ;
 int FUNC_1 (struct axp288_fg_info*) ;
 int FUNC_2 (int ) ;
 struct axp288_fg_info* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct axp288_fg_info *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_4(VAR_3->bat);
 FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3->irq[VAR_4] >= 0)
   FUNC_0(VAR_3->irq[VAR_4], VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_2(VAR_3->iio_channel[VAR_4]);

 return 0;
}
