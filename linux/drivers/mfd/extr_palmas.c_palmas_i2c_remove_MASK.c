
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas {scalar_t__* i2c_clients; int irq_data; int irq; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct palmas* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (scalar_t__) ;
 struct palmas* VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3)
{
 struct palmas *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 FUNC_2(VAR_4->irq, VAR_4->irq_data);

 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->i2c_clients[VAR_5])
   FUNC_1(VAR_4->i2c_clients[VAR_5]);
 }

 if (VAR_4 == VAR_1) {
  VAR_2 = ((void*)0);
  VAR_1 = ((void*)0);
 }

 return 0;
}
