
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; int type; } ;
struct ad7150_chip_info {scalar_t__ current_event; int state_lock; int client; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct iio_dev*,int ,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct ad7150_chip_info* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_3,
         const struct iio_chan_spec *VAR_4,
         enum iio_event_type VAR_5,
         enum iio_event_direction VAR_6, int VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10;
 int VAR_11;
 struct ad7150_chip_info *VAR_12 = FUNC_5(VAR_3);
 int VAR_13 = (VAR_6 == VAR_2);
 u64 VAR_14;


 if (!VAR_7)
  return -VAR_1;

 VAR_14 = FUNC_1(VAR_4->type, VAR_4->channel, VAR_5, VAR_6);
 if (VAR_14 == VAR_12->current_event)
  return 0;
 FUNC_6(&VAR_12->state_lock);
 VAR_11 = FUNC_3(VAR_12->client, VAR_0);
 if (VAR_11 < 0)
  goto error_ret;

 VAR_9 = VAR_11 & ~((0x03 << 5) | FUNC_0(7));

 switch (VAR_5) {
 case 130:
  VAR_10 = 1;
  if (VAR_13)
   VAR_8 = 0x1;
  else
   VAR_8 = 0x0;
  break;
 case 128:
  VAR_10 = 1;
  if (VAR_13)
   VAR_8 = 0x3;
  else
   VAR_8 = 0x2;
  break;
 case 129:
  VAR_10 = 0;
  if (VAR_13)
   VAR_8 = 0x1;
  else
   VAR_8 = 0x0;
  break;
 default:
  VAR_11 = -VAR_1;
  goto error_ret;
 }

 VAR_9 |= (!VAR_10 << 7) | (VAR_8 << 5);

 VAR_11 = FUNC_4(VAR_12->client, VAR_0, VAR_9);
 if (VAR_11 < 0)
  goto error_ret;

 VAR_12->current_event = VAR_14;


 VAR_11 = FUNC_2(VAR_3, VAR_4->channel, VAR_5, VAR_6);
error_ret:
 FUNC_7(&VAR_12->state_lock);

 return VAR_11;
}
