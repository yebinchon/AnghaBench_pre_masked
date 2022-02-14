
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65217 {int * irq_domain; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct tps65217* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1)
{
 struct tps65217 *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_3(VAR_2->irq_domain, VAR_4);
  if (VAR_3)
   FUNC_1(VAR_3);
 }

 FUNC_2(VAR_2->irq_domain);
 VAR_2->irq_domain = ((void*)0);

 return 0;
}
