
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tda18218_priv {TYPE_2__* i2c; TYPE_1__* cfg; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
typedef int buf ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int i2c_wr_max; int i2c_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int,int,...) ;
 int FUNC_1 (TYPE_2__*,struct i2c_msg*,int) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct tda18218_priv *VAR_4, u8 VAR_5, u8 *VAR_6, u8 VAR_7)
{
 int VAR_8 = 0, VAR_9, VAR_10;
 u8 VAR_11[VAR_3];
 struct i2c_msg VAR_12[1] = {
  {
   .addr = VAR_4->cfg->i2c_address,
   .flags = 0,
   .buf = VAR_11,
  }
 };

 if (1 + VAR_7 > sizeof(VAR_11)) {
  FUNC_0(&VAR_4->i2c->dev,
    "%s: i2c wr reg=%04x: len=%d is too big!\n",
    VAR_2, VAR_5, VAR_7);
  return -VAR_0;
 }

 for (VAR_10 = VAR_7; VAR_10 > 0;
   VAR_10 -= (VAR_4->cfg->i2c_wr_max - 1)) {
  VAR_9 = VAR_10;
  if (VAR_9 > (VAR_4->cfg->i2c_wr_max - 1))
   VAR_9 = (VAR_4->cfg->i2c_wr_max - 1);

  VAR_12[0].len = 1 + VAR_9;
  VAR_11[0] = VAR_5 + VAR_7 - VAR_10;
  FUNC_2(&VAR_11[1], &VAR_6[VAR_7 - VAR_10], VAR_9);

  VAR_8 = FUNC_1(VAR_4->i2c, VAR_12, 1);
  if (VAR_8 != 1)
   break;
 }

 if (VAR_8 == 1) {
  VAR_8 = 0;
 } else {
  FUNC_0(&VAR_4->i2c->dev, "%s: i2c wr failed=%d reg=%02x " "len=%d\n", VAR_2, VAR_8, VAR_5, VAR_7);

  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
