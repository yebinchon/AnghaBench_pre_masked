
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7816_chip_info {size_t channel_id; scalar_t__* oti_data; } ;
typedef int ssize_t ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ad7816_chip_info*,scalar_t__) ;
 int FUNC_1 (struct device*,char*,size_t) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 struct ad7816_chip_info* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (char const*,int,long*) ;

__attribute__((used)) static inline ssize_t FUNC_5(struct device *VAR_6,
         struct device_attribute *VAR_7,
         const char *VAR_8,
         size_t VAR_9)
{
 struct iio_dev *VAR_10 = FUNC_2(VAR_6);
 struct ad7816_chip_info *VAR_11 = FUNC_3(VAR_10);
 long VAR_12;
 u8 VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_8, 10, &VAR_12);
 if (VAR_14)
  return VAR_14;

 if (VAR_11->channel_id > VAR_3) {
  FUNC_1(VAR_6, "Invalid oti channel id %d.\n", VAR_11->channel_id);
  return -VAR_4;
 } else if (VAR_11->channel_id == 0) {
  if (VAR_12 < VAR_2 ||
      VAR_12 > VAR_1)
   return -VAR_4;

  VAR_13 = (u8)(VAR_12 - VAR_2 +
   VAR_0);
 } else {
  if (VAR_12 < VAR_0 || VAR_12 > 255)
   return -VAR_4;

  VAR_13 = (u8)VAR_12;
 }

 VAR_14 = FUNC_0(VAR_11, VAR_13);
 if (VAR_14)
  return -VAR_5;

 VAR_11->oti_data[VAR_11->channel_id] = VAR_13;

 return VAR_9;
}
