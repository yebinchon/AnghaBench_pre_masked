
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tveeprom {int model; } ;
struct i2c_client {int addr; int * adapter; int name; } ;
struct cx18 {TYPE_1__* card; int * i2c_adap; } ;
typedef int eedata ;
struct TYPE_2__ {int type; } ;







 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cx18*,int *,int) ;
 int FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (int,int ) ;
 int FUNC_4 (struct tveeprom*,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct tveeprom*,int *) ;
 scalar_t__ FUNC_7 (struct i2c_client*,int *,int) ;

void FUNC_8(struct cx18 *VAR_1, struct tveeprom *VAR_2)
{
 struct i2c_client *VAR_3;
 u8 VAR_4[256];

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 FUNC_5(VAR_3->name, "cx18 tveeprom tmp", sizeof(VAR_3->name));
 VAR_3->adapter = &VAR_1->i2c_adap[0];
 VAR_3->addr = 0xa0 >> 1;

 if (FUNC_7(VAR_3, VAR_4, sizeof(VAR_4)))
  goto ret;

 switch (VAR_1->card->type) {
 case 131:
 case 129:
 case 130:
  FUNC_6(VAR_2, VAR_4);
  break;
 case 128:
 case 132:
  VAR_2->model = 0x718;
  FUNC_1(VAR_1, VAR_4, sizeof(VAR_4));
  FUNC_0("eeprom PCI ID: %02x%02x:%02x%02x\n",
     VAR_4[2], VAR_4[1], VAR_4[4], VAR_4[3]);
  break;
 default:
  VAR_2->model = 0xffffffff;
  FUNC_1(VAR_1, VAR_4, sizeof(VAR_4));
  break;
 }

ret:
 FUNC_2(VAR_3);
}
