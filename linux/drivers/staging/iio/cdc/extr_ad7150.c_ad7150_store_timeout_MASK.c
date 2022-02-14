
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7150_chip_info {int state_lock; void*** thresh_timeout; void*** mag_timeout; } ;
typedef int ssize_t ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;


 int FUNC_3 (struct iio_dev*,int,int,int) ;
 struct iio_dev* FUNC_4 (struct device*) ;
 struct ad7150_chip_info* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (char const*,int,void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct iio_dev_attr* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4,
        size_t VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_4(VAR_2);
 struct ad7150_chip_info *VAR_7 = FUNC_5(VAR_6);
 struct iio_dev_attr *VAR_8 = FUNC_9(VAR_3);
 int VAR_9 = FUNC_0(VAR_8->address);
 enum iio_event_direction VAR_10;
 enum iio_event_type VAR_11;
 int VAR_12;
 u8 VAR_13;
 int VAR_14;

 VAR_11 = FUNC_2(VAR_8->address);
 VAR_10 = FUNC_1(VAR_8->address);
 VAR_12 = (VAR_10 == VAR_1);

 VAR_14 = FUNC_6(VAR_4, 10, &VAR_13);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_7(&VAR_7->state_lock);
 switch (VAR_11) {
 case 129:
  VAR_7->mag_timeout[VAR_12][VAR_9] = VAR_13;
  break;
 case 128:
  VAR_7->thresh_timeout[VAR_12][VAR_9] = VAR_13;
  break;
 default:
  VAR_14 = -VAR_0;
  goto error_ret;
 }

 VAR_14 = FUNC_3(VAR_6, VAR_9, VAR_11, VAR_10);
error_ret:
 FUNC_8(&VAR_7->state_lock);

 if (VAR_14 < 0)
  return VAR_14;

 return VAR_5;
}
