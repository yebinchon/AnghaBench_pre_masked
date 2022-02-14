
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
struct adt7316_chip_info {int id; int config1; TYPE_1__ bus; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_6,
         struct device_attribute *VAR_7,
         const char *VAR_8,
         size_t VAR_9)
{
 struct iio_dev *VAR_10 = FUNC_0(VAR_6);
 struct adt7316_chip_info *VAR_11 = FUNC_1(VAR_10);
 u8 VAR_12;
 int VAR_13;

 if ((VAR_11->id & VAR_5) != VAR_4)
  return -VAR_3;

 VAR_12 = VAR_11->config1 & (~VAR_1);
 if (VAR_8[0] == '1')
  VAR_12 |= VAR_1;

 VAR_13 = VAR_11->bus.write(VAR_11->bus.client, VAR_0, VAR_12);
 if (VAR_13)
  return -VAR_2;

 VAR_11->config1 = VAR_12;

 return VAR_9;
}
