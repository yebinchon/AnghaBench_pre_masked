
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct bbc_i2c_client {struct platform_device* op; struct bbc_i2c_bus* bp; } ;
struct bbc_i2c_bus {int dummy; } ;


 int FUNC_0 (struct bbc_i2c_client*) ;
 int FUNC_1 (struct bbc_i2c_bus*,struct platform_device*) ;

void FUNC_2(struct bbc_i2c_client *VAR_0)
{
 struct bbc_i2c_bus *VAR_1 = VAR_0->bp;
 struct platform_device *VAR_2 = VAR_0->op;

 FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_0);
}
