
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
struct adt7316_chip_info {int config3; int dac_config; TYPE_1__ bus; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_7,
          struct device_attribute *VAR_8,
          const char *VAR_9,
          size_t VAR_10)
{
 struct iio_dev *VAR_11 = FUNC_0(VAR_7);
 struct adt7316_chip_info *VAR_12 = FUNC_1(VAR_11);
 u8 VAR_13;
 u8 VAR_14;
 int VAR_15;

 if (!(VAR_12->config3 & VAR_3))
  return -VAR_6;

 VAR_15 = FUNC_2(VAR_9, 10, &VAR_14);
 if (VAR_15 || VAR_14 > (VAR_1 >> VAR_2))
  return -VAR_4;

 VAR_13 = VAR_12->dac_config & (~VAR_1);
 VAR_13 |= VAR_14 << VAR_2;

 VAR_15 = VAR_12->bus.write(VAR_12->bus.client, VAR_0, VAR_13);
 if (VAR_15)
  return -VAR_5;

 VAR_12->dac_config = VAR_13;

 return VAR_10;
}
