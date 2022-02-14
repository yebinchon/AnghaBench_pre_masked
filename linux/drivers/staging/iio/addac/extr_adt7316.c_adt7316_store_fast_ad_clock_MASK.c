
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* write ) (int ,int ,int) ;int client; } ;
struct adt7316_chip_info {int config3; TYPE_1__ bus; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
        struct device_attribute *VAR_4,
        const char *VAR_5,
        size_t VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_0(VAR_3);
 struct adt7316_chip_info *VAR_8 = FUNC_1(VAR_7);
 u8 VAR_9;
 int VAR_10;

 VAR_9 = VAR_8->config3 & (~VAR_0);
 if (VAR_5[0] == '1')
  VAR_9 |= VAR_0;

 VAR_10 = VAR_8->bus.write(VAR_8->bus.client, VAR_1, VAR_9);
 if (VAR_10)
  return -VAR_2;

 VAR_8->config3 = VAR_9;

 return VAR_6;
}
