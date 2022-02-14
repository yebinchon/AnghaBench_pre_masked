
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

void FUNC_2(unsigned int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 if (VAR_3)
  VAR_4 |= (VAR_2 | VAR_1);
 else
  VAR_4 &= ~(VAR_2 | VAR_1);

 FUNC_1(VAR_4);
}
