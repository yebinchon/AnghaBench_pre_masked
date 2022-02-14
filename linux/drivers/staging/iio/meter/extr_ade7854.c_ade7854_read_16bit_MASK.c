
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ade7854_state {int (* read_reg ) (struct device*,int ,int*,int) ;} ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct ade7854_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct device*,int ,int*,int) ;
 struct iio_dev_attr* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 int VAR_3;
 u32 VAR_4 = 0;
 struct iio_dev *VAR_5 = FUNC_0(VAR_0);
 struct ade7854_state *VAR_6 = FUNC_1(VAR_5);
 struct iio_dev_attr *VAR_7 = FUNC_4(VAR_1);

 VAR_3 = VAR_6->read_reg(VAR_0, VAR_7->address, &VAR_4, 16);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_2(VAR_2, "%u\n", VAR_4);
}
