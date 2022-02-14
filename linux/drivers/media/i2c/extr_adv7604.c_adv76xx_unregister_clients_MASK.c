
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv76xx_state {int * i2c_clients; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct adv76xx_state *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 1; VAR_1 < FUNC_0(VAR_0->i2c_clients); ++VAR_1)
  FUNC_1(VAR_0->i2c_clients[VAR_1]);
}
