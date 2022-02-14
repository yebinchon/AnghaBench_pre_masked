
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
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_1 (struct sd*,int ) ;
 int FUNC_2 (struct sd*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sd *VAR_4, u8 VAR_5)
{
 struct gspca_dev *VAR_6 = (struct gspca_dev *)VAR_4;
 int VAR_7, VAR_8, VAR_9;


 for (VAR_9 = 6; ; ) {

  FUNC_2(VAR_4, VAR_3, VAR_5);


  FUNC_2(VAR_4, VAR_1, 0x03);

  do {
   VAR_7 = FUNC_1(VAR_4, VAR_1);
  } while (VAR_7 > 0 && ((VAR_7 & 1) == 0));

  if (VAR_7 < 0)
   return VAR_7;

  if ((VAR_7 & 2) == 0)
   break;


  FUNC_2(VAR_4, VAR_1, 0x10);

  if (--VAR_9 < 0) {
   FUNC_0(VAR_6, VAR_0, "i2c write retries exhausted\n");
   return -1;
  }
 }


 for (VAR_9 = 6; ; ) {

  FUNC_2(VAR_4, VAR_1, 0x05);

  do {
   VAR_7 = FUNC_1(VAR_4, VAR_1);
  } while (VAR_7 > 0 && ((VAR_7 & 1) == 0));

  if (VAR_7 < 0)
   return VAR_7;

  if ((VAR_7 & 2) == 0)
   break;


  FUNC_2(VAR_4, VAR_1, 0x10);

  if (--VAR_9 < 0) {
   FUNC_0(VAR_6, VAR_0, "i2c read retries exhausted\n");
   return -1;
  }
 }

 VAR_8 = FUNC_1(VAR_4, VAR_2);

 FUNC_0(VAR_6, VAR_0, "ov511_i2c_r %02x %02x\n", VAR_5, VAR_8);


 FUNC_2(VAR_4, VAR_1, 0x05);

 return VAR_8;
}
