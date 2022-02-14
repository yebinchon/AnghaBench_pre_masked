
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* read ) (int ,int ,int*) ;int client; } ;
struct adt7316_chip_info {TYPE_1__ bus; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
           struct device_attribute *VAR_3,
           char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_2);
 struct adt7316_chip_info *VAR_6 = FUNC_1(VAR_5);
 u8 VAR_7;
 int VAR_8;

 VAR_8 = VAR_6->bus.read(VAR_6->bus.client, VAR_0, &VAR_7);
 if (VAR_8)
  return -VAR_1;

 return FUNC_2(VAR_4, "%d\n", VAR_7);
}
