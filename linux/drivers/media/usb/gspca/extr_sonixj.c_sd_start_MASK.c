
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sd {size_t sensor; int flags; int reg18; int reg01; int reg17; scalar_t__ short_mark; scalar_t__ nchg; scalar_t__ npkt; scalar_t__ pktsz; int jpeg_hdr; } ;
struct TYPE_5__ {TYPE_1__* cam_mode; } ;
struct TYPE_6__ {int width; int height; } ;
struct gspca_dev {size_t curr_mode; int usb_err; TYPE_2__ cam; scalar_t__ audio; TYPE_3__ pixfmt; } ;
struct TYPE_4__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int** VAR_9 ;
 int** VAR_10 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*,int ) ;
 int FUNC_2 (struct gspca_dev*,int const**) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int** VAR_11 ;
 int FUNC_4 (int) ;
 int** VAR_12 ;
 int * VAR_13 ;
 int** VAR_14 ;
 int** VAR_15 ;
 int** VAR_16 ;
 int** VAR_17 ;
 int** VAR_18 ;
 int** VAR_19 ;
 int const* VAR_20 ;
 int FUNC_5 (struct gspca_dev*,int,int const*,int) ;
 int FUNC_6 (struct gspca_dev*,int,int const) ;
 int const*** VAR_21 ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int** VAR_22 ;
 int** VAR_23 ;
 int** VAR_24 ;

