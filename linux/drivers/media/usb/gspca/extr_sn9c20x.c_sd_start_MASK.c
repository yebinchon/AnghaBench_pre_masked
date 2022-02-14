
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sd {int fmt; scalar_t__ nchg; scalar_t__ npkt; scalar_t__ pktsz; scalar_t__ vflip; scalar_t__ hflip; scalar_t__ exposure; scalar_t__ gain; scalar_t__ red; scalar_t__ blue; scalar_t__ gamma; scalar_t__ hue; scalar_t__ saturation; scalar_t__ contrast; scalar_t__ brightness; int vstart; int hstart; int * jpeg_hdr; scalar_t__ jpegqual; } ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {int usb_err; TYPE_3__ pixfmt; scalar_t__ curr_mode; TYPE_2__ cam; } ;
struct TYPE_4__ {int priv; } ;


 int * FUNC_0 (int,int) ;
 int * FUNC_1 (int,int ,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (int *,int,int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct gspca_dev*,int,int *,int) ;
 int FUNC_7 (struct gspca_dev*,int,int) ;
 int FUNC_8 (struct gspca_dev*,int ,int ,int ,int ) ;
 int FUNC_9 (struct gspca_dev*,int ) ;
 int FUNC_10 (struct gspca_dev*,int ) ;
 int FUNC_11 (struct gspca_dev*,int ) ;
 int FUNC_12 (struct gspca_dev*,int ,int ) ;
 int FUNC_13 (struct gspca_dev*,int ,int ) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 int VAR_7 = VAR_5->cam.cam_mode[(int) VAR_5->curr_mode].priv;
 int VAR_8 = VAR_5->pixfmt.width;
 int VAR_9 = VAR_5->pixfmt.height;
 u8 VAR_10, VAR_11 = 0;

 FUNC_3(VAR_6->jpeg_hdr, VAR_9, VAR_8,
   0x21);
 FUNC_4(VAR_6->jpeg_hdr, FUNC_14(VAR_6->jpegqual));

 if (VAR_7 & VAR_3)
  VAR_10 = 0x2d;
 else if (VAR_7 & VAR_2)
  VAR_10 = 0x24;
 else
  VAR_10 = 0x2f;
 VAR_6->fmt = VAR_10;

 switch (VAR_7 & VAR_4) {
 case 131:
  VAR_11 = 0xc0;
  FUNC_5("Set 1280x1024\n");
  break;
 case 128:
  VAR_11 = 0x80;
  FUNC_5("Set 640x480\n");
  break;
 case 129:
  VAR_11 = 0x90;
  FUNC_5("Set 320x240\n");
  break;
 case 130:
  VAR_11 = 0xa0;
  FUNC_5("Set 160x120\n");
  break;
 }

 FUNC_2(VAR_5, VAR_7);
 FUNC_6(VAR_5, 0x1100, &VAR_6->jpeg_hdr[VAR_0], 64);
 FUNC_6(VAR_5, 0x1140, &VAR_6->jpeg_hdr[VAR_1], 64);
 FUNC_6(VAR_5, 0x10fb, FUNC_0(VAR_8, VAR_9), 5);
 FUNC_6(VAR_5, 0x1180, FUNC_1(VAR_7, VAR_6->hstart, VAR_6->vstart), 6);
 FUNC_7(VAR_5, 0x1189, VAR_11);
 FUNC_7(VAR_5, 0x10e0, VAR_10);

 FUNC_8(VAR_5, FUNC_14(VAR_6->brightness),
   FUNC_14(VAR_6->contrast),
   FUNC_14(VAR_6->saturation),
   FUNC_14(VAR_6->hue));
 FUNC_11(VAR_5, FUNC_14(VAR_6->gamma));
 FUNC_13(VAR_5, FUNC_14(VAR_6->blue),
   FUNC_14(VAR_6->red));
 if (VAR_6->gain)
  FUNC_10(VAR_5, FUNC_14(VAR_6->gain));
 if (VAR_6->exposure)
  FUNC_9(VAR_5, FUNC_14(VAR_6->exposure));
 if (VAR_6->hflip)
  FUNC_12(VAR_5, FUNC_14(VAR_6->hflip),
    FUNC_14(VAR_6->vflip));

 FUNC_7(VAR_5, 0x1007, 0x20);
 FUNC_7(VAR_5, 0x1061, 0x03);


 if (VAR_7 & VAR_2) {
  VAR_6->pktsz = VAR_6->npkt = 0;
  VAR_6->nchg = 0;
 }

 return VAR_5->usb_err;
}
