
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menelaus_chip {int work; } ;
struct i2c_client {int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct menelaus_chip*) ;
 struct menelaus_chip* FUNC_2 (struct i2c_client*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct menelaus_chip *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1->irq, VAR_2);
 FUNC_0(&VAR_2->work);
 VAR_0 = ((void*)0);
 return 0;
}
