
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ad7150_chip_info {int** mag_sensitivity; int** thresh_sensitivity; int** threshold; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 struct ad7150_chip_info* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_3,
       const struct iio_chan_spec *VAR_4,
       enum iio_event_type VAR_5,
       enum iio_event_direction VAR_6,
       enum iio_event_info VAR_7,
       int *VAR_8, int *VAR_9)
{
 struct ad7150_chip_info *VAR_10 = FUNC_0(VAR_3);
 int VAR_11 = (VAR_6 == VAR_1);


 switch (VAR_5) {
 case 130:
  *VAR_8 = VAR_10->mag_sensitivity[VAR_11][VAR_4->channel];
  return VAR_2;
 case 128:
  *VAR_8 = VAR_10->thresh_sensitivity[VAR_11][VAR_4->channel];
  return VAR_2;
 case 129:
  *VAR_8 = VAR_10->threshold[VAR_11][VAR_4->channel];
  return VAR_2;
 default:
  return -VAR_0;
 }
}
