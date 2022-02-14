
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {size_t address; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct iio_dev*,int *) ;
 int FUNC_1 (struct device*,struct device_attribute*,char const*,size_t,int ) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4,
      size_t VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_2(VAR_2);
 int VAR_7 = FUNC_0(VAR_6,
         &VAR_1[FUNC_3(VAR_3)->address]);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_0);
}
