
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int i2c_adap; } ;
struct i2c_client {int dummy; } ;
struct i2c_board_info {int type; } ;



 int VAR_0 ;
 struct i2c_client* FUNC_0 (int *,struct i2c_board_info*,unsigned short const*,int *) ;
 int FUNC_1 (struct i2c_board_info*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;

struct i2c_client *FUNC_3(struct ivtv *VAR_1)
{
 struct i2c_board_info VAR_2;
 static const unsigned short VAR_3[] = {
  0x1a,
  0x18,
  128
 };

 FUNC_1(&VAR_2, 0, sizeof(struct i2c_board_info));
 FUNC_2(VAR_2.type, "ir_video", VAR_0);
 return FUNC_0(&VAR_1->i2c_adap, &VAR_2, VAR_3, ((void*)0));
}
