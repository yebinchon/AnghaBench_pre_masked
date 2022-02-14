
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct iio_dev {int dummy; } ;
struct ad7150_chip_info {scalar_t__ current_event; int client; int ** thresh_timeout; int ** thresh_sensitivity; int ** mag_timeout; int ** mag_sensitivity; int ** threshold; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (int ,unsigned int,int,int) ;
 int ** VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct ad7150_chip_info* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
         unsigned int VAR_5,
         enum iio_event_type VAR_6,
         enum iio_event_direction VAR_7)
{
 int VAR_8;
 u16 VAR_9;
 u8 VAR_10, VAR_11;
 struct ad7150_chip_info *VAR_12 = FUNC_3(VAR_4);
 int VAR_13 = (VAR_7 == VAR_2);
 u64 VAR_14;

 VAR_14 = FUNC_0(VAR_1, VAR_5, VAR_6, VAR_7);

 if (VAR_14 != VAR_12->current_event)
  return 0;

 switch (VAR_6) {

 case 129:
  VAR_9 = VAR_12->threshold[VAR_13][VAR_5];
  return FUNC_2(VAR_12->client,
       VAR_3[VAR_5][3],
       FUNC_4(VAR_9));
 case 130:
  VAR_10 = VAR_12->mag_sensitivity[VAR_13][VAR_5];
  VAR_11 = VAR_12->mag_timeout[VAR_13][VAR_5];
  break;
 case 128:
  VAR_10 = VAR_12->thresh_sensitivity[VAR_13][VAR_5];
  VAR_11 = VAR_12->thresh_timeout[VAR_13][VAR_5];
  break;
 default:
  return -VAR_0;
 }
 VAR_8 = FUNC_1(VAR_12->client,
     VAR_3[VAR_5][4],
     VAR_10);
 if (VAR_8)
  return VAR_8;
 return FUNC_1(VAR_12->client,
     VAR_3[VAR_5][5],
     VAR_11);
}
