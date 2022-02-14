
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7816_chip_info {scalar_t__ channel_id; } ;
typedef int ssize_t ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct ad7816_chip_info*,int*) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 struct ad7816_chip_info* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (char*,char*,int,...) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
     struct device_attribute *VAR_5,
     char *VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_2(VAR_4);
 struct ad7816_chip_info *VAR_8 = FUNC_3(VAR_7);
 u16 VAR_9;
 s8 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_8, &VAR_9);
 if (VAR_11)
  return -VAR_3;

 VAR_9 >>= VAR_2;

 if (VAR_8->channel_id == 0) {
  VAR_10 = (s8)((VAR_9 >> VAR_1) - 103);
  VAR_9 &= VAR_0;
  if (VAR_10 < 0)
   VAR_9 = FUNC_0(VAR_1) - VAR_9;
  return FUNC_4(VAR_6, "%d.%.2d\n", VAR_10, VAR_9 * 25);
 }
 return FUNC_4(VAR_6, "%u\n", VAR_9);
}
