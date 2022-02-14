
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {int illum_bottom; int illum_top; int sharpness; int brightness; int saturation; int gamma; int jpeg_hdr; } ;
struct TYPE_2__ {int height; int width; } ;
struct gspca_dev {int* usb_buf; int usb_err; TYPE_1__ pixfmt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_2 (struct gspca_dev*,int,int ) ;
 int FUNC_3 (struct gspca_dev*,int) ;
 int FUNC_4 (struct gspca_dev*,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 u8 *VAR_4;
 int VAR_5;


 FUNC_0(VAR_3->jpeg_hdr, VAR_2->pixfmt.height,
   VAR_2->pixfmt.width,
   0x21);
 FUNC_1(VAR_3->jpeg_hdr, VAR_0);

 VAR_4 = VAR_2->usb_buf;

 VAR_4[0] = 0x01;
 VAR_4[1] = 0x01;
 FUNC_3(VAR_2, 2);




 VAR_4[0] = 0x00;
 VAR_4[1] = 0x0c | 0x01;
 VAR_4[2] = 0x01;
 VAR_4[3] = VAR_2->pixfmt.width / 8;
 VAR_4[4] = VAR_2->pixfmt.height / 8;
 VAR_4[5] = 0x30;

 VAR_4[6] = 0x02;
 VAR_4[7] = FUNC_5(VAR_3->gamma) * 0x40;
 VAR_4[8] = 0x01;



 VAR_4[9] = 0x52;

 VAR_4[10] = 0x18;

 FUNC_3(VAR_2, 11);

 VAR_4[0] = 0x23;
 VAR_4[1] = 0x09;

 FUNC_3(VAR_2, 2);

 VAR_4[0] = 0x3c;




 VAR_4[1] = 50;

 FUNC_3(VAR_2, 2);


 VAR_4[0] = 0x5e;
 VAR_4[1] = 0;




 VAR_4[2] = FUNC_5(VAR_3->saturation) << 3;
 VAR_4[3] = ((FUNC_5(VAR_3->saturation) >> 2) & 0xf8) | 0x04;
 VAR_4[4] = FUNC_5(VAR_3->brightness);
 VAR_4[5] = 0x00;

 FUNC_3(VAR_2, 6);

 VAR_4[0] = 0x67;

 VAR_4[1] = FUNC_5(VAR_3->sharpness) * 4 + 3;
 VAR_4[2] = 0x14;
 FUNC_3(VAR_2, 3);

 VAR_4[0] = 0x69;
 VAR_4[1] = 0x2f;
 VAR_4[2] = 0x28;
 VAR_4[3] = 0x42;
 FUNC_3(VAR_2, 4);

 VAR_4[0] = 0x63;
 VAR_4[1] = 0x07;
 FUNC_3(VAR_2, 2);



 for (VAR_5 = 0; VAR_5 < sizeof VAR_1; VAR_5++)
  FUNC_2(VAR_2, VAR_5 + 1, VAR_1[VAR_5]);

 VAR_4[0] = 0x00;
 VAR_4[1] = 0x4d;
 FUNC_3(VAR_2, 2);

 FUNC_4(VAR_2, FUNC_5(VAR_3->illum_top),
       FUNC_5(VAR_3->illum_bottom));

 return VAR_2->usb_err;
}
