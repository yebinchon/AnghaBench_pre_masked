
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
struct cmd {int member_0; int member_1; } ;


 int FUNC_0 (struct cmd const*) ;
 int VAR_0 ;





 struct cmd const* VAR_1 ;
 int FUNC_1 (struct gspca_dev*,struct cmd const*,int ) ;
 int FUNC_2 (struct gspca_dev*,int ,int) ;
 int FUNC_3 (struct gspca_dev*,struct cmd const*,int ) ;
 struct cmd const* VAR_2 ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_3)
{
 static const struct cmd VAR_4[] = {
  {130, 0x2f},
  {0x25, 0x02},
  {131, 0x00},
  {129, 0x80},
  {130, 0x2f},
  {132, 0xe1},
  {132, 0xc1},
  {132, 0xe1},
  {133, 0x00},
 };
 static const struct cmd VAR_5[] = {
  {128, 0x48},
  {133, 0x00},
 };
 static const struct cmd VAR_6[] = {
  {147, 0x07},
  {160, 0x58},
  {153, 0x28},
  {143, 0x28},
  {145, 0x50},
  {146, 0x03},
  {141, 0xff},
  {142, 0x07},
  {151, 0xff},
  {152, 0x07},
  {139, 0x5c},
  {140, 0x01},
  {157, 0xfc},
  {158, 0x03},
  {155, 0x00},
  {156, 0x00},
  {136, 0x40},
  {154, 0x01},
  {159, 0x00},
  {136, 0x02},
  {150, 0x05},
  {163, 0x00},
  {162, 0x00},
  {148, 0x01},
  {134, 0x0b},
  {144, 0x0b},
  {149, 0x07},
  {137, 0x40},
  {138, 0x02},

  {161, 0x81},
  {135, 0x01},
 };

 FUNC_3(VAR_3, VAR_4, FUNC_0(VAR_4));
 FUNC_3(VAR_3, VAR_2,
   FUNC_0(VAR_2));
 FUNC_3(VAR_3, VAR_5, FUNC_0(VAR_5));

 FUNC_2(VAR_3, VAR_0, 0x20);
 FUNC_1(VAR_3, VAR_6, FUNC_0(VAR_6));
 FUNC_1(VAR_3, VAR_1, FUNC_0(VAR_1));
}
