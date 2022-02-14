
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {scalar_t__ cached; } ;
typedef unsigned long ssize_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct map_info *VAR_1, unsigned long VAR_2,
          ssize_t VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_1->cached + VAR_2;
 unsigned long VAR_5 = VAR_4 + VAR_3;

 VAR_4 &= ~(VAR_0 - 1);
 while (VAR_4 < VAR_5) {

  asm volatile ("mcr p15, 0, %0, c7, c6, 1" : : "r" (VAR_4));
  VAR_4 += VAR_0;
 }
}
