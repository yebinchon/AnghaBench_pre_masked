
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline long FUNC_0(struct subchannel_id VAR_1,
       unsigned long VAR_2,
       long VAR_3)
{
 register unsigned long VAR_4 asm("1") = VAR_0;
 register struct subchannel_id VAR_5 asm("2") = VAR_1;
 register unsigned long VAR_6 asm("3") = VAR_2;
 register long VAR_7 asm("2");
 register long VAR_8 asm("4") = VAR_3;

 asm volatile ("diag 2,4,0x500\n"
        : "=d" (VAR_7) : "d" (VAR_4), "d" (VAR_5), "d" (VAR_6),
        "d"(VAR_8)
        : "memory", "cc");
 return VAR_7;
}
