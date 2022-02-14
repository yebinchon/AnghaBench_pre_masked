
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7280_state {int lock; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ad7280_state*,int,int) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct ad7280_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,unsigned int) ;
 struct iio_dev_attr* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_1(VAR_0);
 struct ad7280_state *VAR_4 = FUNC_2(VAR_3);
 struct iio_dev_attr *VAR_5 = FUNC_6(VAR_1);
 int VAR_6;
 unsigned int VAR_7;

 FUNC_3(&VAR_4->lock);
 VAR_6 = FUNC_0(VAR_4, VAR_5->address >> 8,
     VAR_5->address & 0xFF);
 FUNC_4(&VAR_4->lock);

 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = (VAR_6 >> 3) * 71500;

 return FUNC_5(VAR_2, "%u\n", VAR_7);
}
