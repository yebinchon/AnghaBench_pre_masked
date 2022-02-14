
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct saa7134_dev {int name; int i2c_adap; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct saa7134_dev *VAR_1)
{
 u8 VAR_2 = 0x7, VAR_3;
 u8 VAR_4[2];
 int VAR_5;
 struct i2c_msg VAR_6[] = { {.addr = 0x08, .flags = 0,
        .buf = &VAR_2, .len = 1},
       {.addr = 0x08,
        .flags = VAR_0,
        .buf = &VAR_3, .len = 1}
     };
 struct i2c_msg VAR_7[] = { {.addr = 0x08, .flags = 0,
        .buf = VAR_4, .len = 2} };

 VAR_5 = FUNC_0(&VAR_1->i2c_adap, VAR_6, 2);
 if ((VAR_5 == 2) && (VAR_3 & 0x2)) {
  FUNC_1("%s: DVB-T demod i2c gate was left open\n",
    VAR_1->name);

  VAR_4[0] = VAR_2;
  VAR_4[1] = (VAR_3 & ~0x2);
  if (FUNC_0(&VAR_1->i2c_adap, VAR_7, 1) != 1)
   FUNC_2("%s: EEPROM i2c gate close failure\n",
          VAR_1->name);
 }
}
