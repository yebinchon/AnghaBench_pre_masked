
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ice_seg {int dummy; } ;
struct ice_pkg_enum {size_t sect_idx; void* sect; TYPE_2__* buf; int sect_type; int type; } ;
struct TYPE_4__ {TYPE_1__* section_entry; } ;
struct TYPE_3__ {scalar_t__ type; int offset; int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ice_seg*,struct ice_pkg_enum*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void *
FUNC_4(struct ice_seg *VAR_5, struct ice_pkg_enum *VAR_6,
       u32 VAR_7)
{
 u16 VAR_8, VAR_9;

 if (VAR_5)
  VAR_6->type = VAR_7;

 if (!FUNC_1(VAR_5, VAR_6))
  return ((void*)0);


 while (VAR_6->buf->section_entry[VAR_6->sect_idx].type !=
        FUNC_0(VAR_6->type))
  if (!FUNC_1(((void*)0), VAR_6))
   return ((void*)0);


 VAR_8 = FUNC_2(VAR_6->buf->section_entry[VAR_6->sect_idx].offset);
 if (VAR_8 < VAR_2 || VAR_8 > VAR_0)
  return ((void*)0);

 VAR_9 = FUNC_2(VAR_6->buf->section_entry[VAR_6->sect_idx].size);
 if (VAR_9 < VAR_3 || VAR_9 > VAR_1)
  return ((void*)0);


 if (VAR_8 + VAR_9 > VAR_4)
  return ((void*)0);

 VAR_6->sect_type =
  FUNC_3(VAR_6->buf->section_entry[VAR_6->sect_idx].type);


 VAR_6->sect = ((u8 *)VAR_6->buf) +
  FUNC_2(VAR_6->buf->section_entry[VAR_6->sect_idx].offset);

 return VAR_6->sect;
}
