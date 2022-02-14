
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct bt431_regs {int addr_reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct bt431_regs *VAR_0, u8 VAR_1)
{




 volatile u16 *VAR_2 = &(VAR_0->addr_reg);

 FUNC_1();
 *VAR_2 = FUNC_0(VAR_1);
}
