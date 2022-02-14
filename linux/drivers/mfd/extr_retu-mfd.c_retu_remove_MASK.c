
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retu_dev {int irq_data; int dev; } ;
struct i2c_client {int irq; } ;


 struct retu_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int ) ;
 struct retu_dev* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2)
{
 struct retu_dev *VAR_3 = FUNC_0(VAR_2);

 if (VAR_1 == VAR_3) {
  VAR_0 = ((void*)0);
  VAR_1 = ((void*)0);
 }
 FUNC_1(VAR_3->dev);
 FUNC_2(VAR_2->irq, VAR_3->irq_data);

 return 0;
}
