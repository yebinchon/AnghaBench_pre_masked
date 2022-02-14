
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int revision; int bridge; } ;
struct ov_regvals {int const member_0; int member_1; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct ov_regvals const*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*,int ) ;
 int FUNC_4 (struct sd*,int,int) ;
 int FUNC_5 (struct sd*,int ,int,int) ;
 int FUNC_6 (struct sd*,struct ov_regvals const*,int ) ;

__attribute__((used)) static void FUNC_7(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;


 static const struct ov_regvals VAR_5[] = {
  { 129, 0x40 },
  { 130, 0xe1 },
  { 129, 0x3e },
  { 130, 0xe1 },
  { 129, 0x00 },
  { 130, 0xe1 },
  { 0x46, 0x00 },
  { 0x5d, 0x03 },
 };

 static const struct ov_regvals VAR_6[] = {
  { 128, 0x02 },
  { 128, 0x01 },
  { 0x31, 0x0f },
  { 0x5d, 0x03 },
  { 0x24, 0x9f },
  { 0x25, 0x90 },
  { 0x20, 0x00 },
  { 0x51, 0x04 },
  { 0x71, 0x19 },
  { 0x2f, 0x80 },
 };

 static const struct ov_regvals VAR_7[] = {
  { 128, 0x02 },
  { 128, 0x01 },
  { 0x31, 0x0f },
  { 0x5d, 0x03 },
  { 0x24, 0x9f },
  { 0x25, 0x90 },
  { 0x20, 0x60 },
  { 0x51, 0x02 },
  { 0x71, 0x19 },
  { 0x40, 0xff },
  { 0x41, 0x42 },
  { 0x46, 0x00 },
  { 0x33, 0x04 },
  { 0x21, 0x19 },
  { 0x3f, 0x10 },
  { 0x2f, 0x80 },
 };


 VAR_4->revision = FUNC_3(VAR_4, VAR_2) & 0x1f;
 FUNC_1(VAR_3, VAR_0, "Device revision %d\n", VAR_4->revision);

 FUNC_6(VAR_4, VAR_5, FUNC_0(VAR_5));


 FUNC_5(VAR_4, VAR_1, 0x00, 0x02);

 switch (VAR_4->bridge) {
 case 132:
  FUNC_6(VAR_4, VAR_6, FUNC_0(VAR_6));
  break;
 case 131:
  FUNC_6(VAR_4, VAR_7, FUNC_0(VAR_7));
  break;
 }

 FUNC_2(VAR_4);

 FUNC_4(VAR_4, 0x2f, 0x80);
}
