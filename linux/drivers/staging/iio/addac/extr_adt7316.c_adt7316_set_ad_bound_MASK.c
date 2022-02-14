
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct iio_dev_attr {scalar_t__ address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* write ) (int ,scalar_t__,scalar_t__) ;int client; } ;
struct adt7316_chip_info {int id; int config1; TYPE_1__ bus; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 struct iio_dev_attr* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static inline ssize_t FUNC_5(struct device *VAR_8,
        struct device_attribute *VAR_9,
        const char *VAR_10,
        size_t VAR_11)
{
 struct iio_dev_attr *VAR_12 = FUNC_4(VAR_9);
 struct iio_dev *VAR_13 = FUNC_0(VAR_8);
 struct adt7316_chip_info *VAR_14 = FUNC_1(VAR_13);
 int VAR_15;
 u8 VAR_16;
 int VAR_17;

 if ((VAR_14->id & VAR_7) == VAR_5 &&
     VAR_12->address > VAR_0)
  return -VAR_4;

 VAR_17 = FUNC_2(VAR_10, 10, &VAR_15);
 if (VAR_17)
  return -VAR_2;

 if ((VAR_14->id & VAR_7) == VAR_6 &&
     (VAR_14->config1 & VAR_1) == 0) {
  if (VAR_15 > 255 || VAR_15 < 0)
   return -VAR_2;
 } else {
  if (VAR_15 > 127 || VAR_15 < -128)
   return -VAR_2;

  if (VAR_15 < 0)
   VAR_15 += 256;
 }

 VAR_16 = (u8)VAR_15;

 VAR_17 = VAR_14->bus.write(VAR_14->bus.client, VAR_12->address, VAR_16);
 if (VAR_17)
  return -VAR_3;

 return VAR_11;
}
