
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int bridge; int autogain; int subtype; int jpeg_hdr; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {int usb_err; TYPE_1__ pixfmt; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;



 int VAR_3 ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct gspca_dev*,int,int,int ) ;
 int FUNC_5 (struct gspca_dev*,int,int,int) ;
 int FUNC_6 (struct gspca_dev*,int,int,int,int,int) ;
 int VAR_4 ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*) ;
 int FUNC_11 (struct gspca_dev*,int,int,int) ;
 int VAR_5 ;
 int FUNC_12 (struct gspca_dev*) ;
 int FUNC_13 (struct gspca_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;
 int VAR_8;


 FUNC_2(VAR_7->jpeg_hdr, VAR_6->pixfmt.height,
   VAR_6->pixfmt.width,
   0x22);
 FUNC_3(VAR_7->jpeg_hdr, VAR_3);

 if (VAR_7->bridge == VAR_1)
  FUNC_10(VAR_6);
 FUNC_8(VAR_6);
 switch (VAR_7->bridge) {
 default:



  switch (VAR_7->subtype) {
  case 128:
  case 130:
  case 129:
   FUNC_5(VAR_6, 0xf0, 0, 0);
   FUNC_9(VAR_6);
   FUNC_4(VAR_6, 0xf0, 4, 0);
   FUNC_9(VAR_6);
   break;
  default:
   FUNC_5(VAR_6, 0x31, 0x0004, 0x00);
   FUNC_9(VAR_6);
   FUNC_7(VAR_6);
   break;
  }
  break;
 case 132:
  if (VAR_7->subtype == VAR_0) {
   FUNC_12(VAR_6);


   FUNC_6(VAR_6, 0x24,
       8, 3, 0x9e, 1);

   FUNC_6(VAR_6, 0x24,
       8, 3, 0x9e, 0);
   FUNC_6(VAR_6, 0x24,
       0, 0, 0x9d, 1);
  } else {
   FUNC_11(VAR_6, 0x24, 8, 3);
   FUNC_12(VAR_6);
   FUNC_11(VAR_6, 0x24, 8, 3);
   FUNC_11(VAR_6, 0x24, 0, 0);
  }
  FUNC_8(VAR_6);
  FUNC_5(VAR_6, 0x00, 0x270c, 0x05);

  FUNC_5(VAR_6, 0x00, 0x2310, 0x05);
  break;
 case 131:
  if (VAR_7->subtype == VAR_2) {
   FUNC_13(VAR_6,
    VAR_4,
    FUNC_0(VAR_4));
  } else {
   FUNC_13(VAR_6, VAR_5,
    FUNC_0(VAR_5));
  }
  VAR_8 = (VAR_7->autogain ? 0x04 : 0x01);
  FUNC_5(VAR_6, 0x0c, 0x0000, VAR_8);

  FUNC_5(VAR_6, 0xb0, 0x0000, VAR_8);



  FUNC_5(VAR_6, 0x30, 0x0001, 800);
  FUNC_5(VAR_6, 0x30, 0x0002, 1600);
  FUNC_8(VAR_6);
  break;
 }
 FUNC_1(VAR_6);
 return VAR_6->usb_err;
}
