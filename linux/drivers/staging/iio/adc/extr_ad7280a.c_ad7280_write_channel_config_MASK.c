
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7280_state {long cell_threshhigh; long cell_threshlow; long aux_threshhigh; long aux_threshlow; int lock; } ;
typedef int ssize_t ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ad7280_state*,int ,int,int,long) ;
 long FUNC_1 (long,long,int) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 struct ad7280_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct iio_dev_attr* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4,
        size_t VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_2(VAR_2);
 struct ad7280_state *VAR_7 = FUNC_3(VAR_6);
 struct iio_dev_attr *VAR_8 = FUNC_7(VAR_3);

 long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_4, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 switch (VAR_8->address) {
 case 129:
 case 128:
  VAR_9 = ((VAR_9 - 1000) * 100) / 1568;
  break;
 case 131:
 case 130:
  VAR_9 = (VAR_9 * 10) / 196;
  break;
 default:
  return -VAR_1;
 }

 VAR_9 = FUNC_1(VAR_9, 0L, 0xFFL);

 FUNC_5(&VAR_7->lock);
 switch (VAR_8->address) {
 case 129:
  VAR_7->cell_threshhigh = VAR_9;
  break;
 case 128:
  VAR_7->cell_threshlow = VAR_9;
  break;
 case 131:
  VAR_7->aux_threshhigh = VAR_9;
  break;
 case 130:
  VAR_7->aux_threshlow = VAR_9;
  break;
 }

 VAR_10 = FUNC_0(VAR_7, VAR_0,
      VAR_8->address, 1, VAR_9);

 FUNC_6(&VAR_7->lock);

 return VAR_10 ? VAR_10 : VAR_5;
}
