
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
struct adt7316_chip_info {int dac_config; TYPE_1__ bus; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
            struct device_attribute *VAR_5,
            const char *VAR_6,
            size_t VAR_7)
{
 struct iio_dev *VAR_8 = FUNC_0(VAR_4);
 struct adt7316_chip_info *VAR_9 = FUNC_1(VAR_8);
 u8 VAR_10;
 u8 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_6, 16, &VAR_11);
 if (VAR_12 || VAR_11 > VAR_1)
  return -VAR_2;

 VAR_10 = VAR_9->dac_config & (~VAR_1);
 VAR_10 |= VAR_11;

 VAR_12 = VAR_9->bus.write(VAR_9->bus.client, VAR_0, VAR_10);
 if (VAR_12)
  return -VAR_3;

 VAR_9->dac_config = VAR_10;

 return VAR_7;
}
