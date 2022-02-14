
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int* FUNC_0 (unsigned int,int*,int,int,int*) ;

int FUNC_1(unsigned int VAR_0, u8 *VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 *VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
 if (!VAR_4)
  return -1;

 return (*VAR_4 >> VAR_5) & 1;
}
