
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int * MPT_CALLBACK ;


 int VAR_0 ;
 int ** VAR_1 ;

u8
FUNC_0(MPT_CALLBACK VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = VAR_0-1; VAR_3; VAR_3--)
  if (VAR_1[VAR_3] == ((void*)0))
   break;

 VAR_1[VAR_3] = VAR_2;
 return VAR_3;
}
