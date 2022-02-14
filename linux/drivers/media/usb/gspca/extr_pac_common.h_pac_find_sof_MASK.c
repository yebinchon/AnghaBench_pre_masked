
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int) ;

__attribute__((used)) static unsigned char *FUNC_1(struct gspca_dev *VAR_1, u8 *VAR_2,
     unsigned char *VAR_3, int VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  switch (*VAR_2) {
  case 0:
   if (VAR_3[VAR_5] == 0xff)
    *VAR_2 = 1;
   break;
  case 1:
   if (VAR_3[VAR_5] == 0xff)
    *VAR_2 = 2;
   else
    *VAR_2 = 0;
   break;
  case 2:
   switch (VAR_3[VAR_5]) {
   case 0x00:
    *VAR_2 = 3;
    break;
   case 0xff:

    break;
   default:
    *VAR_2 = 0;
   }
   break;
  case 3:
   if (VAR_3[VAR_5] == 0xff)
    *VAR_2 = 4;
   else
    *VAR_2 = 0;
   break;
  case 4:
   switch (VAR_3[VAR_5]) {
   case 0x96:

    FUNC_0(VAR_1, VAR_0,
       "SOF found, bytes to analyze: %u - Frame starts at byte #%u\n",
       VAR_4, VAR_5 + 1);
    *VAR_2 = 0;
    return VAR_3 + VAR_5 + 1;
    break;
   case 0xff:
    *VAR_2 = 2;
    break;
   default:
    *VAR_2 = 0;
   }
   break;
  default:
   *VAR_2 = 0;
  }
 }

 return ((void*)0);
}
