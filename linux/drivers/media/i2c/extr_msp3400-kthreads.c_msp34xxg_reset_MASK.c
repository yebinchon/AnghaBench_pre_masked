
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int route_in; int std; int i2s_mode; scalar_t__ has_nicam; scalar_t__ has_i2s_conf; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*) ;
 int VAR_0 ;
 int FUNC_4 (struct i2c_client*,int,int) ;
 int FUNC_5 (struct i2c_client*,int,int) ;
 struct msp_state* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct i2c_client *VAR_1)
{
 struct msp_state *VAR_2 = FUNC_6(FUNC_0(VAR_1));
 int VAR_3 = (VAR_2->route_in >> 3) & 1;
 int VAR_4;



 VAR_2->std = 1;

 FUNC_3(VAR_1);

 if (VAR_2->has_i2s_conf)
  FUNC_4(VAR_1, 0x40, VAR_2->i2s_mode);


 VAR_4 = FUNC_1(VAR_1);
 VAR_4 |= VAR_3 ? 0x100 : 0;
 FUNC_4(VAR_1, 0x30, VAR_4);



 FUNC_2(VAR_1);

 FUNC_5(VAR_1, 0x0d, 0x1900);
 FUNC_5(VAR_1, 0x0e, 0x3000);
 if (VAR_2->has_nicam)
  FUNC_5(VAR_1, 0x10, 0x5a00);
 FUNC_4(VAR_1, 0x22, VAR_0);
}
