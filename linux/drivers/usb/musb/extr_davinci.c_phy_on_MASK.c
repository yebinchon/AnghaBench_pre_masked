
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(void)
{
 u32 VAR_8 = FUNC_0(VAR_7);


 VAR_8 &= ~(VAR_0 | VAR_1 | VAR_3);
 VAR_8 |= VAR_5 | VAR_6 | VAR_4;
 FUNC_1(VAR_8, VAR_7);


 while ((FUNC_0(VAR_7) & VAR_2) == 0)
  FUNC_2();
}
