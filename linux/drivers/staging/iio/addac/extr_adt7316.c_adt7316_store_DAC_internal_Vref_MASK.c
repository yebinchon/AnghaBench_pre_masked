
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
struct adt7316_chip_info {int id; int ldac_config; TYPE_1__ bus; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_9,
            struct device_attribute *VAR_10,
            const char *VAR_11,
            size_t VAR_12)
{
 struct iio_dev *VAR_13 = FUNC_0(VAR_9);
 struct adt7316_chip_info *VAR_14 = FUNC_1(VAR_13);
 u8 VAR_15;
 u8 VAR_16;
 int VAR_17;

 if ((VAR_14->id & VAR_8) == VAR_7) {
  VAR_17 = FUNC_2(VAR_11, 16, &VAR_16);
  if (VAR_17 || VAR_16 > 3)
   return -VAR_5;

  VAR_15 = VAR_14->ldac_config & (~VAR_4);
  if (VAR_16 & 0x1)
   VAR_15 |= VAR_2;
  if (VAR_16 & 0x2)
   VAR_15 |= VAR_3;
 } else {
  VAR_17 = FUNC_2(VAR_11, 16, &VAR_16);
  if (VAR_17)
   return -VAR_5;

  VAR_15 = VAR_14->ldac_config & (~VAR_0);
  if (VAR_16)
   VAR_15 = VAR_14->ldac_config | VAR_0;
 }

 VAR_17 = VAR_14->bus.write(VAR_14->bus.client, VAR_1,
   VAR_15);
 if (VAR_17)
  return -VAR_6;

 VAR_14->ldac_config = VAR_15;

 return VAR_12;
}