__attribute__((used)) static int FUNC_10(struct gspca_dev *VAR_25)
{
 struct sd *VAR_26 = (struct sd *) VAR_25;
 int VAR_27;
 u8 VAR_28, VAR_29;
 u8 VAR_30[2];
 const u8 *VAR_31;
 const u8 (*VAR_32)[8];
 const u8 *VAR_33;
 int VAR_34;
 static const u8 VAR_35[] =
  {0x00, 0x40, 0x20, 0x00, 0x00, 0x00};
 static const u8 VAR_36[] =
  {0x00, 0x40, 0x38, 0x30, 0x00, 0x20};
 static const u8 VAR_37[] = {0x60, 0x00, 0x00};
 static const u8 VAR_38[] = { 0x2d, 0x2d, 0x3a, 0x05, 0x04, 0x3f };
 static const u8 VAR_39[] = { 0x28, 0xd8, 0x14, 0xec };
 static const u8 VAR_40[] =
    { 0x14, 0xec, 0x0a, 0xf6 };
 static const u8 VAR_41[] =
    { 0x1e, 0xe2, 0x14, 0xec };
 static const u8 VAR_42[] = { 0x32, 0xdd, 0x2d, 0xdd };
 static const u8 VAR_43[] =
    { 0x32, 0xce, 0x2d, 0xd3 };
 static const u8 VAR_44[] =
    { 0x32, 0xdd, 0x32, 0xdd };
 static const u8 VAR_45[] =
    { 0x14, 0xe7, 0x1e, 0xdd };


 FUNC_3(VAR_26->jpeg_hdr, VAR_25->pixfmt.height,
   VAR_25->pixfmt.width,
   0x21);


 VAR_31 = VAR_22[VAR_26->sensor];



 VAR_28 = VAR_31[1];
 if (VAR_26->flags & VAR_1)
  VAR_28 ^= VAR_6;
 FUNC_6(VAR_25, 0x01, VAR_28);


 VAR_30[0] = VAR_28;
 VAR_30[1] = VAR_31[2];
 if (VAR_25->audio)
  VAR_30[1] |= 0x04;
 FUNC_5(VAR_25, 0x01, VAR_30, 2);
 FUNC_5(VAR_25, 0x08, &VAR_31[8], 2);
 FUNC_5(VAR_25, 0x17, &VAR_31[0x17], 5);
 switch (VAR_26->sensor) {
 case 141:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_33 = VAR_36;
  break;
 default:
  VAR_33 = VAR_35;
  break;
 }
 FUNC_5(VAR_25, 0x9a, VAR_33, 6);

 FUNC_5(VAR_25, 0xd4, VAR_37, sizeof VAR_37);

 FUNC_5(VAR_25, 0x03, &VAR_31[3], 0x0f);

 VAR_29 = VAR_31[0x17];
 switch (VAR_26->sensor) {
 case 141:
  FUNC_4(50);
  break;
 case 135:
  FUNC_4(10);
  FUNC_6(VAR_25, 0x02, 0x73);
  VAR_29 |= VAR_4;
  FUNC_6(VAR_25, 0x17, VAR_29);
  FUNC_6(VAR_25, 0x01, 0x22);
  FUNC_4(100);
  VAR_28 = VAR_3 | VAR_6;
  VAR_29 &= ~VAR_2;
  VAR_29 |= 0x04;
  break;
 }
 VAR_28 |= VAR_5;
 FUNC_6(VAR_25, 0x01, VAR_28);
 VAR_29 |= VAR_4;
 FUNC_6(VAR_25, 0x17, VAR_29);
 VAR_28 &= ~VAR_7;
 FUNC_6(VAR_25, 0x01, VAR_28);
 VAR_28 &= ~VAR_3;
 FUNC_6(VAR_25, 0x01, VAR_28);

 switch (VAR_26->sensor) {
 case 140:
  FUNC_0(VAR_25);
  break;
 case 135:
  FUNC_4(10);
  FUNC_6(VAR_25, 0x01, VAR_28);
  FUNC_1(VAR_25, VAR_13[0]);
  FUNC_1(VAR_25, VAR_13[1]);
  FUNC_4(15);
  FUNC_6(VAR_25, 0x02, 0x71);
  FUNC_4(150);
  break;
 case 128:
  FUNC_4(100);
  FUNC_6(VAR_25, 0x02, 0x62);
  break;
 }


 FUNC_2(VAR_25, VAR_21[VAR_26->sensor]);

 FUNC_6(VAR_25, 0x15, VAR_31[0x15]);
 FUNC_6(VAR_25, 0x16, VAR_31[0x16]);
 FUNC_6(VAR_25, 0x12, VAR_31[0x12]);
 FUNC_6(VAR_25, 0x13, VAR_31[0x13]);
 FUNC_6(VAR_25, 0x18, VAR_31[0x18]);
 if (VAR_26->sensor == 142) {
  FUNC_6(VAR_25, 0xd2, 0x3a);
  FUNC_6(VAR_25, 0xd3, 0x30);
 } else {
  FUNC_6(VAR_25, 0xd2, 0x6a);
  FUNC_6(VAR_25, 0xd3, 0x50);
 }
 FUNC_6(VAR_25, 0xc6, 0x00);
 FUNC_6(VAR_25, 0xc7, 0x00);
 if (VAR_26->sensor == 142) {
  FUNC_6(VAR_25, 0xc8, 0x2c);
  FUNC_6(VAR_25, 0xc9, 0x24);
 } else {
  FUNC_6(VAR_25, 0xc8, 0x50);
  FUNC_6(VAR_25, 0xc9, 0x3c);
 }
 FUNC_6(VAR_25, 0x18, VAR_31[0x18]);
 switch (VAR_26->sensor) {
 case 135:

  break;
 default:
  VAR_29 |= VAR_0;
  break;
 }
 FUNC_6(VAR_25, 0x17, VAR_29);

 FUNC_6(VAR_25, 0x05, 0x00);
 FUNC_6(VAR_25, 0x07, 0x00);
 FUNC_6(VAR_25, 0x06, 0x00);
 FUNC_6(VAR_25, 0x14, VAR_31[0x14]);

 FUNC_7(VAR_25);


 for (VAR_27 = 0; VAR_27 < 8; VAR_27++)
  FUNC_5(VAR_25, 0x84, VAR_20, sizeof VAR_20);
 switch (VAR_26->sensor) {
 case 142:
 case 132:
 case 128:
  FUNC_6(VAR_25, 0x9a, 0x05);
  break;
 case 141:
 case 136:
 case 138:
  FUNC_6(VAR_25, 0x9a, 0x07);
  break;
 case 134:
 case 133:
  FUNC_6(VAR_25, 0x9a, 0x0a);
  break;
 case 130:
 case 129:
  FUNC_6(VAR_25, 0x9a, 0x06);
  break;
 default:
  FUNC_6(VAR_25, 0x9a, 0x08);
  break;
 }
 FUNC_9(VAR_25);

 FUNC_5(VAR_25, 0x84, VAR_20, sizeof VAR_20);
 FUNC_6(VAR_25, 0x05, 0x20);
 FUNC_6(VAR_25, 0x07, 0x20);
 FUNC_6(VAR_25, 0x06, 0x20);

 VAR_32 = ((void*)0);
 VAR_34 = VAR_25->cam.cam_mode[VAR_25->curr_mode].priv;
 VAR_28 |= VAR_5 | VAR_8;
 VAR_29 &= ~VAR_2;
 VAR_29 |= 0x02;
 switch (VAR_26->sensor) {
 case 142:
  VAR_32 = VAR_9;
  break;
 case 141:
  VAR_32 = VAR_10;
  break;
 case 140:
 case 139:
  if (!VAR_34)
   VAR_28 &= ~VAR_5;
  VAR_29 &= ~VAR_2;
  VAR_29 |= 0x01;
  break;
 case 138:
  VAR_32 = VAR_11;
  break;
 case 137:
  if (VAR_34) {
   VAR_28 &= ~VAR_5;
   VAR_29 &= ~VAR_2;
   VAR_29 |= 0x01;
  }
  break;
 case 136:
  VAR_32 = VAR_12;
  break;
 case 135:
  VAR_32 = VAR_14;
  if (!VAR_34) {
   VAR_29 &= ~VAR_2;
   VAR_29 |= 0x04;
  } else {
   VAR_28 &= ~VAR_5;
   VAR_29 &= ~VAR_2;
   VAR_29 |= 0x02;
  }
  break;
 case 134:
  VAR_32 = VAR_15;
  break;
 case 133:
  VAR_32 = VAR_16;
  VAR_29 &= ~VAR_2;
  VAR_29 |= 0x01;
  break;
 case 132:
  VAR_32 = VAR_17;
  break;
 case 131:
  VAR_32 = VAR_18;
  break;
 case 130:
  VAR_32 = VAR_19;
  break;
 case 129:
  VAR_32 = VAR_23;
  break;
 case 128:
  VAR_32 = VAR_24;
  break;
 }


 if (VAR_32 != ((void*)0)) {
  FUNC_2(VAR_25, VAR_32);

 }

 FUNC_5(VAR_25, 0xc0, VAR_38, 6);
 switch (VAR_26->sensor) {
 case 142:
 case 141:
 case 129:
  FUNC_5(VAR_25, 0xca, VAR_40, 4);
  break;
 case 130:
  FUNC_5(VAR_25, 0xca, VAR_41, 4);
  break;
 default:
  FUNC_5(VAR_25, 0xca, VAR_39, 4);
  break;
 }
 switch (VAR_26->sensor) {
 case 142:
 case 134:
 case 133:
 case 132:
 case 129:
  FUNC_5(VAR_25, 0xce, VAR_44, 4);
  break;
 case 141:
  FUNC_5(VAR_25, 0xce, VAR_43, 4);
  break;
 case 130:
  FUNC_5(VAR_25, 0xce, VAR_45, 4);
  break;
 default:
  FUNC_5(VAR_25, 0xce, VAR_42, 4);

  break;
 }


 VAR_26->reg18 = VAR_31[0x18] | (VAR_34 << 4) | 0x40;
 FUNC_6(VAR_25, 0x18, VAR_26->reg18);
 FUNC_8(VAR_25);

 FUNC_6(VAR_25, 0x17, VAR_29);
 FUNC_6(VAR_25, 0x01, VAR_28);
 VAR_26->reg01 = VAR_28;
 VAR_26->reg17 = VAR_29;

 VAR_26->pktsz = VAR_26->npkt = 0;
 VAR_26->nchg = VAR_26->short_mark = 0;

 return VAR_25->usb_err;
}
