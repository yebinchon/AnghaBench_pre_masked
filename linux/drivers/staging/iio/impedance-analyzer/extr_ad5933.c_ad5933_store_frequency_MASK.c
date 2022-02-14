
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad5933_state {int dummy; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ad5933_state*,int ,unsigned long) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ad5933_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 struct iio_dev_attr* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4,
          size_t VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_1(VAR_2);
 struct ad5933_state *VAR_7 = FUNC_4(VAR_6);
 struct iio_dev_attr *VAR_8 = FUNC_6(VAR_3);
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_4, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 > VAR_0)
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_7, VAR_8->address, VAR_9);
 FUNC_3(VAR_6);

 return VAR_10 ? VAR_10 : VAR_5;
}
