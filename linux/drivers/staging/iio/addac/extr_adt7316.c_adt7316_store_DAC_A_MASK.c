
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7316_chip_info {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct adt7316_chip_info*,int ,char const*,size_t) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct adt7316_chip_info* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2,
       size_t VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_1(VAR_0);
 struct adt7316_chip_info *VAR_5 = FUNC_2(VAR_4);

 return FUNC_0(VAR_5, 0, VAR_2, VAR_3);
}
