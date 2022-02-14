
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int avg_lum; scalar_t__ autogain_ignore_frames; scalar_t__ sof_read; int brightness; } ;
struct TYPE_2__ {int width; } ;
struct gspca_dev {int usb_err; TYPE_1__ pixfmt; int exposure; int gain; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int * VAR_2 ;
 int FUNC_3 (struct gspca_dev*,int,int) ;
 int FUNC_4 (struct gspca_dev*,int,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 __u8 VAR_5;

 FUNC_3(VAR_3, 0x0f, 0x10);
 FUNC_4(VAR_3, 0x0002, VAR_2[0], 8);
 FUNC_4(VAR_3, 0x000a, VAR_2[1], 8);
 FUNC_4(VAR_3, 0x0012, VAR_2[2], 8);
 FUNC_4(VAR_3, 0x0042, VAR_2[3], 8);


 if (VAR_3->pixfmt.width == 176)
  FUNC_3(VAR_3, 0x4a, 0xff);
 else
  FUNC_3(VAR_3, 0x4a, 0x30);
 FUNC_3(VAR_3, 0x4b, 0x00);
 FUNC_3(VAR_3, 0x08, FUNC_5(VAR_4->brightness));


 FUNC_3(VAR_3, 0x0e,
  FUNC_5(VAR_3->gain));
 FUNC_3(VAR_3, 0x02,
  FUNC_5(VAR_3->exposure));


 if (VAR_1)
  VAR_5 = 0x00;
 else
  VAR_5 = 0x02;
 if (VAR_3->pixfmt.width == 176) {
  VAR_5 |= 0x01;
  FUNC_1(VAR_3, VAR_0, "pac207_start mode 176x144\n");
 } else {
  FUNC_1(VAR_3, VAR_0, "pac207_start mode 352x288\n");
 }
 FUNC_3(VAR_3, 0x41, VAR_5);

 FUNC_3(VAR_3, 0x13, 0x01);
 FUNC_3(VAR_3, 0x1c, 0x01);
 FUNC_2(10);
 FUNC_3(VAR_3, 0x40, 0x01);

 VAR_4->sof_read = 0;
 VAR_4->autogain_ignore_frames = 0;
 FUNC_0(&VAR_4->avg_lum, -1);
 return VAR_3->usb_err;
}
