
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7280_state {int cell_threshhigh; int cell_threshlow; int aux_threshhigh; int aux_threshlow; } ;
typedef int ssize_t ;






 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct ad7280_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 struct iio_dev_attr* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 struct ad7280_state *VAR_5 = FUNC_1(VAR_4);
 struct iio_dev_attr *VAR_6 = FUNC_3(VAR_2);
 unsigned int VAR_7;

 switch (VAR_6->address) {
 case 129:
  VAR_7 = 1000 + (VAR_5->cell_threshhigh * 1568) / 100;
  break;
 case 128:
  VAR_7 = 1000 + (VAR_5->cell_threshlow * 1568) / 100;
  break;
 case 131:
  VAR_7 = (VAR_5->aux_threshhigh * 196) / 10;
  break;
 case 130:
  VAR_7 = (VAR_5->aux_threshlow * 196) / 10;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_2(VAR_3, "%u\n", VAR_7);
}
