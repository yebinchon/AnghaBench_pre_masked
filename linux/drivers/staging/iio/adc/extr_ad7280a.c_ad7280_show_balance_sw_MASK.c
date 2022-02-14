
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7280_state {int* cb_mask; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct ad7280_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct ad7280_state *VAR_4 = FUNC_1(VAR_3);
 struct iio_dev_attr *VAR_5 = FUNC_3(VAR_1);

 return FUNC_2(VAR_2, "%d\n",
         !!(VAR_4->cb_mask[VAR_5->address >> 8] &
         (1 << ((VAR_5->address & 0xFF) + 2))));
}
