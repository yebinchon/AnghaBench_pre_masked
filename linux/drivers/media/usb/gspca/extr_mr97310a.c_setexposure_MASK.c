
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ cam_type; int sensor_type; } ;
struct TYPE_2__ {int width; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int ,int*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3, s32 VAR_4, s32 VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_3;
 int VAR_7 = VAR_2;
 u8 VAR_8[2];

 if (VAR_6->cam_type == VAR_0 && VAR_6->sensor_type == 1) {


  VAR_7 = (VAR_4 * 9267) / 10000 + 300;
  FUNC_0(VAR_3, 3, VAR_7 >> 4);
  FUNC_0(VAR_3, 4, VAR_7 & 0x0f);
 } else if (VAR_6->sensor_type == 2) {
  VAR_7 = VAR_4;
  VAR_7 >>= 3;
  FUNC_0(VAR_3, 3, VAR_7 >> 8);
  FUNC_0(VAR_3, 4, VAR_7 & 0xff);
 } else {







  u8 VAR_9 = (60 * VAR_4 + 7999) / 8000;


  if (VAR_9 < VAR_5 && VAR_3->pixfmt.width >= 320)
   VAR_9 = VAR_5;
  else if (VAR_9 < 2)
   VAR_9 = 2;

  if (VAR_6->cam_type == VAR_1 && VAR_9 < 4)
   VAR_9 = 4;



  VAR_7 = (60 * 511 * VAR_4) / (8000 * VAR_9);
  if (VAR_7 > 511)
   VAR_7 = 511;


  VAR_7 = 511 - VAR_7;

  VAR_8[0] = VAR_7 & 0xff;
  VAR_8[1] = VAR_7 >> 8;
  FUNC_1(VAR_3, 0x0e, 0, VAR_8, 2);
  FUNC_0(VAR_3, 0x02, VAR_9);
 }
}
