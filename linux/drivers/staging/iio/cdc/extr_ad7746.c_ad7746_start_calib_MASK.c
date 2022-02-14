
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7746_chip_info {int config; int lock; int client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct ad7746_chip_info* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int*) ;

__attribute__((used)) static inline ssize_t FUNC_8(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3,
      size_t VAR_4,
      u8 VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_0(VAR_1);
 struct ad7746_chip_info *VAR_7 = FUNC_3(VAR_6);
 int VAR_8, VAR_9 = 10;
 bool VAR_10;

 VAR_8 = FUNC_7(VAR_3, &VAR_10);
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_10)
  return 0;

 FUNC_5(&VAR_7->lock);
 VAR_5 |= VAR_7->config;
 VAR_8 = FUNC_2(VAR_7->client, VAR_0, VAR_5);
 if (VAR_8 < 0)
  goto unlock;

 do {
  FUNC_4(20);
  VAR_8 = FUNC_1(VAR_7->client, VAR_0);
  if (VAR_8 < 0)
   goto unlock;

 } while ((VAR_8 == VAR_5) && VAR_9--);

 FUNC_6(&VAR_7->lock);

 return VAR_4;

unlock:
 FUNC_6(&VAR_7->lock);
 return VAR_8;
}
