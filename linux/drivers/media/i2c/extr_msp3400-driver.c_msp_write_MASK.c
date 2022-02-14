
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,int,int ,char*,int,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct i2c_client*,int*,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 u8 VAR_6[5];

 VAR_6[0] = VAR_2;
 VAR_6[1] = VAR_3 >> 8;
 VAR_6[2] = VAR_3 & 0xff;
 VAR_6[3] = VAR_4 >> 8;
 VAR_6[4] = VAR_4 & 0xff;

 FUNC_0(&VAR_1->dev, 3, VAR_0, "msp_write(0x%x, 0x%x, 0x%x)\n",
   VAR_2, VAR_3, VAR_4);
 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  if (FUNC_2(VAR_1, VAR_6, 5) == 5)
   break;
  FUNC_1(&VAR_1->dev, "I/O error #%d (write 0x%02x/0x%02x)\n", VAR_5,
         VAR_2, VAR_3);
  FUNC_5(FUNC_3(10));
 }
 if (VAR_5 == 3) {
  FUNC_1(&VAR_1->dev, "resetting chip, sound will go off.\n");
  FUNC_4(VAR_1);
  return -1;
 }
 return 0;
}
