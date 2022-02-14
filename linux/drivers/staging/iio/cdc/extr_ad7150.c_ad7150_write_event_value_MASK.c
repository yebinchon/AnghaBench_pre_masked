
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ad7150_chip_info {int** mag_sensitivity; int** thresh_sensitivity; int** threshold; int state_lock; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct iio_dev*,size_t,int,int) ;
 struct ad7150_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
        const struct iio_chan_spec *VAR_3,
        enum iio_event_type VAR_4,
        enum iio_event_direction VAR_5,
        enum iio_event_info VAR_6,
        int VAR_7, int VAR_8)
{
 int VAR_9;
 struct ad7150_chip_info *VAR_10 = FUNC_1(VAR_2);
 int VAR_11 = (VAR_5 == VAR_1);

 FUNC_2(&VAR_10->state_lock);
 switch (VAR_4) {
 case 130:
  VAR_10->mag_sensitivity[VAR_11][VAR_3->channel] = VAR_7;
  break;
 case 128:
  VAR_10->thresh_sensitivity[VAR_11][VAR_3->channel] = VAR_7;
  break;
 case 129:
  VAR_10->threshold[VAR_11][VAR_3->channel] = VAR_7;
  break;
 default:
  VAR_9 = -VAR_0;
  goto error_ret;
 }


 VAR_9 = FUNC_0(VAR_2, VAR_3->channel, VAR_4, VAR_5);

error_ret:
 FUNC_3(&VAR_10->state_lock);
 return VAR_9;
}
