
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline u32
FUNC_0(u32 VAR_1) {
 int VAR_2 = 0;
 if (VAR_1 >= (1UL)<<22)
  return VAR_0 - 1;
 VAR_1 >>= 8;
 if (VAR_1 >= (1UL)<<16) {
  VAR_1 >>= 16;
  VAR_2 += 16;
 }
 if (VAR_1 >= 1 << 8) {
  VAR_1 >>= 8;
  VAR_2 += 8;
 }
 if (VAR_1 >= 1 << 4) {
  VAR_1 >>= 4;
  VAR_2 += 4;
 }
 if (VAR_1 >= 1 << 2) {
  VAR_1 >>= 2;
  VAR_2 += 2;
 }
 if (VAR_1 >= 1 << 1)
  VAR_2 += 1;

 return (VAR_1 == 0) ? (0) : VAR_2;
}
