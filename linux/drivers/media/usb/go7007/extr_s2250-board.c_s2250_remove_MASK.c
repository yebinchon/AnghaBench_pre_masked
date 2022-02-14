
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2250 {int hdl; int sd; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct s2250*) ;
 struct s2250* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct s2250 *VAR_1 = FUNC_2(FUNC_0(VAR_0));

 FUNC_4(&VAR_1->sd);
 FUNC_3(&VAR_1->hdl);
 FUNC_1(VAR_1);
 return 0;
}
