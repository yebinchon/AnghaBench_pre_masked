
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
struct TYPE_2__ {int (* read ) (int ,scalar_t__,scalar_t__*) ;int client; } ;
struct adt7316_chip_info {int id; int config1; TYPE_1__ bus; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*) ;
 struct iio_dev_attr* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static inline ssize_t FUNC_5(struct device *VAR_7,
         struct device_attribute *VAR_8,
         char *VAR_9)
{
 struct iio_dev_attr *VAR_10 = FUNC_4(VAR_8);
 struct iio_dev *VAR_11 = FUNC_0(VAR_7);
 struct adt7316_chip_info *VAR_12 = FUNC_1(VAR_11);
 u8 VAR_13;
 int VAR_14;
 int VAR_15;

 if ((VAR_12->id & VAR_6) == VAR_4 &&
     VAR_10->address > VAR_0)
  return -VAR_3;

 VAR_15 = VAR_12->bus.read(VAR_12->bus.client, VAR_10->address, &VAR_13);
 if (VAR_15)
  return -VAR_2;

 VAR_14 = (int)VAR_13;

 if (!((VAR_12->id & VAR_6) == VAR_5 &&
       (VAR_12->config1 & VAR_1) == 0)) {
  if (VAR_14 & 0x80)
   VAR_14 -= 256;
 }

 return FUNC_2(VAR_9, "%d\n", VAR_14);
}
