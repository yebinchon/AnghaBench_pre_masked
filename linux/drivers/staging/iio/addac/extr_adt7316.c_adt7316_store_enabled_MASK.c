
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7316_chip_info {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct adt7316_chip_info*,int) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct adt7316_chip_info* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3,
         size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_1(VAR_1);
 struct adt7316_chip_info *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 if (VAR_3[0] == '1')
  VAR_7 = 1;
 else
  VAR_7 = 0;

 if (FUNC_0(VAR_6, VAR_7) < 0)
  return -VAR_0;

 return VAR_4;
}
