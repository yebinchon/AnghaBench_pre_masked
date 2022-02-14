
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u16 FUNC_1(u16 VAR_0, u16 VAR_1)
{
 u8 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_2 = VAR_0 >> 6;
 VAR_3 = VAR_0 & 0x3f;
 VAR_4 = VAR_1 >> 6;
 VAR_5 = VAR_1 & 0x3f;

 VAR_6 = FUNC_0(VAR_2 ^ VAR_3, VAR_4 ^ VAR_5) ^ FUNC_0(VAR_3, VAR_5);
 VAR_7 = FUNC_0(FUNC_0(VAR_2, VAR_4), 0x21) ^ FUNC_0(VAR_3, VAR_5);

 return (VAR_6 << 6) ^ VAR_7;
}
