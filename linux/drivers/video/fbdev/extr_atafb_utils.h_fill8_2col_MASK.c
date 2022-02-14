
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int,int,int*,int*) ;

__attribute__((used)) static inline void FUNC_1(u8 *VAR_0, u8 VAR_1, u8 VAR_2, u32 VAR_3)
{
 u32 VAR_4[2], VAR_5[2], VAR_6;

 FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5);

 VAR_3 |= VAR_3 << 8;



 VAR_6 = (VAR_3 & VAR_4[0]) ^ VAR_5[0];
 VAR_0[0] = VAR_6;
 VAR_0[2] = (VAR_6 >>= 8);
}
