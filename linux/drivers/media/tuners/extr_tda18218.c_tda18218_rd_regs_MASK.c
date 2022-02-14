
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct tda18218_priv {TYPE_2__* i2c; TYPE_1__* cfg; } ;
struct i2c_msg {int len; char* buf; int flags; int addr; } ;
typedef int buf ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int i2c_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ,int,size_t,...) ;
 int FUNC_1 (TYPE_2__*,struct i2c_msg*,int) ;
 int FUNC_2 (size_t*,size_t*,size_t) ;

__attribute__((used)) static int FUNC_3(struct tda18218_priv *VAR_5, u8 VAR_6, u8 *VAR_7, u8 VAR_8)
{
 int VAR_9;
 u8 VAR_10[VAR_4];
 struct i2c_msg VAR_11[2] = {
  {
   .addr = VAR_5->cfg->i2c_address,
   .flags = 0,
   .len = 1,
   .buf = "\x00",
  }, {
   .addr = VAR_5->cfg->i2c_address,
   .flags = VAR_2,
   .len = VAR_6 + VAR_8,
   .buf = VAR_10,
  }
 };

 if (VAR_6 + VAR_8 > sizeof(VAR_10)) {
  FUNC_0(&VAR_5->i2c->dev,
    "%s: i2c wr reg=%04x: len=%d is too big!\n",
    VAR_3, VAR_6, VAR_8);
  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_5->i2c, VAR_11, 2);
 if (VAR_9 == 2) {
  FUNC_2(VAR_7, &VAR_10[VAR_6], VAR_8);
  VAR_9 = 0;
 } else {
  FUNC_0(&VAR_5->i2c->dev, "%s: i2c rd failed=%d reg=%02x " "len=%d\n", VAR_3, VAR_9, VAR_6, VAR_8);

  VAR_9 = -VAR_1;
 }

 return VAR_9;
}
