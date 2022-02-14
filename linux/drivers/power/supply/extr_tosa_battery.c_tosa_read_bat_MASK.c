
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tosa_bat {scalar_t__ gpio_bat; scalar_t__ adc_bat; unsigned long adc_bat_divider; TYPE_2__* psy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_6(struct tosa_bat *VAR_1)
{
 unsigned long VAR_2 = 0;

 if (VAR_1->gpio_bat < 0 || VAR_1->adc_bat < 0)
  return 0;

 FUNC_3(&VAR_0);
 FUNC_1(VAR_1->gpio_bat, 1);
 FUNC_2(5);
 VAR_2 = FUNC_5(FUNC_0(VAR_1->psy->dev.parent),
   VAR_1->adc_bat);
 FUNC_1(VAR_1->gpio_bat, 0);
 FUNC_4(&VAR_0);

 VAR_2 = VAR_2 * 1000000 / VAR_1->adc_bat_divider;

 return VAR_2;
}
