
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bt455_regs {int addr_cmap_data; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct bt455_regs *VAR_0, u8 *VAR_1)
{
 FUNC_0();
 VAR_0->addr_cmap_data;
 FUNC_1();
 *VAR_1 = VAR_0->addr_cmap_data & 0xf;
 FUNC_1();
 VAR_0->addr_cmap_data;
}
