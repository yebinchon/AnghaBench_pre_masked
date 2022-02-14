
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sd*,int) ;
 int FUNC_2 (struct sd*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sd*,int ) ;

__attribute__((used)) static int FUNC_5(struct sd *VAR_4, u8 VAR_5)
{
 int VAR_6;
 struct gspca_dev *VAR_7 = (struct gspca_dev *)VAR_4;

 FUNC_4(VAR_4, VAR_5);


 FUNC_2(VAR_4, 0x12, 0x80);


 FUNC_3(150);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (FUNC_1(VAR_4, VAR_1) == 0x7f &&
      FUNC_1(VAR_4, VAR_2) == 0xa2) {
   FUNC_0(VAR_7, VAR_0, "I2C synced in %d attempt(s)\n",
      VAR_6);
   return 0;
  }


  FUNC_2(VAR_4, 0x12, 0x80);


  FUNC_3(150);


  if (FUNC_1(VAR_4, 0x00) < 0)
   return -1;
 }
 return -1;
}
