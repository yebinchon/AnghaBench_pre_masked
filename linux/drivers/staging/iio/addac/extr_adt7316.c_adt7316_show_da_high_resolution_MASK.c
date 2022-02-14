
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7316_chip_info {int config3; scalar_t__ id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
            struct device_attribute *VAR_4,
            char *VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_0(VAR_3);
 struct adt7316_chip_info *VAR_7 = FUNC_1(VAR_6);

 if (VAR_7->config3 & VAR_0) {
  if (VAR_7->id != VAR_1 && VAR_7->id != VAR_2)
   return FUNC_2(VAR_5, "1 (10 bits)\n");
 }

 return FUNC_2(VAR_5, "0 (8 bits)\n");
}
