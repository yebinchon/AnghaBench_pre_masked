
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(u16 *VAR_1, u8 *VAR_2, u8 *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_0);
 *VAR_1 = (VAR_4 >> 16);
 *VAR_2 = (VAR_4 >> 8) & 0xff;
 *VAR_3 = VAR_4 & 0xff;
}
