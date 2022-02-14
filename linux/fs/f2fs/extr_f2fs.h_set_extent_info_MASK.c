
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extent_info {unsigned int fofs; unsigned int len; int blk; } ;



__attribute__((used)) static inline void FUNC_0(struct extent_info *VAR_0, unsigned int VAR_1,
      u32 VAR_2, unsigned int VAR_3)
{
 VAR_0->fofs = VAR_1;
 VAR_0->blk = VAR_2;
 VAR_0->len = VAR_3;
}
