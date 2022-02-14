
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,char*) ;
 int FUNC_1 (struct gspca_dev*,int,int const*,int) ;
 int FUNC_2 (struct gspca_dev*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_1,
   const u8 *VAR_2,
   const u8 *VAR_3, unsigned int VAR_4)
{
 int VAR_5, VAR_6;

 for (;;) {
  VAR_5 = *VAR_2++;
  VAR_6 = *VAR_2++;
  switch (VAR_6) {
  case 129:
   return;
  case 128:
   FUNC_2(VAR_1, VAR_3, VAR_4);
   break;
  default:
   if (VAR_6 > VAR_0) {
    FUNC_0(VAR_1, "Incorrect variable sequence\n");
    return;
   }
   while (VAR_6 > 0) {
    if (VAR_6 < 8) {
     FUNC_1(VAR_1,
      VAR_5, VAR_2, VAR_6);
     VAR_2 += VAR_6;
     break;
    }
    FUNC_1(VAR_1, VAR_5, VAR_2, 8);
    VAR_2 += 8;
    VAR_5 += 8;
    VAR_6 -= 8;
   }
  }
 }

}
