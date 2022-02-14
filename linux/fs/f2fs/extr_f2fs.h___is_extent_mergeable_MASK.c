
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_info {scalar_t__ fofs; scalar_t__ len; scalar_t__ blk; } ;



__attribute__((used)) static inline bool FUNC_0(struct extent_info *VAR_0,
      struct extent_info *VAR_1)
{
 return (VAR_0->fofs + VAR_0->len == VAR_1->fofs &&
   VAR_0->blk + VAR_0->len == VAR_1->blk);
}
