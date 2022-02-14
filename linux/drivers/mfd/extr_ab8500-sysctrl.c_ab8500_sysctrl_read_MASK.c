
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int*) ;
 int * VAR_2 ;
 int FUNC_1 (int) ;

int FUNC_2(u16 VAR_3, u8 *VAR_4)
{
 u8 VAR_5;

 if (VAR_2 == ((void*)0))
  return -VAR_1;

 VAR_5 = (VAR_3 >> 8);
 if (!FUNC_1(VAR_5))
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_5,
  (u8)(VAR_3 & 0xFF), VAR_4);
}
