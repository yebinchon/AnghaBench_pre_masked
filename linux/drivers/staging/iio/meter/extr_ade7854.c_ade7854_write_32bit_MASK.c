
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ade7854_state {int (* write_reg ) (struct device*,int ,int ,int) ;} ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct ade7854_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char const*,int,int *) ;
 int FUNC_3 (struct device*,int ,int ,int) ;
 struct iio_dev_attr* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2,
       size_t VAR_3)
{
 struct iio_dev_attr *VAR_4 = FUNC_4(VAR_1);
 struct iio_dev *VAR_5 = FUNC_0(VAR_0);
 struct ade7854_state *VAR_6 = FUNC_1(VAR_5);

 int VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_2(VAR_2, 10, &VAR_8);
 if (VAR_7)
  goto error_ret;
 VAR_7 = VAR_6->write_reg(VAR_0, VAR_4->address, VAR_8, 32);

error_ret:
 return VAR_7 ? VAR_7 : VAR_3;
}
