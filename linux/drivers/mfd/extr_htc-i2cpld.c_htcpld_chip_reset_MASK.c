
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct htcpld_chip {int reset; int cache_out; } ;


 struct htcpld_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_0)
{
 struct htcpld_chip *VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return;

 FUNC_1(
  VAR_0, (VAR_1->cache_out = VAR_1->reset));
}
