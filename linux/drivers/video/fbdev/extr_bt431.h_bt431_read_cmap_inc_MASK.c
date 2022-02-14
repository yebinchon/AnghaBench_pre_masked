
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile u16 ;
struct bt431_regs {int volatile addr_cmap; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline u16 FUNC_1(struct bt431_regs *VAR_0)
{




 volatile u16 *VAR_1 = &(VAR_0->addr_cmap);

 FUNC_0();
 return *VAR_1;
}
