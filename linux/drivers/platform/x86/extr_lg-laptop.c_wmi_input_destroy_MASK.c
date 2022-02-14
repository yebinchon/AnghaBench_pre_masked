
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_5 & VAR_1)
  FUNC_1(VAR_4);

 if (VAR_5 & VAR_0)
  FUNC_1(VAR_3);

 if (VAR_5 & VAR_2)
  FUNC_0(VAR_6);

 VAR_5 &= ~(VAR_0 | VAR_1 | VAR_2);
}
