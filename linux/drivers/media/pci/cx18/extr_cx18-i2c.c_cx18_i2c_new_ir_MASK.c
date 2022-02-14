
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u8 ;
typedef int u32 ;
struct i2c_board_info {struct IR_i2c_init_data* platform_data; int type; } ;
struct i2c_adapter {int dummy; } ;
struct IR_i2c_init_data {int type; int name; int internal_get_key_func; int ir_codes; } ;
struct cx18 {int card_name; struct IR_i2c_init_data ir_i2c_init_data; } ;



 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (struct i2c_adapter*,struct i2c_board_info*,unsigned short*,int *) ;
 int FUNC_1 (struct i2c_board_info*,int ,int) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct cx18 *VAR_7, struct i2c_adapter *VAR_8, u32 VAR_9,
      const char *VAR_10, u8 VAR_11)
{
 struct i2c_board_info VAR_12;
 struct IR_i2c_init_data *VAR_13 = &VAR_7->ir_i2c_init_data;
 unsigned short VAR_14[2] = { VAR_11, VAR_0 };

 FUNC_1(&VAR_12, 0, sizeof(struct i2c_board_info));
 FUNC_2(VAR_12.type, VAR_10, VAR_1);


 switch (VAR_9) {
 case 128:
  VAR_13->ir_codes = VAR_3;
  VAR_13->internal_get_key_func = VAR_2;
  VAR_13->type = VAR_4 | VAR_6 |
       VAR_5;
  VAR_13->name = VAR_7->card_name;
  VAR_12.platform_data = VAR_13;
  break;
 }

 return FUNC_0(VAR_8, &VAR_12, VAR_14, ((void*)0)) == ((void*)0) ?
        -1 : 0;
}
