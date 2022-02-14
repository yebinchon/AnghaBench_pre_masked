
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int jpeg_hdr; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {int alt; int usb_err; int iface; int dev; TYPE_1__ pixfmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct gspca_dev*,int) ;
 int FUNC_5 (struct gspca_dev*,int) ;
 int FUNC_6 (struct gspca_dev*,int,int ) ;
 int FUNC_7 (struct gspca_dev*,int) ;
 int FUNC_8 (struct gspca_dev*,int,int) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 int VAR_4, VAR_5;


 FUNC_1(VAR_3->jpeg_hdr, VAR_2->pixfmt.height,
   VAR_2->pixfmt.width,
   0x22);
 FUNC_2(VAR_3->jpeg_hdr, VAR_1);


 FUNC_9(VAR_2->dev, VAR_2->iface, 1);

 FUNC_7(VAR_2, 0x10000000);
 FUNC_7(VAR_2, 0x00000000);
 FUNC_7(VAR_2, 0x8002e001);
 FUNC_7(VAR_2, 0x14000000);
 if (VAR_2->pixfmt.width > 320)
  VAR_5 = 0x8002e001;
 else
  VAR_5 = 0x4001f000;
 FUNC_7(VAR_2, VAR_5);
 VAR_4 = FUNC_9(VAR_2->dev,
     VAR_2->iface,
     VAR_2->alt);
 if (VAR_4 < 0) {
  FUNC_3("set intf %d %d failed\n",
         VAR_2->iface, VAR_2->alt);
  VAR_2->usb_err = VAR_4;
  goto out;
 }
 FUNC_5(VAR_2, 0x0630);
 FUNC_4(VAR_2, 0x000020);
 FUNC_5(VAR_2, 0x0650);
 FUNC_8(VAR_2, 0x000020, 0xffffffff);
 FUNC_6(VAR_2, 0x0620, 0);
 FUNC_6(VAR_2, 0x0630, 0);
 FUNC_6(VAR_2, 0x0640, 0);
 FUNC_6(VAR_2, 0x0650, 0);
 FUNC_6(VAR_2, 0x0660, 0);
 FUNC_7(VAR_2, 0x09800000);
 FUNC_7(VAR_2, 0x0a800000);
 FUNC_7(VAR_2, 0x0b800000);
 FUNC_7(VAR_2, 0x0d030000);


 FUNC_7(VAR_2, 0x01000000);
 FUNC_7(VAR_2, 0x01000000);
 if (VAR_2->usb_err >= 0)
  FUNC_0(VAR_2, VAR_0, "camera started alt: 0x%02x\n",
     VAR_2->alt);
out:
 return VAR_2->usb_err;
}
