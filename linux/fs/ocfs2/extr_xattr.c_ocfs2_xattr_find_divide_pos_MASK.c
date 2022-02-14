
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_header {int xh_count; struct ocfs2_xattr_entry* xh_entries; } ;
struct ocfs2_xattr_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct ocfs2_xattr_entry*,struct ocfs2_xattr_entry*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_xattr_header *VAR_0)
{
 struct ocfs2_xattr_entry *VAR_1 = VAR_0->xh_entries;
 int VAR_2 = FUNC_1(VAR_0->xh_count);
 int VAR_3, VAR_4 = VAR_2 / 2;







 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {

  if (FUNC_0(&VAR_1[VAR_4 - VAR_3 - 1],
      &VAR_1[VAR_4 - VAR_3]))
   return VAR_4 - VAR_3;


  if ((VAR_4 + VAR_3 + 1) == VAR_2)
   continue;


  if (FUNC_0(&VAR_1[VAR_4 + VAR_3],
      &VAR_1[VAR_4 + VAR_3 + 1]))
   return VAR_4 + VAR_3 + 1;
 }


 return VAR_2;
}
