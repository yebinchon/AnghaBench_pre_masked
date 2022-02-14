
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(u32 VAR_2, uint VAR_3, u8 *VAR_4)
{
 u8 VAR_5 = (u8) (VAR_2 & VAR_1);
 VAR_4[0] = VAR_5;
 if (FUNC_1(VAR_2) || (VAR_5 == 32))
  VAR_4[0] |= VAR_0;
 FUNC_0(VAR_4, VAR_3);
 VAR_4[3] = FUNC_2(VAR_2);
 VAR_4[3] |= 0x7;
 VAR_4[4] = 0;
 VAR_4[5] = 0;
}
