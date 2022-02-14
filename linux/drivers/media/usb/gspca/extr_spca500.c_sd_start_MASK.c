
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int subtype; int jpeg_hdr; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {int* usb_buf; int curr_mode; TYPE_1__ pixfmt; } ;
typedef int __u8 ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct gspca_dev*,int ,char*,int,...) ;
 int FUNC_1 (struct gspca_dev*,char*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct gspca_dev*,int,int) ;
 int FUNC_6 (struct gspca_dev*,int ,int,int) ;
 int FUNC_7 (struct gspca_dev*,int,int,int) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*,int,int) ;
 int FUNC_11 (struct gspca_dev*) ;
 int VAR_6 ;
 int FUNC_12 (struct gspca_dev*,int,int,int,int ) ;
 int FUNC_13 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_14(struct gspca_dev *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_7;
 int VAR_9;
 __u8 VAR_10;
 __u8 VAR_11, VAR_12;


 FUNC_2(VAR_8->jpeg_hdr, VAR_7->pixfmt.height,
   VAR_7->pixfmt.width,
   0x22);
 FUNC_3(VAR_8->jpeg_hdr, VAR_2);

 if (VAR_8->subtype == 134) {
  VAR_11 = 0x16;
  VAR_12 = 0x12;
 } else {
  VAR_11 = 0x28;
  VAR_12 = 0x1e;
 }


 FUNC_5(VAR_7, 0x8a04, 1);
 FUNC_0(VAR_7, VAR_1, "Spca500 Sensor Address 0x%02x\n",
    VAR_7->usb_buf[0]);
 FUNC_0(VAR_7, VAR_1, "Spca500 curr_mode: %d Xmult: 0x%02x, Ymult: 0x%02x",
    VAR_7->curr_mode, VAR_11, VAR_12);


 switch (VAR_8->subtype) {
 case 134:
   FUNC_10(VAR_7, VAR_11, VAR_12);


  FUNC_7(VAR_7, 0x00, 0x850a, 0x0001);
  FUNC_7(VAR_7, 0x00, 0x8880, 3);
  VAR_9 = FUNC_12(VAR_7,
        0x00, 0x8800, 0x8840,
        VAR_3);
  if (VAR_9 < 0)
   FUNC_1(VAR_7, "spca50x_setup_qtable failed\n");

  FUNC_7(VAR_7, 0x00, 0x870a, 0x04);


  FUNC_7(VAR_7, 0x00, 0x8000, 0x0004);
  FUNC_4(500);
  if (FUNC_6(VAR_7, 0, 0x8000, 0x44) != 0)
   FUNC_1(VAR_7, "reg_r_wait() failed\n");

  FUNC_5(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_7(VAR_7, 0x00, 0x816b, VAR_10);

  FUNC_11(VAR_7);

  FUNC_13(VAR_7, VAR_6);
  FUNC_10(VAR_7, VAR_11, VAR_12);

  VAR_9 = FUNC_7(VAR_7, 0x00, 0x850a, 0x0001);
  if (VAR_9 < 0)
   FUNC_1(VAR_7, "failed to enable drop packet\n");
  FUNC_7(VAR_7, 0x00, 0x8880, 3);
  VAR_9 = FUNC_12(VAR_7,
        0x00, 0x8800, 0x8840,
        VAR_3);
  if (VAR_9 < 0)
   FUNC_1(VAR_7, "spca50x_setup_qtable failed\n");


  FUNC_7(VAR_7, 0x00, 0x870a, 0x04);


  FUNC_7(VAR_7, 0x00, 0x8000, 0x0004);

  if (FUNC_6(VAR_7, 0, 0x8000, 0x44) != 0)
   FUNC_1(VAR_7, "reg_r_wait() failed\n");

  FUNC_5(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_7(VAR_7, 0x00, 0x816b, VAR_10);
  break;
 case 139:
 case 136:




  VAR_9 = FUNC_8(VAR_7);
  if (VAR_9 < 0)
   FUNC_1(VAR_7, "spca500_full_reset failed\n");


  VAR_9 = FUNC_7(VAR_7, 0x00, 0x850a, 0x0001);
  if (VAR_9 < 0)
   FUNC_1(VAR_7, "failed to enable drop packet\n");
  FUNC_7(VAR_7, 0x00, 0x8880, 3);
  VAR_9 = FUNC_12(VAR_7,
        0x00, 0x8800, 0x8840,
        VAR_3);
  if (VAR_9 < 0)
   FUNC_1(VAR_7, "spca50x_setup_qtable failed\n");

  FUNC_10(VAR_7, VAR_11, VAR_12);
  FUNC_7(VAR_7, 0x20, 0x0001, 0x0004);


  FUNC_7(VAR_7, 0x00, 0x8000, 0x0004);

  if (FUNC_6(VAR_7, 0, 0x8000, 0x44) != 0)
   FUNC_1(VAR_7, "reg_r_wait() failed\n");

  FUNC_5(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_7(VAR_7, 0x00, 0x816b, VAR_10);


  break;
 case 135:


  VAR_9 = FUNC_8(VAR_7);
  if (VAR_9 < 0)
   FUNC_1(VAR_7, "spca500_full_reset failed\n");

  FUNC_7(VAR_7, 0x00, 0x850a, 0x0001);
  FUNC_7(VAR_7, 0x00, 0x8880, 0);
  VAR_9 = FUNC_12(VAR_7,
        0x00, 0x8800, 0x8840,
        VAR_4);
  if (VAR_9 < 0)
   FUNC_1(VAR_7, "spca50x_setup_qtable failed\n");
  FUNC_10(VAR_7, VAR_11, VAR_12);

  FUNC_7(VAR_7, 0x20, 0x0001, 0x0004);


  FUNC_7(VAR_7, 0x00, 0x8000, 0x0004);

  if (FUNC_6(VAR_7, 0, 0x8000, 0x44) != 0)
   FUNC_1(VAR_7, "reg_r_wait() failed\n");

  FUNC_5(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_7(VAR_7, 0x00, 0x816b, VAR_10);


  break;

 case 140:
 case 138:
 case 141:
 case 137:
 case 131:
 case 129:
 case 130:
 case 128:
 case 142:
  FUNC_9(VAR_7);
  FUNC_7(VAR_7, 0x00, 0x0d01, 0x01);

  FUNC_7(VAR_7, 0x00, 0x850a, 0x0001);

  VAR_9 = FUNC_12(VAR_7,
       0x00, 0x8800, 0x8840, VAR_5);
  if (VAR_9 < 0)
   FUNC_1(VAR_7, "spca50x_setup_qtable failed\n");
  FUNC_7(VAR_7, 0x00, 0x8880, 2);


  FUNC_7(VAR_7, 0x00, 0x800a, 0x00);

  FUNC_7(VAR_7, 0x00, 0x820f, 0x01);

  FUNC_7(VAR_7, 0x00, 0x870a, 0x04);

  FUNC_10(VAR_7, VAR_11, VAR_12);

  FUNC_7(VAR_7, 0x00, 0x8000, 0x0004);

  FUNC_6(VAR_7, 0, 0x8000, 0x44);

  FUNC_5(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_7(VAR_7, 0x00, 0x816b, VAR_10);
  break;
 case 132:
 case 133:
  FUNC_7(VAR_7, 0x02, 0x00, 0x00);

  FUNC_7(VAR_7, 0x00, 0x850a, 0x0001);

  VAR_9 = FUNC_12(VAR_7,
     0x00, 0x8800,
     0x8840, VAR_3);
  if (VAR_9 < 0)
   FUNC_1(VAR_7, "spca50x_setup_qtable failed\n");
  FUNC_7(VAR_7, 0x00, 0x8880, 3);
  FUNC_7(VAR_7, 0x00, 0x800a, 0x00);

  FUNC_7(VAR_7, 0x00, 0x870a, 0x04);

  FUNC_10(VAR_7, VAR_11, VAR_12);


  FUNC_7(VAR_7, 0x00, 0x8000, 0x0004);
  FUNC_6(VAR_7, 0, 0x8000, 0x44);

  FUNC_5(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_7(VAR_7, 0x00, 0x816b, VAR_10);
  FUNC_13(VAR_7, VAR_0);
  break;
 }
 return 0;
}
