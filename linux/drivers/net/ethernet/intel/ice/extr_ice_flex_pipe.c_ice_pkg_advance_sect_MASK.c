
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_seg {int dummy; } ;
struct ice_pkg_enum {scalar_t__ sect_idx; TYPE_1__* buf; } ;
struct TYPE_2__ {int section_count; } ;


 TYPE_1__* FUNC_0 (struct ice_seg*,struct ice_pkg_enum*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(struct ice_seg *VAR_0, struct ice_pkg_enum *VAR_1)
{
 if (!VAR_0 && !VAR_1->buf)
  return 0;

 if (!VAR_0 && VAR_1->buf)
  if (++VAR_1->sect_idx < FUNC_1(VAR_1->buf->section_count))
   return 1;

 VAR_1->buf = FUNC_0(VAR_0, VAR_1);
 if (!VAR_1->buf)
  return 0;


 VAR_1->sect_idx = 0;
 return 1;
}
