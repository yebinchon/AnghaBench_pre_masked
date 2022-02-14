
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct offset_v2 {int v; } ;
typedef unsigned long long loff_t ;


 unsigned long long FUNC_0 (int ) ;

__attribute__((used)) static inline loff_t FUNC_1(const struct offset_v2 *VAR_0)
{
 return FUNC_0(VAR_0->v) & (~0ULL >> 4);
}
