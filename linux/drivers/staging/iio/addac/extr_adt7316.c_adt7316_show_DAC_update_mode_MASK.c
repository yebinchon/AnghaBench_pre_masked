
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7316_chip_info {int config3; int dac_config; } ;
typedef int ssize_t ;




 int VAR_0 ;

 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
         struct device_attribute *VAR_3,
         char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_2);
 struct adt7316_chip_info *VAR_6 = FUNC_1(VAR_5);

 if (!(VAR_6->config3 & VAR_1))
  return FUNC_2(VAR_4, "manual\n");

 switch (VAR_6->dac_config & VAR_0) {
 case 128:
  return FUNC_2(VAR_4,
   "0 - auto at any MSB DAC writing\n");
 case 129:
  return FUNC_2(VAR_4,
   "1 - auto at MSB DAC AB and CD writing\n");
 case 130:
  return FUNC_2(VAR_4,
   "2 - auto at MSB DAC ABCD writing\n");
 default:
  return FUNC_2(VAR_4, "3 - manual\n");
 }
}
