
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
struct adt7316_chip_info {int config3; int dac_config; int ldac_config; int ldac_pin; TYPE_1__ bus; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int) ;
 struct adt7316_chip_info* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (char const*,int,int*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_8,
     struct device_attribute *VAR_9,
     const char *VAR_10,
     size_t VAR_11)
{
 struct iio_dev *VAR_12 = FUNC_0(VAR_8);
 struct adt7316_chip_info *VAR_13 = FUNC_2(VAR_12);
 u8 VAR_14;
 u8 VAR_15;
 int VAR_16;

 if (VAR_13->config3 & VAR_2) {
  if ((VAR_13->dac_config & VAR_1) !=
   VAR_0)
   return -VAR_7;

  VAR_16 = FUNC_3(VAR_10, 16, &VAR_15);
  if (VAR_16 || VAR_15 > VAR_4)
   return -VAR_5;

  VAR_14 = VAR_13->ldac_config & (~VAR_4);
  VAR_14 |= VAR_15;

  VAR_16 = VAR_13->bus.write(VAR_13->bus.client, VAR_3,
   VAR_14);
  if (VAR_16)
   return -VAR_6;
 } else {
  FUNC_1(VAR_13->ldac_pin, 0);
  FUNC_1(VAR_13->ldac_pin, 1);
 }

 return VAR_11;
}
