
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;

__attribute__((used)) static inline int FUNC_0(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4 = (1 << VAR_3/8) - 1;
 VAR_2 *= VAR_3/8;
 return ((VAR_0[VAR_1] >> VAR_2) & VAR_4) == VAR_4;
}
