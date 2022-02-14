
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mc44s803_priv {int i2c; TYPE_1__* cfg; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int i2c_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (struct mc44s803_priv*,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct mc44s803_priv *VAR_6, u8 VAR_7, u32 *VAR_8)
{
 u32 VAR_9;
 u8 VAR_10[3];
 int VAR_11;
 struct i2c_msg VAR_12[] = {
  { .addr = VAR_6->cfg->i2c_address, .flags = VAR_1,
    .buf = VAR_10, .len = 3 },
 };

 VAR_9 = FUNC_0(VAR_5, VAR_3) |
        FUNC_0(VAR_7, VAR_4);

 VAR_11 = FUNC_2(VAR_6, VAR_9);
 if (VAR_11)
  return VAR_11;

 if (FUNC_1(VAR_6->i2c, VAR_12, 1) != 1) {
  FUNC_3(VAR_2, "I2C read failed\n");
  return -VAR_0;
 }

 *VAR_8 = (VAR_10[0] << 16) | (VAR_10[1] << 8) | VAR_10[2];

 return 0;
}
