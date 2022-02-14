
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {size_t webcam; scalar_t__ exp_too_low_cnt; scalar_t__ exp_too_high_cnt; } ;
struct TYPE_2__ {int width; } ;
struct gspca_dev {int usb_err; TYPE_1__ pixfmt; } ;





 int const* VAR_0 ;
 int const* VAR_1 ;
 int const* VAR_2 ;
 int const* VAR_3 ;
 int const* VAR_4 ;
 int const* VAR_5 ;
 int const* VAR_6 ;
 int const* VAR_7 ;
 int const* VAR_8 ;
 int FUNC_0 (struct gspca_dev*,int const*) ;
 int ** VAR_9 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_10)
{
 struct sd *VAR_11 = (struct sd *) VAR_10;
 const u8 *VAR_12;

 VAR_12 = VAR_9[VAR_11->webcam];
 FUNC_0(VAR_10, VAR_12);
 switch (VAR_11->webcam) {
 case 129:
  if (VAR_10->pixfmt.width == 320)
   FUNC_0(VAR_10, VAR_4);
  else
   FUNC_0(VAR_10, VAR_5);
  FUNC_0(VAR_10, VAR_3);
  break;
 case 130:
  if (VAR_10->pixfmt.width == 320)
   FUNC_0(VAR_10, VAR_1);
  else
   FUNC_0(VAR_10, VAR_2);
  FUNC_0(VAR_10, VAR_0);
  break;
 case 128:
  if (VAR_10->pixfmt.width == 320)
   FUNC_0(VAR_10, VAR_7);
  else
   FUNC_0(VAR_10, VAR_8);
  FUNC_0(VAR_10, VAR_6);
  break;
 }

 VAR_11->exp_too_high_cnt = 0;
 VAR_11->exp_too_low_cnt = 0;
 return VAR_10->usb_err;
}
