
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_xattr_header {struct ocfs2_xattr_entry* xh_entries; int xh_count; } ;
struct ocfs2_xattr_entry {int xe_name_hash; } ;
struct ocfs2_xa_loc {struct ocfs2_xattr_entry* xl_entry; struct ocfs2_xattr_header* xl_header; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ocfs2_xattr_entry*,struct ocfs2_xattr_entry*,int) ;
 int FUNC_4 (struct ocfs2_xattr_entry*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ocfs2_xa_loc *VAR_0, u32 VAR_1)
{
 struct ocfs2_xattr_header *VAR_2 = VAR_0->xl_header;
 int VAR_3 = FUNC_1(VAR_2->xh_count);
 int VAR_4 = 0, VAR_5 = VAR_3 - 1, VAR_6;
 struct ocfs2_xattr_entry *VAR_7;





 while (VAR_4 <= VAR_5 && VAR_3) {
  VAR_6 = (VAR_4 + VAR_5) / 2;
  VAR_7 = &VAR_2->xh_entries[VAR_6];

  if (VAR_1 > FUNC_2(VAR_7->xe_name_hash))
   VAR_4 = VAR_6 + 1;
  else if (VAR_1 < FUNC_2(VAR_7->xe_name_hash))
   VAR_5 = VAR_6 - 1;
  else {
   VAR_4 = VAR_6;
   break;
  }
 }

 if (VAR_4 != VAR_3)
  FUNC_3(&VAR_2->xh_entries[VAR_4 + 1],
   &VAR_2->xh_entries[VAR_4],
   ((VAR_3 - VAR_4) * sizeof(struct ocfs2_xattr_entry)));

 FUNC_0(&VAR_2->xh_count, 1);
 VAR_0->xl_entry = &VAR_2->xh_entries[VAR_4];
 FUNC_4(VAR_0->xl_entry, 0, sizeof(struct ocfs2_xattr_entry));
}
