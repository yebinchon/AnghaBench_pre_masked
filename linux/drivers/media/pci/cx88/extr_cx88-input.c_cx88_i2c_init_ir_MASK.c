
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_board_info {int type; char* name; unsigned short addr; struct i2c_board_info* platform_data; int internal_get_key_func; int ir_codes; int get_key; } ;
struct TYPE_2__ {char* name; } ;
struct cx88_core {scalar_t__ i2c_rc; int boardnr; int i2c_adap; struct i2c_board_info init_data; TYPE_1__ board; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,struct i2c_board_info*) ;
 scalar_t__ FUNC_1 (int *,unsigned short const,int ,int ,int ,int ,int *) ;
 int FUNC_2 (struct i2c_board_info*,int ,int) ;
 int FUNC_3 (int,char*,int ) ;

void FUNC_4(struct cx88_core *VAR_11)
{
 struct i2c_board_info VAR_12;
 static const unsigned short VAR_13[] = {
  0x18, 0x6b, 0x71,
  128
 };
 static const unsigned short VAR_14[] = {
  0x18, 0x1a,
  128
 };
 const unsigned short *VAR_15 = VAR_13;
 const unsigned short *VAR_16;

 if (VAR_11->i2c_rc != 0)
  return;

 FUNC_2(&VAR_12, 0, sizeof(struct i2c_board_info));
 FUNC_3(VAR_12.type, "ir_video", VAR_0);

 switch (VAR_11->boardnr) {
 case 129:
  VAR_15 = VAR_14;
  VAR_11->init_data.name = "cx88 Leadtek PVR 2000 remote";
  VAR_11->init_data.type = VAR_9;
  VAR_11->init_data.get_key = VAR_10;
  VAR_11->init_data.ir_codes = VAR_4;
  break;
 }
 for (VAR_16 = VAR_15; *VAR_16 != 128; VAR_16++) {
  VAR_12.platform_data = ((void*)0);
  FUNC_2(&VAR_11->init_data, 0, sizeof(VAR_11->init_data));

  if (*VAR_16 == 0x71) {

   FUNC_3(VAR_12.type, "ir_z8f0811_haup", VAR_0);
   VAR_11->init_data.name = VAR_11->board.name;
   VAR_11->init_data.ir_codes = VAR_5;
   VAR_11->init_data.type = VAR_6 |
    VAR_8 | VAR_7;
   VAR_11->init_data.internal_get_key_func = VAR_3;

   VAR_12.platform_data = &VAR_11->init_data;
  }
  if (FUNC_1(&VAR_11->i2c_adap, *VAR_16, 0,
       VAR_2, 0,
       VAR_1, ((void*)0)) >= 0) {
   VAR_12.addr = *VAR_16;
   FUNC_0(&VAR_11->i2c_adap, &VAR_12);
   break;
  }
 }
}
