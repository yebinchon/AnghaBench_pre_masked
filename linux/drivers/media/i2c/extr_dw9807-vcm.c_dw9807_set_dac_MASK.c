
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int tx_data ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int VAR_4 ;
 int FUNC_2 (struct i2c_client*,char const*,int) ;
 int FUNC_3 (int ,struct i2c_client*,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_5, u16 VAR_6)
{
 const char VAR_7[3] = {
  VAR_1, ((VAR_6 >> 8) & 0x03), (VAR_6 & 0xff)
 };
 int VAR_8, VAR_9;






 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_8, VAR_8 <= 0,
   VAR_0, VAR_3 * VAR_0);

 if (VAR_9 || VAR_8 < 0) {
  if (VAR_9) {
   FUNC_1(&VAR_5->dev,
    "Cannot do the write operation because VCM is busy\n");
  }

  return VAR_9 ? -VAR_2 : VAR_8;
 }


 VAR_9 = FUNC_2(VAR_5, VAR_7, sizeof(VAR_7));
 if (VAR_9 < 0) {
  FUNC_0(&VAR_5->dev,
   "I2C write MSB fail ret=%d\n", VAR_9);

  return VAR_9;
 }

 return 0;
}
