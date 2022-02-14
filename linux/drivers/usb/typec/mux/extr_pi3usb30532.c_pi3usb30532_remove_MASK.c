
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pi3usb30532 {int sw; int mux; } ;
struct i2c_client {int dummy; } ;


 struct pi3usb30532* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct pi3usb30532 *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->mux);
 FUNC_2(VAR_1->sw);
 return 0;
}
