
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmfx {int irq_domain; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct stmfx* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_1)
{
 struct stmfx *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(FUNC_3(VAR_2->irq_domain, VAR_3));

 FUNC_2(VAR_2->irq_domain);
}
