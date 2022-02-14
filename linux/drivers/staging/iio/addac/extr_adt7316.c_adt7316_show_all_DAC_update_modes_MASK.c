
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7316_chip_info {int config3; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 struct adt7316_chip_info *VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->config3 & VAR_0)
  return FUNC_2(VAR_3, "0 - auto at any MSB DAC writing\n"
    "1 - auto at MSB DAC AB and CD writing\n"
    "2 - auto at MSB DAC ABCD writing\n"
    "3 - manual\n");
 return FUNC_2(VAR_3, "manual\n");
}
