
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
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{
 u32 VAR_5 = VAR_4 + VAR_2;
 u32 VAR_6 = FUNC_0(VAR_5);


 if (VAR_6 & VAR_0) {
  VAR_6 &= ~VAR_0;
  FUNC_1(VAR_6, VAR_5);
 }
 if (VAR_6 & VAR_1) {
  FUNC_2(VAR_3 / 10);
  FUNC_1(VAR_6 & ~VAR_1, VAR_5);
 }
}
