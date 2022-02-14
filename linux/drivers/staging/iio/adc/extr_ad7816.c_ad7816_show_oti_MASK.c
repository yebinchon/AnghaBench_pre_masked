
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7816_chip_info {size_t channel_id; int* oti_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,size_t) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct ad7816_chip_info* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
          struct device_attribute *VAR_5,
          char *VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_1(VAR_4);
 struct ad7816_chip_info *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;

 if (VAR_8->channel_id > VAR_2) {
  FUNC_0(VAR_4, "Invalid oti channel id %d.\n", VAR_8->channel_id);
  return -VAR_3;
 } else if (VAR_8->channel_id == 0) {
  VAR_9 = VAR_1 +
   (VAR_8->oti_data[VAR_8->channel_id] -
   VAR_0);
  return FUNC_3(VAR_6, "%d\n", VAR_9);
 }
 return FUNC_3(VAR_6, "%u\n", VAR_8->oti_data[VAR_8->channel_id]);
}
