
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct collie_bat {scalar_t__ gpio_temp; unsigned long adc_temp_divider; int adc_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static unsigned long FUNC_7(struct collie_bat *VAR_3)
{
 unsigned long VAR_4 = 0;
 if (VAR_3->gpio_temp < 0 || VAR_3->adc_temp < 0)
  return 0;

 FUNC_2(&VAR_1);
 FUNC_0(VAR_3->gpio_temp, 1);
 FUNC_1(5);
 FUNC_5(VAR_2);
 VAR_4 = FUNC_6(VAR_2, VAR_3->adc_temp, VAR_0);
 FUNC_4(VAR_2);
 FUNC_0(VAR_3->gpio_temp, 0);
 FUNC_3(&VAR_1);

 VAR_4 = VAR_4 * 10000 / VAR_3->adc_temp_divider;

 return VAR_4;
}
