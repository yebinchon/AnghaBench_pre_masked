
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {size_t sensor; int gamma; int jpegqual; int red; int blue; int sharpness; } ;
struct gspca_dev {int gain; int exposure; } ;
struct cmd {int const member_0; int member_1; } ;


 int FUNC_0 (struct cmd const*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int,struct cmd const*,int ) ;
 struct cmd const** VAR_2 ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct gspca_dev*,struct cmd const*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct gspca_dev*,int const,int) ;
 int FUNC_6 (struct gspca_dev*,struct cmd const*,int ) ;
 int FUNC_7 (struct gspca_dev*,int) ;
 int FUNC_8 (struct gspca_dev*,int ,int ,int ,int ) ;
 int FUNC_9 (struct gspca_dev*,int ) ;
 int FUNC_10 (struct gspca_dev*,int ) ;
 int FUNC_11 (struct gspca_dev*,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 static const struct cmd VAR_5[] = {
  {129, 0x04},
  {129, 0x01},
  {158, 0x00},

  {137, 0x00},
  {136, 0x00},
  {135, 0xff},
  {134, 0x03},
  {133, 0x07},
  {132, 0x40},

  {129, 0x03},
  {128, 0x40},

  {154, 0x46},
  {153, 0x10},
  {146, 0x00},
  {145, 0x00},
  {144, 0x00},
  {143, 0x00},
  {142, 0x00},
  {141, 0x00},
  {140, 0x00},
  {139, 0x00},
  {155, 0x03},

  {138, 0x04},
  {131, 0x0e},

  {152, 0x1b},
  {151, 0x9a},
  {150, 0x02},
  {149, 0x0f},
  {148, 0xf4},
  {147, 0x01},
  {130, 0x01},
  {157, 0x21},
  {156, 0x00},
 };
 static const struct cmd VAR_6[] = {
  {0x12, 0x48},
  {0x13, 0xa0},
  {0x03, 0xa4},
  {0x04, 0x30},
  {0x05, 0x88},
  {0x06, 0x60},
  {0x10, 0x41},
  {0x11, 0x40},
  {0x13, 0xa0},
  {0x14, 0x00},
  {0x15, 0x14},
  {0x1f, 0x41},
  {0x20, 0x80},
  {0x23, 0xee},
  {0x24, 0x50},
  {0x25, 0x7a},
  {0x26, 0x00},
  {0x27, 0xe2},
  {0x28, 0xb0},
  {0x2a, 0x00},
  {0x2b, 0x00},
  {0x2d, 0x81},
  {0x2f, 0x9d},
  {0x60, 0x80},
  {0x61, 0x00},
  {0x62, 0x88},
  {0x63, 0x11},
  {0x64, 0x89},
  {0x65, 0x00},
  {0x67, 0x94},
  {0x68, 0x7a},
  {0x69, 0x0f},
  {0x6c, 0x80},
  {0x6d, 0x80},
  {0x6e, 0x80},
  {0x6f, 0xff},
  {0x71, 0x20},
  {0x74, 0x20},
  {0x75, 0x86},
  {0x77, 0xb5},
  {0x17, 0x18},
  {0x18, 0xbf},
  {0x19, 0x03},
  {0x1a, 0xf8},
  {0x01, 0x80},
  {0x02, 0x80},
 };

 FUNC_6(VAR_3, VAR_5, FUNC_0(VAR_5));

 FUNC_2(VAR_3, 0x12, 0x80);
 FUNC_4(10);

 FUNC_3(VAR_3, VAR_6, FUNC_0(VAR_6));

 FUNC_5(VAR_3, 132, 0x10);
 FUNC_5(VAR_3, 133, 0x00);

 FUNC_11(VAR_3, FUNC_12(VAR_4->sharpness));

 FUNC_1(VAR_3, 0x03, VAR_2[VAR_1],
    FUNC_0(VAR_2[0]));

 FUNC_7(VAR_3, 1);
 if (VAR_4->sensor == VAR_0)
  FUNC_8(VAR_3, FUNC_12(VAR_3->exposure),
   FUNC_12(VAR_3->gain),
   FUNC_12(VAR_4->blue),
   FUNC_12(VAR_4->red));
 else
  FUNC_8(VAR_3, FUNC_12(VAR_3->exposure),
   FUNC_12(VAR_3->gain), 0, 0);
 if (VAR_4->sensor == VAR_1)
  FUNC_10(VAR_3, FUNC_12(VAR_4->jpegqual));
 FUNC_9(VAR_3, FUNC_12(VAR_4->gamma));
}
