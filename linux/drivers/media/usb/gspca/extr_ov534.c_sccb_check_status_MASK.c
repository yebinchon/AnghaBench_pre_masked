
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,char*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  FUNC_2(10000, 20000);
  VAR_2 = FUNC_1(VAR_1, VAR_0);

  switch (VAR_2) {
  case 0x00:
   return 1;
  case 0x04:
   return 0;
  case 0x03:
   break;
  default:
   FUNC_0(VAR_1, "sccb status 0x%02x, attempt %d/5\n",
      VAR_2, VAR_3 + 1);
  }
 }
 return 0;
}
