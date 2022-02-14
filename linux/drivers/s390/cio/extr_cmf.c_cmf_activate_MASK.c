
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(void *VAR_0, unsigned int VAR_1)
{
 register void * VAR_2 asm("2");
 register long VAR_3 asm("1");

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;

 asm("schm" : : "d" (VAR_2), "d" (VAR_3) );
}
