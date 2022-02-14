
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int model; } ;
struct gspca_dev {int dummy; } ;
typedef size_t s32 ;
 int FUNC_0 (struct gspca_dev*,int,unsigned short const) ;
 int VAR_0 ;
 int FUNC_1 (struct gspca_dev*,int,unsigned short) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 switch (VAR_3->model) {
 case 132:
 case 130:
 case 128:
 case 133:

  break;
 case 131: {
  int VAR_4;
  static const unsigned short VAR_5[] = {
   0x11, 0x13, 0x16, 0x18, 0x1a, 0x8, 0x0a };

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_0(VAR_1, 0x0013, VAR_5[VAR_2]);
  break;
 }
 case 129:
 {




  static const struct {
   unsigned short sv1;
   unsigned short sv2;
   unsigned short sv3;
   unsigned short sv4;
  } VAR_6[7] = {
   { 0x00, 0x00, 0x05, 0x14 },
   { 0x01, 0x04, 0x05, 0x14 },
   { 0x02, 0x04, 0x05, 0x14 },
   { 0x03, 0x04, 0x05, 0x14 },
   { 0x03, 0x05, 0x05, 0x14 },
   { 0x03, 0x06, 0x05, 0x14 },
   { 0x03, 0x07, 0x05, 0x14 }
  };
  FUNC_1(VAR_1, 0x0060, VAR_6[VAR_2].sv1);
  FUNC_1(VAR_1, 0x0061, VAR_6[VAR_2].sv2);
  FUNC_1(VAR_1, 0x0062, VAR_6[VAR_2].sv3);
  FUNC_1(VAR_1, 0x0063, VAR_6[VAR_2].sv4);
  break;
 }
 }
 return 0;
}
