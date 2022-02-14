
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(unsigned *VAR_1)
{




 if (*VAR_1 == 0)
  *VAR_1 = ((FUNC_0() << VAR_0) >> 13) / 392;

 if (*VAR_1 >= 1 << 16)
  *VAR_1 = (1 << 16) - 1;
}
