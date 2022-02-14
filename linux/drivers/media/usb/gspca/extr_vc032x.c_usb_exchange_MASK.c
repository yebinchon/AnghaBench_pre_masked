
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int const,int const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gspca_dev*,int,int const,int const) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_0,
   const u8 VAR_1[][4])
{
 int VAR_2 = 0;

 for (;;) {
  switch (VAR_1[VAR_2][3]) {
  default:
   return;
  case 0xcc:
   FUNC_2(VAR_0, 0xa0, VAR_1[VAR_2][2],
     (VAR_1[VAR_2][0]) << 8 | VAR_1[VAR_2][1]);
   break;
  case 0xaa:
   FUNC_0(VAR_0, VAR_1[VAR_2][1], &VAR_1[VAR_2][2], 1);
   break;
  case 0xbb:
   FUNC_0(VAR_0, VAR_1[VAR_2][0], &VAR_1[VAR_2][1], 2);
   break;
  case 0xdd:
   FUNC_1(VAR_1[VAR_2][1] * 256 + VAR_1[VAR_2][2] + 10);
   break;
  }
  VAR_2++;
 }

}
