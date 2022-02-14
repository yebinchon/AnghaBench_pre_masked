
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;


 unsigned int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_adapter*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct i2c_adapter *VAR_0, u16 VAR_1, unsigned VAR_2,
        u8 VAR_3)
{
 FUNC_1(VAR_0, VAR_1, (FUNC_0(VAR_0, VAR_1) & VAR_2) | VAR_3);
}
