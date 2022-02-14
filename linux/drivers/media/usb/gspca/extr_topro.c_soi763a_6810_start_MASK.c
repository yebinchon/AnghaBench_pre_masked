
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; int red; int blue; int sharpness; int gamma; } ;
struct gspca_dev {int alt; int gain; int exposure; scalar_t__ curr_mode; } ;
struct cmd {int const member_0; int member_1; } ;


 int FUNC_0 (struct cmd const*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (struct gspca_dev*,int,struct cmd const*,int) ;
 struct cmd const** VAR_4 ;
 struct cmd const* VAR_5 ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct gspca_dev*,struct cmd const*,int) ;
 int FUNC_4 (struct gspca_dev*,int) ;
 int FUNC_5 (struct gspca_dev*,int ,int ,int ,int ) ;
 int FUNC_6 (struct gspca_dev*,int ) ;
 int FUNC_7 (struct gspca_dev*,int ) ;
 struct cmd const* VAR_6 ;
 struct cmd const* VAR_7 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct gspca_dev *VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_8;
 static const struct cmd VAR_10[] = {
  {128, 0x00},
  {129, 0x04},
  {129, 0x01},
 };
 static const struct cmd VAR_11[] = {
  {135, 0x20},
  {134, 0x9f},
  {133, 0x02},
  {132, 0x13},
  {131, 0xf8},
  {130, 0x01},
 };
 static const struct cmd VAR_12[] = {
  {0x08, 0xff},
  {0x09, 0xff},
  {0x0a, 0x5f},
  {0x0b, 0x80},
 };

 FUNC_2(VAR_8, 0x22, VAR_8->alt);
 FUNC_1(VAR_8, 0x03, VAR_5, sizeof VAR_5);
 FUNC_2(VAR_8, 0x59, 0x40);
 if (VAR_9->sensor == VAR_0)
  FUNC_5(VAR_8, FUNC_8(VAR_8->exposure),
   FUNC_8(VAR_8->gain),
   FUNC_8(VAR_9->blue),
   FUNC_8(VAR_9->red));
 else
  FUNC_5(VAR_8, FUNC_8(VAR_8->exposure),
   FUNC_8(VAR_8->gain), 0, 0);
 FUNC_3(VAR_8, VAR_10, FUNC_0(VAR_10));
 FUNC_3(VAR_8, VAR_7,
   FUNC_0(VAR_7));
 FUNC_3(VAR_8, VAR_11, FUNC_0(VAR_11));
 if (VAR_8->curr_mode) {
  FUNC_2(VAR_8, 0x4a, 0x7f);
  FUNC_2(VAR_8, 0x07, 0x05);
  FUNC_2(VAR_8, VAR_3, 0x00);
 } else {
  FUNC_2(VAR_8, 0x4a, 0xff);
  FUNC_2(VAR_8, 0x07, 0x85);
  FUNC_2(VAR_8, VAR_3, 0x01);
 }
 FUNC_6(VAR_8, FUNC_8(VAR_9->gamma));
 FUNC_3(VAR_8, VAR_6,
   FUNC_0(VAR_6));

 if (VAR_8->curr_mode) {
  FUNC_2(VAR_8, 0x4f, 0x00);
  FUNC_2(VAR_8, 0x4e, 0x7c);
 }

 FUNC_2(VAR_8, 0x00, 0x00);

 FUNC_7(VAR_8, FUNC_8(VAR_9->sharpness));
 FUNC_1(VAR_8, 0x03, VAR_4[VAR_1],
    FUNC_0(VAR_4[0]));
 FUNC_4(VAR_8, 1);
 FUNC_2(VAR_8, VAR_2, 0xf0);
 if (VAR_9->sensor == VAR_0)
  FUNC_5(VAR_8, FUNC_8(VAR_8->exposure),
   FUNC_8(VAR_8->gain),
   FUNC_8(VAR_9->blue),
   FUNC_8(VAR_9->red));
 else
  FUNC_5(VAR_8, FUNC_8(VAR_8->exposure),
   FUNC_8(VAR_8->gain), 0, 0);
 FUNC_3(VAR_8, VAR_12, FUNC_0(VAR_12));
}
