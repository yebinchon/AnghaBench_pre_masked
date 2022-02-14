
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_extent {void* len; void* blk; void* fofs; } ;
struct extent_info {int len; int blk; int fofs; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct extent_info *VAR_0,
     struct f2fs_extent *VAR_1)
{
 VAR_1->fofs = FUNC_0(VAR_0->fofs);
 VAR_1->blk = FUNC_0(VAR_0->blk);
 VAR_1->len = FUNC_0(VAR_0->len);
}
