
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad7150_chip_info {int client; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;



 int FUNC_1 (int ,int ) ;
 struct ad7150_chip_info* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_5,
        const struct iio_chan_spec *VAR_6,
        enum iio_event_type VAR_7,
        enum iio_event_direction VAR_8)
{
 int VAR_9;
 u8 VAR_10;
 bool VAR_11;
 struct ad7150_chip_info *VAR_12 = FUNC_2(VAR_5);

 VAR_9 = FUNC_1(VAR_12->client, VAR_0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10 = FUNC_0(VAR_2, VAR_9);


 VAR_11 = FUNC_0(VAR_1, VAR_9);

 switch (VAR_7) {
 case 130:
  if (VAR_8 == VAR_4)
   return !VAR_11 && (VAR_10 == 0x1);
  return !VAR_11 && (VAR_10 == 0x0);
 case 128:
  if (VAR_8 == VAR_4)
   return !VAR_11 && (VAR_10 == 0x3);
  return !VAR_11 && (VAR_10 == 0x2);
 case 129:
  if (VAR_8 == VAR_4)
   return VAR_11 && (VAR_10 == 0x1);
  return VAR_11 && (VAR_10 == 0x0);
 default:
  break;
 }
 return -VAR_3;
}
