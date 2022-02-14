
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_extent {int len; int blk; int fofs; } ;
struct extent_info {void* len; void* blk; void* fofs; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct extent_info *VAR_0,
     struct f2fs_extent *VAR_1)
{
 VAR_0->fofs = FUNC_0(VAR_1->fofs);
 VAR_0->blk = FUNC_0(VAR_1->blk);
 VAR_0->len = FUNC_0(VAR_1->len);
}
