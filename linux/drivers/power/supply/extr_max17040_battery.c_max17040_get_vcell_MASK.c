
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct max17040_chip {int vcell; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct max17040_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_1)
{
 struct max17040_chip *VAR_2 = FUNC_0(VAR_1);
 u16 VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);

 VAR_2->vcell = VAR_3;
}
