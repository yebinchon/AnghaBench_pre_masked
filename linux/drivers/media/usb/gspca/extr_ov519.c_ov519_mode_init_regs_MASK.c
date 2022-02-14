
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* cam_mode; } ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_8__ {size_t curr_mode; TYPE_3__ cam; TYPE_1__ pixfmt; } ;
struct sd {int sensor; scalar_t__ frame_rate; int clockdiv; TYPE_4__ gspca_dev; } ;
struct ov_regvals {int member_0; int member_1; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_6__ {scalar_t__ priv; } ;


 int FUNC_0 (struct ov_regvals const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;






 scalar_t__ VAR_10 ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_2 (struct sd*,int,int) ;
 int FUNC_3 (struct sd*,int ,int,int) ;
 int FUNC_4 (struct sd*,struct ov_regvals const*,int ) ;

__attribute__((used)) static void FUNC_5(struct sd *VAR_11)
{
 static const struct ov_regvals VAR_12[] = {
  { 0x5d, 0x03 },
  { 0x53, 0x9f },
  { 133, 0x0f },
  { 0xa2, 0x20 },
  { 0xa3, 0x18 },
  { 0xa4, 0x04 },
  { 0xa5, 0x28 },
  { 0x37, 0x00 },
  { 0x55, 0x02 },

  { 0x20, 0x0c },
  { 0x21, 0x38 },
  { 0x22, 0x1d },
  { 0x17, 0x50 },
  { 0x37, 0x00 },
  { 0x40, 0xff },
  { 0x46, 0x00 },
  { 0x59, 0x04 },
  { 0xff, 0x00 },

 };

 static const struct ov_regvals VAR_13[] = {
  { 0x5d, 0x03 },
  { 0x53, 0x9f },
  { 133, 0x0f },
  { 0xa2, 0x20 },
  { 0xa3, 0x18 },
  { 0xa4, 0x04 },
  { 0xa5, 0x28 },
  { 0x37, 0x00 },
  { 0x55, 0x02 },

  { 0x22, 0x1d },
  { 0x17, 0x50 },
  { 0x37, 0x00 },
  { 0x40, 0xff },
  { 0x46, 0x00 },
  { 0x59, 0x04 },
  { 0xff, 0x00 },

 };

 struct gspca_dev *VAR_14 = (struct gspca_dev *)VAR_11;


 switch (VAR_11->sensor) {
 default:
  FUNC_4(VAR_11, VAR_13, FUNC_0(VAR_13));
  if (VAR_11->sensor == 132 ||
      VAR_11->sensor == 131) {

   FUNC_3(VAR_11, VAR_8, 0x10, 0x10);
  }
  break;
 case 130:
  return;
 case 129:
  FUNC_4(VAR_11, VAR_12,
    FUNC_0(VAR_12));
  break;
 }

 FUNC_2(VAR_11, VAR_1, VAR_11->gspca_dev.pixfmt.width >> 4);
 FUNC_2(VAR_11, VAR_2, VAR_11->gspca_dev.pixfmt.height >> 3);
 if (VAR_11->sensor == 129 &&
     VAR_11->gspca_dev.cam.cam_mode[VAR_11->gspca_dev.curr_mode].priv)
  FUNC_2(VAR_11, VAR_3, 0x04);
 else if (VAR_11->sensor == 131 &&
     VAR_11->gspca_dev.cam.cam_mode[VAR_11->gspca_dev.curr_mode].priv)
  FUNC_2(VAR_11, VAR_3, 0x01);
 else
  FUNC_2(VAR_11, VAR_3, 0x00);
 FUNC_2(VAR_11, VAR_4, 0x00);
 FUNC_2(VAR_11, VAR_5, 0x00);
 FUNC_2(VAR_11, VAR_6, 0x00);
 FUNC_2(VAR_11, VAR_7, 0x00);
 FUNC_2(VAR_11, VAR_9, 0x03);
 FUNC_2(VAR_11, 0x26, 0x00);


 if (VAR_10 > 0)
  VAR_11->frame_rate = VAR_10;


 VAR_11->clockdiv = 0;
 switch (VAR_11->sensor) {
 case 132:
 case 131:
  switch (VAR_11->frame_rate) {
  default:

   FUNC_2(VAR_11, 0xa4, 0x0c);
   FUNC_2(VAR_11, 0x23, 0xff);
   break;
  case 25:
   FUNC_2(VAR_11, 0xa4, 0x0c);
   FUNC_2(VAR_11, 0x23, 0x1f);
   break;
  case 20:
   FUNC_2(VAR_11, 0xa4, 0x0c);
   FUNC_2(VAR_11, 0x23, 0x1b);
   break;
  case 15:
   FUNC_2(VAR_11, 0xa4, 0x04);
   FUNC_2(VAR_11, 0x23, 0xff);
   VAR_11->clockdiv = 1;
   break;
  case 10:
   FUNC_2(VAR_11, 0xa4, 0x04);
   FUNC_2(VAR_11, 0x23, 0x1f);
   VAR_11->clockdiv = 1;
   break;
  case 5:
   FUNC_2(VAR_11, 0xa4, 0x04);
   FUNC_2(VAR_11, 0x23, 0x1b);
   VAR_11->clockdiv = 1;
   break;
  }
  break;
 case 128:
  switch (VAR_11->frame_rate) {
  default:

   FUNC_2(VAR_11, 0xa4, 0x06);
   FUNC_2(VAR_11, 0x23, 0xff);
   break;
  case 10:
   FUNC_2(VAR_11, 0xa4, 0x06);
   FUNC_2(VAR_11, 0x23, 0x1f);
   break;
  case 5:
   FUNC_2(VAR_11, 0xa4, 0x06);
   FUNC_2(VAR_11, 0x23, 0x1b);
   break;
  }
  break;
 case 129:
  FUNC_1(VAR_14, VAR_0, "Setting framerate to %d fps\n",
     (VAR_11->frame_rate == 0) ? 15 : VAR_11->frame_rate);
  FUNC_2(VAR_11, 0xa4, 0x10);
  switch (VAR_11->frame_rate) {
  case 30:
   FUNC_2(VAR_11, 0x23, 0xff);
   break;
  case 20:
   FUNC_2(VAR_11, 0x23, 0x1b);
   break;
  default:

   FUNC_2(VAR_11, 0x23, 0xff);
   VAR_11->clockdiv = 1;
   break;
  }
  break;
 }
}
