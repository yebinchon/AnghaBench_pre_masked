
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7150_chip_info {int** mag_timeout; int** thresh_timeout; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;


 struct iio_dev* FUNC_3 (struct device*) ;
 struct ad7150_chip_info* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
       struct device_attribute *VAR_3,
       char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_3(VAR_2);
 struct ad7150_chip_info *VAR_6 = FUNC_4(VAR_5);
 struct iio_dev_attr *VAR_7 = FUNC_6(VAR_3);
 u8 VAR_8;


 int VAR_9 = FUNC_0(VAR_7->address);
 int VAR_10 = (FUNC_1(VAR_7->address)
        == VAR_1) ? 1 : 0;

 switch (FUNC_2(VAR_7->address)) {
 case 129:
  VAR_8 = VAR_6->mag_timeout[VAR_10][VAR_9];
  break;
 case 128:
  VAR_8 = VAR_6->thresh_timeout[VAR_10][VAR_9];
  break;
 default:
  return -VAR_0;
 }

 return FUNC_5(VAR_4, "%d\n", VAR_8);
}
