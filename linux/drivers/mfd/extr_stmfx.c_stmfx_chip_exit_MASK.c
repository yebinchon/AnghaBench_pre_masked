
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmfx {scalar_t__ vdd; int map; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stmfx* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2)
{
 struct stmfx *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->map, VAR_0, 0);
 FUNC_1(VAR_3->map, VAR_1, 0);

 if (VAR_3->vdd)
  return FUNC_2(VAR_3->vdd);

 return 0;
}
