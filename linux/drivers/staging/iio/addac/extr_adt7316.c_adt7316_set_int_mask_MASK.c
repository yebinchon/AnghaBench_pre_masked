
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* write ) (int ,int ,int) ;int client; } ;
struct adt7316_chip_info {int int_mask; int id; TYPE_1__ bus; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_9,
        struct device_attribute *VAR_10,
        const char *VAR_11,
        size_t VAR_12)
{
 struct iio_dev *VAR_13 = FUNC_0(VAR_9);
 struct adt7316_chip_info *VAR_14 = FUNC_1(VAR_13);
 u16 VAR_15;
 int VAR_16;
 u8 VAR_17;

 VAR_16 = FUNC_2(VAR_11, 16, &VAR_15);
 if (VAR_16 || VAR_15 >= VAR_5 + 1)
  return -VAR_6;

 if (VAR_15 & VAR_5)
  VAR_17 = 0;
 else
  VAR_17 = VAR_2;

 VAR_16 = VAR_14->bus.write(VAR_14->bus.client, VAR_1, VAR_17);
 if (!VAR_16) {
  VAR_14->int_mask &= ~VAR_5;
  VAR_14->int_mask |= VAR_15 & VAR_5;
 }

 if (VAR_15 & VAR_3) {
  if ((VAR_14->id & VAR_8) == VAR_7)

   VAR_17 = (~VAR_15) & VAR_4;
  else

   VAR_17 = (~VAR_15) & VAR_3;
 }
 VAR_16 = VAR_14->bus.write(VAR_14->bus.client, VAR_0, VAR_17);

 VAR_14->int_mask = VAR_17;

 return VAR_12;
}
