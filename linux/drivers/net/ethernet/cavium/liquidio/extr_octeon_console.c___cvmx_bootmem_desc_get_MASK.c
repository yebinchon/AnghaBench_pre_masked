
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef unsigned long long u32 ;
struct octeon_device {int dummy; } ;


 unsigned long long FUNC_0 (struct octeon_device*,unsigned long long) ;
 unsigned long long FUNC_1 (struct octeon_device*,unsigned long long) ;

__attribute__((used)) static inline u64 FUNC_2(struct octeon_device *VAR_0,
       u64 VAR_1,
       u32 VAR_2,
       u32 VAR_3)
{
 VAR_1 = (1ull << 63) | (VAR_1 + VAR_2);
 switch (VAR_3) {
 case 4:
  return FUNC_0(VAR_0, VAR_1);
 case 8:
  return FUNC_1(VAR_0, VAR_1);
 default:
  return 0;
 }
}
