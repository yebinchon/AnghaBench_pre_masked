
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int model; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0, s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 switch (VAR_2->model) {
 case 132:
 case 131:
 case 133:

  break;
 case 130:
  FUNC_0(VAR_0, 0x0024, VAR_1);

  break;
 case 129: {


  if (0) {

   int VAR_3 = 0x05 + VAR_1 * 1000 / 2540;
   FUNC_1(VAR_0, 0x007e, VAR_3);
  }
  break;
 }
 case 128:
  FUNC_2(VAR_0, 0x00aa, 0x012d);
  FUNC_2(VAR_0, 0x001e, 0x012f);
  FUNC_2(VAR_0, 0xd141, 0x0124);
  FUNC_2(VAR_0, 160, 0x0127);
  FUNC_2(VAR_0, 160, 0x012e);
  FUNC_2(VAR_0, 160, 0x0130);
  FUNC_2(VAR_0, 0x8a28, 0x0124);
  FUNC_2(VAR_0, VAR_1, 0x012d);
  FUNC_2(VAR_0, 0xf545, 0x0124);
  break;
 }
 return 0;
}
