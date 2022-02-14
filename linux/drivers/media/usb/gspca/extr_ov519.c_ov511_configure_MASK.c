
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int bridge; } ;
struct ov_regvals {int const member_0; int member_1; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct ov_regvals const*) ;


 int VAR_0 ;




 int VAR_1 ;



 int FUNC_1 (struct gspca_dev*,int ,char*,int ) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*,int ) ;
 int FUNC_4 (struct sd*,struct ov_regvals const*,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;


 static const struct ov_regvals VAR_4[] = {
  { 129, 0x7f },
  { 130, 0x01 },
  { 129, 0x7f },
  { 130, 0x01 },
  { 129, 0x3f },
  { 130, 0x01 },
  { 129, 0x3d },
 };

 static const struct ov_regvals VAR_5[] = {
  { 132, 0x01 },
  { 128, 0x00 },
  { 128, 0x02 },
  { 128, 0x00 },
  { 131, 0x1f },
  { 134, 0x00 },
  { 133, 0x03 },
 };

 static const struct ov_regvals VAR_6[] = {
  { 132, 0xff },
  { 128, 0x00 },
  { 128, 0x02 },
  { 128, 0x00 },
  { 131, 0xff },
  { 134, 0x00 },
  { 133, 0x03 },
 };

 static const struct ov_regvals VAR_7[] = {
  { 0x70, 0x1f },
  { 0x71, 0x05 },
  { 0x72, 0x06 },
  { 0x73, 0x06 },
  { 0x74, 0x14 },
  { 0x75, 0x03 },
  { 0x76, 0x04 },
  { 0x77, 0x04 },
 };

 FUNC_1(VAR_2, VAR_0, "Device custom id %x\n",
    FUNC_3(VAR_3, VAR_1));

 FUNC_4(VAR_3, VAR_4, FUNC_0(VAR_4));

 switch (VAR_3->bridge) {
 case 136:
  FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_5));
  break;
 case 135:
  FUNC_4(VAR_3, VAR_6, FUNC_0(VAR_6));
  break;
 }


 FUNC_4(VAR_3, VAR_7, FUNC_0(VAR_7));

 FUNC_2(VAR_3);
}
