
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7316_chip_info {int id; int config1; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
        struct device_attribute *VAR_5,
        char *VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_0(VAR_4);
 struct adt7316_chip_info *VAR_8 = FUNC_1(VAR_7);

 if ((VAR_8->id & VAR_3) != VAR_2)
  return -VAR_1;

 return FUNC_2(VAR_6, "%d\n", !!(VAR_8->config1 & VAR_0));
}
