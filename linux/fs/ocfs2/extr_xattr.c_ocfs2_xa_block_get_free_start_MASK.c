
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_header {TYPE_1__* xh_entries; int xh_count; } ;
struct ocfs2_xa_loc {int xl_size; struct ocfs2_xattr_header* xl_header; } ;
struct TYPE_2__ {int xe_name_offset; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ocfs2_xa_loc *VAR_0)
{
 struct ocfs2_xattr_header *VAR_1 = VAR_0->xl_header;
 int VAR_2, VAR_3 = FUNC_0(VAR_1->xh_count);
 int VAR_4, VAR_5 = VAR_0->xl_size;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_4 = FUNC_0(VAR_1->xh_entries[VAR_2].xe_name_offset);
  if (VAR_4 < VAR_5)
   VAR_5 = VAR_4;
 }

 return VAR_5;
}
