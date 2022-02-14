
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_adapter {int * clk; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct emac_adapter *VAR_1)
{

 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1->clk[VAR_2]);
}
