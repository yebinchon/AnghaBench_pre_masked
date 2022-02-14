
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int quality; int jpeg_hdr; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {int usb_err; TYPE_1__ pixfmt; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;


 FUNC_2(VAR_2->jpeg_hdr, VAR_1->pixfmt.height,
   VAR_1->pixfmt.width,
   0x21);
 FUNC_3(VAR_2->jpeg_hdr, VAR_2->quality);
 FUNC_0(VAR_1, VAR_0, "Start streaming at %dx%d\n",
    VAR_1->pixfmt.height, VAR_1->pixfmt.width);
 FUNC_1(VAR_1);
 return VAR_1->usb_err;
}
