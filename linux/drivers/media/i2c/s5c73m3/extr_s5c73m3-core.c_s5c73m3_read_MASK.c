
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct s5c73m3 {int i2c_read_address; struct i2c_client* i2c_client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,int *) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

int FUNC_2(struct s5c73m3 *VAR_3, u32 VAR_4, u16 *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_3->i2c_client;
 int VAR_7;

 if ((VAR_4 ^ VAR_3->i2c_read_address) & 0xffff0000) {
  VAR_7 = FUNC_1(VAR_6, VAR_1, VAR_4 >> 16);
  if (VAR_7 < 0) {
   VAR_3->i2c_read_address = 0;
   return VAR_7;
  }
 }

 if ((VAR_4 ^ VAR_3->i2c_read_address) & 0xffff) {
  VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_4 & 0xffff);
  if (VAR_7 < 0) {
   VAR_3->i2c_read_address = 0;
   return VAR_7;
  }
 }

 VAR_3->i2c_read_address = VAR_4;

 VAR_7 = FUNC_0(VAR_6, VAR_0, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_3->i2c_read_address += 2;

 return VAR_7;
}
