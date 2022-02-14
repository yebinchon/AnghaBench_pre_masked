
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

void FUNC_2(u64 *VAR_2, u16 VAR_3)
{
 u16 VAR_4, VAR_5;

 VAR_4 = VAR_3 & (VAR_1 >> FUNC_1(VAR_1));
 VAR_5 = VAR_3 != VAR_4;
 *VAR_2 &= ~(VAR_0 | VAR_1);
 *VAR_2 |= FUNC_0(VAR_0, VAR_5);
 *VAR_2 |= FUNC_0(VAR_1, VAR_4);
}
