
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fiemap_extent_info {int dummy; } ;
struct fiemap_cache {int cached; int flags; int len; int phys; int offset; } ;


 int FUNC_0 (struct fiemap_extent_info*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fiemap_extent_info *VAR_0,
      struct fiemap_cache *VAR_1)
{
 int VAR_2;

 if (!VAR_1->cached)
  return 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1->offset, VAR_1->phys,
          VAR_1->len, VAR_1->flags);
 VAR_1->cached = 0;
 if (VAR_2 > 0)
  VAR_2 = 0;
 return VAR_2;
}
