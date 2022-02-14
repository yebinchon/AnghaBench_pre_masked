
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
typedef int __le64 ;


 int const FUNC_0 (int const) ;

__attribute__((used)) static inline u64 FUNC_1(const __le64 *VAR_0, u64 VAR_1, u8 VAR_2)
{
 u64 VAR_3;
 static const u64 VAR_4[] = {
  [0] = 0xffffffffffffffffULL,
  [1] = 0xaaaaaaaaaaaaaaaaULL,
  [2] = 0x5555555555555555ULL,
  [3] = 0x0000000000000000ULL,
 };
 VAR_3 = FUNC_0(*VAR_0) ^ VAR_4[VAR_2];
 VAR_3 &= (VAR_3 >> 1);
 VAR_3 &= VAR_1;
 return VAR_3;
}
