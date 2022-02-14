
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_header {TYPE_1__* xh_entries; int xh_count; } ;
struct ocfs2_xattr_entry {int xe_name_offset; } ;
struct ocfs2_xa_loc {struct ocfs2_xattr_header* xl_header; struct ocfs2_xattr_entry* xl_entry; } ;
struct TYPE_2__ {int xe_name_offset; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct ocfs2_xattr_entry*) ;
 int FUNC_5 (struct ocfs2_xa_loc*) ;

__attribute__((used)) static void FUNC_6(struct ocfs2_xa_loc *VAR_0)
{
 int VAR_1, VAR_2;
 int VAR_3, VAR_4, VAR_5;
 struct ocfs2_xattr_entry *VAR_6 = VAR_0->xl_entry;
 struct ocfs2_xattr_header *VAR_7 = VAR_0->xl_header;
 int VAR_8 = FUNC_1(VAR_7->xh_count);

 VAR_3 = FUNC_1(VAR_6->xe_name_offset);
 VAR_5 = FUNC_4(VAR_6);
 VAR_4 = FUNC_5(VAR_0);


 FUNC_2((char *)VAR_7 + VAR_4 + VAR_5,
  (char *)VAR_7 + VAR_4,
  VAR_3 - VAR_4);
 FUNC_3((char *)VAR_7 + VAR_4, 0, VAR_5);


 for (VAR_1 = 0; VAR_1 < VAR_8; VAR_1++) {
  VAR_2 = FUNC_1(VAR_7->xh_entries[VAR_1].xe_name_offset);
  if (VAR_2 <= VAR_3)
   FUNC_0(&VAR_7->xh_entries[VAR_1].xe_name_offset,
         VAR_5);
 }





}
