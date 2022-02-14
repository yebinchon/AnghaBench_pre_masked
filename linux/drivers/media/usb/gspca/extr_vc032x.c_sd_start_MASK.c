
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {int flags; scalar_t__ bridge; int image_offset; int sensor; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; int* usb_buf; int usb_err; TYPE_2__ cam; } ;
struct TYPE_3__ {scalar_t__ pixelformat; int priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;
 int * VAR_6 ;
 int ** VAR_7 ;
 int ** VAR_8 ;
 int * VAR_9 ;
 int ** VAR_10 ;
 int ** VAR_11 ;
 int ** VAR_12 ;
 int * VAR_13 ;
 int ** VAR_14 ;
 int ** VAR_15 ;
 int * VAR_16 ;



 int FUNC_0 (int) ;
 int * VAR_17 ;
 int ** VAR_18 ;
 int ** VAR_19 ;
 int * VAR_20 ;
 int ** VAR_21 ;
 int ** VAR_22 ;
 int * VAR_23 ;
 int ** VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int ** VAR_27 ;
 int ** VAR_28 ;
 int * VAR_29 ;
 int ** VAR_30 ;
 int ** VAR_31 ;
 int ** VAR_32 ;
 int const** VAR_33 ;
 int ** VAR_34 ;
 int const** VAR_35 ;
 int const** VAR_36 ;
 int FUNC_1 (struct gspca_dev*,int const*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;
 int FUNC_3 (struct gspca_dev*,int,int,int) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*,int const**) ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_37)
{
 struct sd *VAR_38 = (struct sd *) VAR_37;
 const u8 (*VAR_39)[4];
 const u8 *VAR_40 = ((void*)0);
 const u8 *VAR_41 = ((void*)0);
 int VAR_42;
 static const u8 (*VAR_43[])[4] = {
  129,
  128,
  130,
 };


 if (VAR_38->flags & VAR_1) {
  FUNC_3(VAR_37, 0x89, 0xf0ff, 0xffff);
  FUNC_3(VAR_37, 0xa9, 0x8348, 0x000e);
  FUNC_3(VAR_37, 0xa9, 0x0000, 0x001a);
 }


 if (VAR_38->bridge == VAR_0) {
  FUNC_3(VAR_37, 0xa0, 0xff, 0xbfec);
  FUNC_3(VAR_37, 0xa0, 0xff, 0xbfed);
  FUNC_3(VAR_37, 0xa0, 0xff, 0xbfee);
  FUNC_3(VAR_37, 0xa0, 0xff, 0xbfef);
  VAR_38->image_offset = 46;
 } else {
  if (VAR_37->cam.cam_mode[VAR_37->curr_mode].pixelformat
    == VAR_2)
   VAR_38->image_offset = 0;
  else
   VAR_38->image_offset = 32;
 }

 VAR_42 = VAR_37->cam.cam_mode[(int) VAR_37->curr_mode].priv;
 switch (VAR_38->sensor) {
 case 140:
  VAR_40 = VAR_3;
  VAR_41 = VAR_6;
  if (VAR_42)
   VAR_39 = VAR_4;
  else
   VAR_39 = VAR_5;
  break;
 case 135:
  VAR_40 = VAR_17;
  VAR_41 = VAR_20;
  if (VAR_42)
   VAR_39 = VAR_18;
  else
   VAR_39 = VAR_19;
  break;
 case 139:
  VAR_40 = VAR_13;
  VAR_41 = VAR_9;
  if (VAR_42)
   VAR_39 = VAR_7;
  else
   VAR_39 = VAR_8;
  break;
 case 138:
  VAR_40 = VAR_13;
  VAR_41 = VAR_16;
  switch (VAR_42) {
  case 1:
   VAR_39 = VAR_11;
   break;
  case 0:
   VAR_39 = VAR_12;
   break;
  default:
   VAR_39 = VAR_10;
   break;
  }
  break;
 case 137:
  VAR_40 = VAR_13;
  VAR_41 = VAR_16;
  if (VAR_42)
   VAR_39 = VAR_14;
  else
   VAR_39 = VAR_15;
  break;
 case 136:
  VAR_40 = VAR_13;
  VAR_41 = VAR_16;
  VAR_39 = VAR_43[VAR_42];
  break;
 case 134:
  VAR_39 = VAR_42 == 1 ? VAR_22 : VAR_21;
  break;
 case 132:
  VAR_40 = VAR_26;
  VAR_41 = VAR_29;
  if (VAR_42)
   VAR_39 = VAR_27;
  else
   VAR_39 = VAR_28;
  FUNC_6(VAR_37, VAR_39);
  VAR_39 = VAR_30;
  break;
 case 133:
  VAR_40 = VAR_23;
  VAR_41 = VAR_25;
  VAR_39 = VAR_24;
  break;
 default:

  FUNC_6(VAR_37, VAR_33);
  FUNC_4(VAR_37);
  FUNC_6(VAR_37, VAR_36);
  if (VAR_42)
   VAR_39 = VAR_31;
  else
   VAR_39 = VAR_32;
  FUNC_6(VAR_37, VAR_39);
  FUNC_2(VAR_37, 0x8c, 0x0000, 3);
  FUNC_3(VAR_37, 0xa0,
    VAR_37->usb_buf[2] & 1 ? 0 : 1,
    0xb35c);
  FUNC_0(300);

  VAR_39 = VAR_34;
  break;
 }
 FUNC_6(VAR_37, VAR_39);
 if (VAR_40 && VAR_41) {
  FUNC_1(VAR_37, VAR_40, 17, 0xb84a);
  FUNC_1(VAR_37, VAR_40, 17, 0xb85b);
  FUNC_1(VAR_37, VAR_40, 17, 0xb86c);
  FUNC_1(VAR_37, VAR_41, 9, 0xb82c);

  switch (VAR_38->sensor) {
  case 133:
  case 140:
   FUNC_3(VAR_37, 0x89, 0x0400, 0x1415);
   break;
  case 138:
   FUNC_3(VAR_37, 0x89, 0x058c, 0x0000);
   break;
  }
  FUNC_0(100);
 }
 switch (VAR_38->sensor) {
 case 134:
  FUNC_3(VAR_37, 0x87, 0xffff, 0xffff);
  FUNC_3(VAR_37, 0x88, 0xff00, 0xf0f1);
  FUNC_3(VAR_37, 0xa0, 0x0000, 0xbfff);
  break;
 case 131:
  FUNC_6(VAR_37, VAR_35);
  FUNC_5(VAR_37);
  FUNC_0(80);
  FUNC_3(VAR_37, 0x89, 0xffff, 0xfdff);
  break;
 }
 return VAR_37->usb_err;
}
