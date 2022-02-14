
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {scalar_t__ bridge; scalar_t__ sensor; int jpegqual; int red; int blue; int quality; int jpeg_hdr; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {int usb_err; int exposure; int autogain; int gain; scalar_t__ curr_mode; TYPE_1__ pixfmt; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct gspca_dev*,int,int) ;
 int FUNC_5 (struct gspca_dev*,int ,int ) ;
 int FUNC_6 (struct gspca_dev*,int ) ;
 int FUNC_7 (struct gspca_dev*,int ) ;
 int FUNC_8 (struct gspca_dev*,int ,int ,int ,int ) ;
 int FUNC_9 (struct gspca_dev*,int ) ;
 int FUNC_10 (struct gspca_dev*,int ) ;
 int FUNC_11 (struct gspca_dev*) ;
 int FUNC_12 (struct gspca_dev*) ;
 int VAR_4 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;

 FUNC_3(VAR_6->jpeg_hdr, VAR_5->pixfmt.height,
   VAR_5->pixfmt.width);
 FUNC_6(VAR_5, VAR_6->quality);
 if (VAR_6->bridge == VAR_0) {
  if (VAR_6->sensor == VAR_2)
   FUNC_1(VAR_5);
  else
   FUNC_11(VAR_5);
 } else {
  if (VAR_6->sensor == VAR_2)
   FUNC_2(VAR_5);
  else
   FUNC_12(VAR_5);
  FUNC_5(VAR_5, VAR_4,
    FUNC_0(VAR_4));
  FUNC_4(VAR_5, 0x80, 0x03);
  FUNC_4(VAR_5, 0x82, VAR_5->curr_mode ? 0x0a : 0x0e);

  if (VAR_6->sensor == VAR_2)
   FUNC_8(VAR_5,
    FUNC_13(VAR_5->exposure),
    FUNC_13(VAR_5->gain),
    FUNC_13(VAR_6->blue),
    FUNC_13(VAR_6->red));
  else
   FUNC_8(VAR_5,
    FUNC_13(VAR_5->exposure),
    FUNC_13(VAR_5->gain), 0, 0);
  if (VAR_6->sensor == VAR_3)
   FUNC_10(VAR_5,
       FUNC_13(VAR_6->jpegqual));
  if (VAR_6->bridge == VAR_1)
   FUNC_7(VAR_5,
        FUNC_13(VAR_5->autogain));
 }

 FUNC_9(VAR_5, FUNC_13(VAR_5->exposure));

 return VAR_5->usb_err;
}
