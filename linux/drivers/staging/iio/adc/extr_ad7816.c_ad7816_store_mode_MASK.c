
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7816_chip_info {int mode; int rdwr_pin; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int) ;
 struct ad7816_chip_info* FUNC_2 (struct iio_dev*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4,
     size_t VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_0(VAR_2);
 struct ad7816_chip_info *VAR_7 = FUNC_2(VAR_6);

 if (FUNC_3(VAR_4, "full")) {
  FUNC_1(VAR_7->rdwr_pin, 1);
  VAR_7->mode = VAR_0;
 } else {
  FUNC_1(VAR_7->rdwr_pin, 0);
  VAR_7->mode = VAR_1;
 }

 return VAR_5;
}
