
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_adc_bat {TYPE_1__* pdata; } ;
struct TYPE_2__ {int gpio_charge_finished; scalar_t__ gpio_inverted; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct s3c_adc_bat *VAR_0)
{
 return VAR_0->pdata->gpio_inverted ?
  !FUNC_0(VAR_0->pdata->gpio_charge_finished) :
  FUNC_0(VAR_0->pdata->gpio_charge_finished);
}
