
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static u8 FUNC_1(void)
{
 u64 VAR_2;




 VAR_2 = FUNC_0();
 VAR_2 += (VAR_2 >> 32) + (VAR_2 >> 16);

 return ((u8)VAR_2 % VAR_0) + VAR_1;
}
