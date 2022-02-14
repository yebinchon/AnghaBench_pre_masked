
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char const*) ;

__attribute__((used)) static void FUNC_1(u64 *VAR_1, unsigned char const *VAR_2)
{
 u64 VAR_3 = *VAR_1;
 u8 VAR_4;




 VAR_4 = FUNC_0(VAR_0, VAR_2) >> 23;

 VAR_4 &= 0x3F;
 VAR_3 |= (u64)1 << VAR_4;
 *VAR_1 = VAR_3;
}
