
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct i2c_board_info {int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1, struct i2c_board_info *VAR_2)
{
 FUNC_0(VAR_2->type, "olpc_dcon", VAR_0);

 return 0;
}
