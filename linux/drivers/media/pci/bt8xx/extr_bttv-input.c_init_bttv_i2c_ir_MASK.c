
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct i2c_board_info {char* name; int addr; struct i2c_board_info* platform_data; int ir_codes; int get_key; int type; } ;
struct TYPE_2__ {int type; int i2c_adap; } ;
struct bttv {scalar_t__ i2c_rc; TYPE_1__ c; struct i2c_board_info init_data; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i2c_client* FUNC_0 (int *,struct i2c_board_info*) ;
 struct i2c_client* FUNC_1 (int *,struct i2c_board_info*,unsigned short const*,int *) ;
 int FUNC_2 (struct i2c_board_info*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ) ;

void FUNC_5(struct bttv *VAR_3)
{
 static const unsigned short VAR_4[] = {
  0x1a, 0x18, 0x64, 0x30, 0x71,
  128
 };
 struct i2c_board_info VAR_5;
 struct i2c_client *VAR_6;

 if (0 != VAR_3->i2c_rc)
  return;

 FUNC_2(&VAR_5, 0, sizeof(struct i2c_board_info));
 FUNC_2(&VAR_3->init_data, 0, sizeof(VAR_3->init_data));
 FUNC_4(VAR_5.type, "ir_video", VAR_0);

 switch (VAR_3->c.type) {
 case 129:
  VAR_3->init_data.name = "PV951";
  VAR_3->init_data.get_key = VAR_2;
  VAR_3->init_data.ir_codes = VAR_1;
  VAR_5.addr = 0x4b;
  break;
 }

 if (VAR_3->init_data.name) {
  VAR_5.platform_data = &VAR_3->init_data;
  VAR_6 = FUNC_0(&VAR_3->c.i2c_adap, &VAR_5);
 } else {
  VAR_6 = FUNC_1(&VAR_3->c.i2c_adap, &VAR_5, VAR_4, ((void*)0));
 }
 if (((void*)0) == VAR_6)
  return;




}
