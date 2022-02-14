
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (unsigned int) ;
 size_t FUNC_1 (unsigned int) ;
 int** VAR_0 ;
 unsigned int FUNC_2 () ;

int FUNC_3(unsigned VAR_1)
{
 if (VAR_1 >= FUNC_2())
  return -1;
 if (VAR_0[FUNC_1(VAR_1)] == ((void*)0))
  return -1;
 return VAR_0[FUNC_1(VAR_1)][FUNC_0(VAR_1)];
}
