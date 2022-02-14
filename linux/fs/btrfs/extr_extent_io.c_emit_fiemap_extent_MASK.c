
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct fiemap_extent_info {int dummy; } ;
struct fiemap_cache {int cached; scalar_t__ offset; scalar_t__ len; scalar_t__ phys; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fiemap_extent_info*,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct fiemap_extent_info *VAR_2,
    struct fiemap_cache *VAR_3,
    u64 VAR_4, u64 VAR_5, u64 VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;

 if (!VAR_3->cached)
  goto assign;
 if (VAR_3->offset + VAR_3->len > VAR_4) {
  FUNC_0(1);
  return -VAR_0;
 }
 if (VAR_3->offset + VAR_3->len == VAR_4 &&
     VAR_3->phys + VAR_3->len == VAR_5 &&
     (VAR_3->flags & ~VAR_1) ==
   (VAR_7 & ~VAR_1)) {
  VAR_3->len += VAR_6;
  VAR_3->flags |= VAR_7;
  goto try_submit_last;
 }


 VAR_8 = FUNC_1(VAR_2, VAR_3->offset, VAR_3->phys,
          VAR_3->len, VAR_3->flags);
 VAR_3->cached = 0;
 if (VAR_8)
  return VAR_8;
assign:
 VAR_3->cached = 1;
 VAR_3->offset = VAR_4;
 VAR_3->phys = VAR_5;
 VAR_3->len = VAR_6;
 VAR_3->flags = VAR_7;
try_submit_last:
 if (VAR_3->flags & VAR_1) {
  VAR_8 = FUNC_1(VAR_2, VAR_3->offset,
    VAR_3->phys, VAR_3->len, VAR_3->flags);
  VAR_3->cached = 0;
 }
 return VAR_8;
}
