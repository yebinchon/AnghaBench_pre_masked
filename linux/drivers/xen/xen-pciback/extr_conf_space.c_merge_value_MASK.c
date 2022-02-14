
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(u32 VAR_0, u32 VAR_1, u32 VAR_2,
         int VAR_3)
{
 if (VAR_3 >= 0) {
  VAR_2 <<= (VAR_3 * 8);
  VAR_1 <<= (VAR_3 * 8);
 } else {
  VAR_2 >>= (VAR_3 * -8);
  VAR_1 >>= (VAR_3 * -8);
 }
 VAR_0 = (VAR_0 & ~VAR_2) | (VAR_1 & VAR_2);

 return VAR_0;
}
