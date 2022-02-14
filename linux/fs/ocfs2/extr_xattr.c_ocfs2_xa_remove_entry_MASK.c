
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_header {int * xh_entries; int xh_count; } ;
struct ocfs2_xattr_entry {int dummy; } ;
struct ocfs2_xa_loc {struct ocfs2_xattr_entry* xl_entry; struct ocfs2_xattr_header* xl_header; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct ocfs2_xa_loc*) ;

__attribute__((used)) static void FUNC_5(struct ocfs2_xa_loc *VAR_0)
{
 int VAR_1, VAR_2;
 struct ocfs2_xattr_header *VAR_3 = VAR_0->xl_header;
 struct ocfs2_xattr_entry *VAR_4 = VAR_0->xl_entry;

 FUNC_4(VAR_0);
 VAR_0->xl_entry = ((void*)0);

 FUNC_0(&VAR_3->xh_count, -1);
 VAR_2 = FUNC_1(VAR_3->xh_count);






 if (VAR_2) {
  VAR_1 = ((char *)VAR_4 - (char *)&VAR_3->xh_entries) /
   sizeof(struct ocfs2_xattr_entry);
  FUNC_2(&VAR_3->xh_entries[VAR_1], &VAR_3->xh_entries[VAR_1 + 1],
   (VAR_2 - VAR_1) * sizeof(struct ocfs2_xattr_entry));
  FUNC_3(&VAR_3->xh_entries[VAR_2], 0,
         sizeof(struct ocfs2_xattr_entry));
 }
}
