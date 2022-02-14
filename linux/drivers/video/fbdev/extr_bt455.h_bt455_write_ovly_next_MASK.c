
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bt455_regs {int addr_ovly; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct bt455_regs *VAR_0, u8 VAR_1)
{
 FUNC_0();
 VAR_0->addr_ovly = 0x0;
 FUNC_0();
 VAR_0->addr_ovly = VAR_1 & 0xf;
 FUNC_0();
 VAR_0->addr_ovly = 0x0;
}
