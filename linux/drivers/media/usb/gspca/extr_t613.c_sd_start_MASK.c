
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {int sensor; int freq; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; TYPE_2__ cam; } ;
struct additional_sensor_data {int* stream; } ;
struct TYPE_3__ {int priv; } ;


 int FUNC_0 (int**) ;


 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*,int) ;
 int FUNC_5 (struct gspca_dev*,int) ;
 int FUNC_6 (struct gspca_dev*,int*,int) ;
 int FUNC_7 (struct gspca_dev*,int,int const*,int) ;
 struct additional_sensor_data* VAR_0 ;
 int FUNC_8 (struct gspca_dev*,int ) ;
 int** VAR_1 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 const struct additional_sensor_data *VAR_4;
 int VAR_5, VAR_6;
 u8 VAR_7[] = { 0x07, 0x00, 0x0d, 0x60, 0x0e, 0x80 };
 static const u8 VAR_8[] =
  { 0x07, 0x00, 0x88, 0x02, 0x06, 0x00, 0xe7, 0x01 };

 VAR_6 = VAR_2->cam.cam_mode[VAR_2->curr_mode].priv;
 switch (VAR_6) {
 case 0:
  break;
 case 1:
  VAR_7[1] = 0x40;
  break;
 case 2:
  VAR_7[1] = 0x10;
  break;
 case 3:
  VAR_7[1] = 0x50;
  break;
 default:

  VAR_7[1] = 0x20;
  break;
 }

 switch (VAR_3->sensor) {
 case 129:
  FUNC_2(VAR_2);
  break;
 case 128:
  VAR_5 = 0;
  for (;;) {
   FUNC_6(VAR_2, VAR_1[VAR_5],
      sizeof VAR_1[0]);
   if (VAR_5 >= FUNC_0(VAR_1) - 1)
    break;
   VAR_5++;
  }
  FUNC_5(VAR_2, 0x3c80);

  FUNC_6(VAR_2, VAR_1[VAR_5],
     sizeof VAR_1[0]);
  FUNC_5(VAR_2, 0x3c80);
  break;
 }
 VAR_4 = &VAR_0[VAR_3->sensor];
 FUNC_8(VAR_2, FUNC_9(VAR_3->freq));
 FUNC_4(VAR_2, 0x0012);
 FUNC_6(VAR_2, VAR_7, sizeof VAR_7);
 FUNC_7(VAR_2, 0xb3, VAR_8, sizeof VAR_8);
 FUNC_5(VAR_2, 0x0013);
 FUNC_1(15);
 FUNC_6(VAR_2, VAR_4->stream, sizeof VAR_4->stream);
 FUNC_6(VAR_2, VAR_4->stream, sizeof VAR_4->stream);

 if (VAR_3->sensor == 129)
  FUNC_3(VAR_2);

 return 0;
}
