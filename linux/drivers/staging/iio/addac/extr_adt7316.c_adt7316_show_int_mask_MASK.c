
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7316_chip_info {int int_mask; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct adt7316_chip_info *VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_2, "0x%x\n", VAR_4->int_mask);
}
