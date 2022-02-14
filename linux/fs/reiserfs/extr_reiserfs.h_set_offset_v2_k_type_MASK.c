
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct offset_v2 {int v; } ;
typedef int __u64 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct offset_v2 *VAR_0, int VAR_1)
{
 VAR_0->v =
     (VAR_0->v & FUNC_0(~0ULL >> 4)) | FUNC_0((__u64) VAR_1 << 60);
}
