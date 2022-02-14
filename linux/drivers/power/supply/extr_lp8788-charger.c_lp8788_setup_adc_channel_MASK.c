
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_charger_platform_data {int adc_batt_temp; int adc_vbatt; } ;
struct lp8788_charger {struct iio_channel** chan; struct lp8788_charger_platform_data* pdata; } ;
struct iio_channel {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct iio_channel*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 struct iio_channel* FUNC_1 (struct device*,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_2,
    struct lp8788_charger *VAR_3)
{
 struct lp8788_charger_platform_data *VAR_4 = VAR_3->pdata;
 struct iio_channel *VAR_5;

 if (!VAR_4)
  return;


 VAR_5 = FUNC_1(VAR_2, VAR_4->adc_vbatt);
 VAR_3->chan[VAR_1] = FUNC_0(VAR_5) ? ((void*)0) : VAR_5;


 VAR_5 = FUNC_1(VAR_2, VAR_4->adc_batt_temp);
 VAR_3->chan[VAR_0] = FUNC_0(VAR_5) ? ((void*)0) : VAR_5;
}
