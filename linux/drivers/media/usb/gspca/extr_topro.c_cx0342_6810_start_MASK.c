
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int sharpness; int gamma; } ;
struct gspca_dev {int alt; scalar_t__ curr_mode; } ;
struct cmd {int member_0; int member_1; } ;


 int FUNC_0 (struct cmd const*) ;
 size_t VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (struct gspca_dev*,int,struct cmd const*,int ) ;
 struct cmd const** VAR_3 ;
 int FUNC_2 (struct gspca_dev*,struct cmd const*,int ) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;
 int FUNC_4 (struct gspca_dev*,struct cmd const*,int ) ;
 int FUNC_5 (struct gspca_dev*,int) ;
 int FUNC_6 (struct gspca_dev*,int ) ;
 int FUNC_7 (struct gspca_dev*,int ) ;
 struct cmd const* VAR_4 ;
 struct cmd const* VAR_5 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;
 static const struct cmd VAR_8[] = {
  {148, 0x6f},
  {149, 0x02},
  {141, 0x00},
  {142, 0x00},
  {140, 0x00},
  {143, 0x00},
  {137, 0x81},
 };
 static const struct cmd VAR_9[] = {
  {0x4d, 0x00},
  {0x4c, 0xff},
  {0x4e, 0xff},
  {0x4f, 0x00},
  {128, 0x00},
  {129, 0x04},
  {129, 0x01},
 };
 static const struct cmd VAR_10[] = {
  {135, 0x08},
  {134, 0x87},
  {133, 0x02},
  {132, 0x0e},
  {131, 0xf4},
  {130, 0x01},
 };
 static const struct cmd VAR_11[] = {
  {150, 0x81},
  {148, 0x6f},
  {149, 0x02},
  {141, 0x00},
  {142, 0x00},
  {140, 0x00},
  {143, 0x00},
  {137, 0x81},
 };
 static const struct cmd VAR_12[] = {
  {0x4d, 0x00},
  {0x4c, 0xff},
  {0x4e, 0xff},
  {0x4f, 0x00},
 };
 static const struct cmd VAR_13[] = {
  {148, 0xd3},
  {149, 0x01},

  {141, 0x40},
  {142, 0x40},
  {140, 0x40},
  {143, 0x40},
  {137, 0x81},
 };
 static const struct cmd VAR_14[] = {
  {147, 0x05},
  {152, 0x00},
  {151, 0x00},
  {145, 0x01},
  {136, 0x0b},
  {144, 0x0b},
  {146, 0x07},
  {138, 0x40},
  {139, 0x02},
  {150, 0x81},
 };

 FUNC_3(VAR_6, 0x22, VAR_6->alt);
 FUNC_2(VAR_6, VAR_8, FUNC_0(VAR_8));
 FUNC_4(VAR_6, VAR_9, FUNC_0(VAR_9));
 FUNC_4(VAR_6, VAR_5,
   FUNC_0(VAR_5));
 FUNC_4(VAR_6, VAR_10, FUNC_0(VAR_10));
 if (VAR_6->curr_mode) {
  FUNC_3(VAR_6, 0x4a, 0x7f);
  FUNC_3(VAR_6, 0x07, 0x05);
  FUNC_3(VAR_6, VAR_2, 0x00);
 } else {
  FUNC_3(VAR_6, 0x4a, 0xff);
  FUNC_3(VAR_6, 0x07, 0x85);
  FUNC_3(VAR_6, VAR_2, 0x01);
 }
 FUNC_6(VAR_6, FUNC_8(VAR_7->gamma));
 FUNC_4(VAR_6, VAR_4,
   FUNC_0(VAR_4));
 FUNC_7(VAR_6, FUNC_8(VAR_7->sharpness));
 FUNC_1(VAR_6, 0x03, VAR_3[VAR_0],
    FUNC_0(VAR_3[0]));
 FUNC_3(VAR_6, VAR_1, 0x87);
 FUNC_2(VAR_6, VAR_11, FUNC_0(VAR_11));
 FUNC_4(VAR_6, VAR_12, FUNC_0(VAR_12));
 FUNC_2(VAR_6, VAR_13, FUNC_0(VAR_13));
 FUNC_4(VAR_6, VAR_12, FUNC_0(VAR_12));
 FUNC_2(VAR_6, VAR_14, FUNC_0(VAR_14));

 FUNC_5(VAR_6, 1);

}
