
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
struct dw9714_device {int current_val; int sd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dw9714_device *VAR_1, u16 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(&VAR_1->sd);

 VAR_1->current_val = VAR_2;

 return FUNC_1(VAR_3, FUNC_0(VAR_2, VAR_0));
}
