
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct offset_v2 {int v; } ;
typedef unsigned long long loff_t ;


 int FUNC_0 (unsigned long long) ;

__attribute__((used)) static inline void FUNC_1(struct offset_v2 *VAR_0, loff_t VAR_1)
{
 VAR_1 &= (~0ULL >> 4);
 VAR_0->v = (VAR_0->v & FUNC_0(15ULL << 60)) | FUNC_0(VAR_1);
}
