
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adis {int dummy; } ;
typedef int ssize_t ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (struct adis*) ;
 int FUNC_1 (struct adis*,int ,int *) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 struct adis* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3,
      unsigned int VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_2(VAR_1);
 struct adis *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;
 s16 VAR_8 = 0;
 unsigned int VAR_9 = 16 - VAR_4;
 struct iio_dev_attr *VAR_10 = FUNC_5(VAR_2);

 VAR_7 = FUNC_1(VAR_6,
          VAR_10->address, (u16 *)&VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 & VAR_0)
  FUNC_0(VAR_6);

 VAR_8 = (s16)(VAR_8 << VAR_9) >> VAR_9;
 return FUNC_4(VAR_3, "%d\n", VAR_8);
}
