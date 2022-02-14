
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; int red; int blue; } ;
struct gspca_dev {int gain; int exposure; } ;
struct cmd {int member_1; int const member_0; } ;


 int FUNC_0 (struct cmd const*) ;
 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 struct cmd const* VAR_2 ;
 int FUNC_1 (struct gspca_dev*,int const,int) ;
 int FUNC_2 (struct gspca_dev*,struct cmd const*,int ) ;
 int FUNC_3 (struct gspca_dev*,int const,int) ;
 int FUNC_4 (struct gspca_dev*,struct cmd const*,int ) ;
 int FUNC_5 (struct gspca_dev*,int) ;
 int FUNC_6 (struct gspca_dev*) ;
 int FUNC_7 (struct gspca_dev*,int ,int ,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 static const struct cmd VAR_5[] = {

  {153, 0x9f},
  {154, 0x40},
  {156, 0x00},
  {135, 0x00},
  {134, 0x00},
  {133, 0xff},
  {132, 0x03},
  {131, 0x07},
  {130, 0x40},
  {128, 0x40},
  {151, 0x17},
  {150, 0x18},
  {143, 0x00},
  {142, 0x00},
  {141, 0x00},
  {140, 0x00},
  {139, 0x00},
  {138, 0x00},
  {137, 0x00},
  {136, 0x00},
  {152, 0x03},

  {149, 0x0b},
  {148, 0x8a},
  {147, 0x02},
  {146, 0x0e},
  {145, 0xf4},
  {144, 0x01},
  {129, 0x00},
  {155, 0x20},
 };
 static const struct cmd VAR_6[] = {
  {169, 0x07},
  {182, 0x58},
  {175, 0x16},
  {165, 0x16},
  {167, 0xc0},
  {168, 0x03},
  {163, 0xff},
  {164, 0x07},
  {173, 0xff},
  {174, 0x07},
  {161, 0x5c},
  {162, 0x01},
  {179, 0xfc},
  {180, 0x03},
  {177, 0x00},
  {178, 0x00},
  {158, 0x40},
  {176, 0x01},
  {181, 0x00},
  {158, 0x02},
  {172, 0x05},
  {184, 0x00},
  {183, 0x00},
  {170, 0x01},
  {157, 0x0b},
  {166, 0x0b},
  {171, 0x07},
  {159, 0x40},
  {160, 0x02},
 };

 FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_5));
 FUNC_2(VAR_3, VAR_6, FUNC_0(VAR_6));
 FUNC_2(VAR_3, VAR_2, FUNC_0(VAR_2));
 FUNC_3(VAR_3, 130, 0x10);
 FUNC_3(VAR_3, 131, 0x00);
 FUNC_1(VAR_3, VAR_0, 0x00);
 FUNC_1(VAR_3, 158, 0x01);
 if (VAR_4->sensor == VAR_1)
  FUNC_7(VAR_3, FUNC_8(VAR_3->exposure),
   FUNC_8(VAR_3->gain),
   FUNC_8(VAR_4->blue),
   FUNC_8(VAR_4->red));
 else
  FUNC_7(VAR_3, FUNC_8(VAR_3->exposure),
   FUNC_8(VAR_3->gain), 0, 0);
 FUNC_5(VAR_3, 1);
 FUNC_6(VAR_3);
}
