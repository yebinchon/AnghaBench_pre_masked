
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bt431_regs {int addr_cmap; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct bt431_regs *VAR_0, u16 VAR_1)
{




 volatile u16 *VAR_2 = &(VAR_0->addr_cmap);

 FUNC_0();
 *VAR_2 = VAR_1;
}
