
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sbp2_pointer {int low; int high; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u64 FUNC_1(const struct sbp2_pointer *VAR_0)
{
 return (u64)(FUNC_0(VAR_0->high) & 0x0000ffff) << 32 |
  (FUNC_0(VAR_0->low) & 0xfffffffc);
}
