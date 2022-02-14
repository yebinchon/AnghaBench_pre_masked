
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ bridge; scalar_t__ sensor; } ;
struct gspca_dev {int usb_err; scalar_t__ curr_mode; } ;
struct cmd {int member_0; int member_1; } ;


 int FUNC_0 (struct cmd const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_1 (struct gspca_dev*,int,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (struct gspca_dev*,struct cmd const*,int ) ;
 int FUNC_3 (struct gspca_dev*,int) ;
 int FUNC_4 (struct gspca_dev*,int const,int) ;
 int FUNC_5 (struct gspca_dev*,struct cmd const*,int ) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 static const struct cmd VAR_7[] = {
  {136, 0x81},
  {134, 0x37},
  {135, 0x01},
  {131, 0x00},
  {132, 0x00},
  {130, 0x00},
  {133, 0x00},
  {129, 0x81},
 };
 static const struct cmd VAR_8[] = {
  {0x4d, 0x00},
  {0x4c, 0xff},
  {0x4e, 0xff},
  {0x4f, 0x00},
 };
 static const struct cmd VAR_9[] = {
  {0x10, 0x75},
  {0x76, 0x03},
  {0x00, 0x00},
 };
 static const struct cmd VAR_10[] = {
  {0x7b, 0x90},
  {128, 0x87},
 };

 if (VAR_6->bridge == VAR_0)
  return 0;
 if (VAR_6->sensor == VAR_1) {
  FUNC_4(VAR_5, VAR_2, 0x20);
  FUNC_4(VAR_5, 128, 0x87);
  FUNC_2(VAR_5, VAR_7,
    FUNC_0(VAR_7));
  FUNC_5(VAR_5, VAR_8,
    FUNC_0(VAR_8));
  FUNC_1(VAR_5, 0x03, VAR_4, sizeof VAR_4);
  FUNC_4(VAR_5, 0x59, 0x40);
 } else {
  FUNC_4(VAR_5, VAR_2, 0x21);
  FUNC_2(VAR_5, VAR_9,
    FUNC_0(VAR_9));
  FUNC_3(VAR_5, 0x7b);
  FUNC_5(VAR_5, VAR_10,
    FUNC_0(VAR_10));
 }
 FUNC_4(VAR_5, VAR_3,
   VAR_5->curr_mode ? 0x00 : 0x01);
 return VAR_5->usb_err;
}
