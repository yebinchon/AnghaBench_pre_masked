
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;
struct erofs_sb_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct erofs_sb_info const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct erofs_sb_info *VAR_0,
      struct page *VAR_1)
{
 return VAR_1->mapping == FUNC_0(VAR_0);
}
