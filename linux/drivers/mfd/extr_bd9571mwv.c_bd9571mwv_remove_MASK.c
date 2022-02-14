
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct bd9571mwv {int irq_data; int irq; } ;


 struct bd9571mwv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct bd9571mwv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->irq, VAR_1->irq_data);

 return 0;
}
