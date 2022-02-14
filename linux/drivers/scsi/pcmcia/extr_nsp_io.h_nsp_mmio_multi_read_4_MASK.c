
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long*) ;

__attribute__((used)) static inline void FUNC_1(unsigned long VAR_0,
      unsigned int VAR_1,
      void *VAR_2,
      unsigned long VAR_3)
{
 unsigned long *VAR_4 = (unsigned long *)(VAR_0 + VAR_1);
 unsigned long *VAR_5 = (unsigned long *)VAR_2;
 int VAR_6;



 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  *VAR_5 = FUNC_0(VAR_4);

  VAR_5++;
 }
}
