
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct s5k5baf {int error; int sd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int*,int) ;
 int FUNC_1 (int,int ,struct i2c_client*,char*,int,int) ;
 int FUNC_2 (struct i2c_client*,char*,int) ;
 struct i2c_client* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct s5k5baf *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u8 VAR_4[4] = { VAR_2 >> 8, VAR_2 & 0xFF, VAR_3 >> 8, VAR_3 & 0xFF };
 struct i2c_client *VAR_5 = FUNC_3(&VAR_1->sd);
 int VAR_6;

 if (VAR_1->error)
  return;

 VAR_6 = FUNC_0(VAR_5, VAR_4, 4);
 FUNC_1(3, VAR_0, VAR_5, "i2c_write: 0x%04x : 0x%04x\n", VAR_2, VAR_3);

 if (VAR_6 != 4) {
  FUNC_2(VAR_5, "i2c_write: error during transfer (%d)\n", VAR_6);
  VAR_1->error = VAR_6;
 }
}
