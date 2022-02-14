
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et131x_adapter {int * rom_addr; int * addr; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct et131x_adapter *VAR_0)
{




 if (FUNC_2(VAR_0->rom_addr)) {




  FUNC_1(&VAR_0->addr[5], 1);




  FUNC_0(VAR_0->rom_addr, VAR_0->addr);
 } else {




  FUNC_0(VAR_0->addr, VAR_0->rom_addr);
 }
}
