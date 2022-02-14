
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


 int VAR_0 ;
 int FUNC_0 (struct ad7280_state*,int,int,int ,unsigned long) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct ad7280_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct iio_dev_attr* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3,
       size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_1(VAR_1);
 struct ad7280_state *VAR_6 = FUNC_2(VAR_5);
 struct iio_dev_attr *VAR_7 = FUNC_6(VAR_2);
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_8 /= 71500;

 if (VAR_8 > 31)
  return -VAR_0;

 FUNC_4(&VAR_6->lock);
 VAR_9 = FUNC_0(VAR_6, VAR_7->address >> 8,
      VAR_7->address & 0xFF,
      0, (VAR_8 & 0x1F) << 3);
 FUNC_5(&VAR_6->lock);

 return VAR_9 ? VAR_9 : VAR_4;
}
