
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dx_entry_list {TYPE_1__* de_entries; int de_num_used; } ;
struct ocfs2_dx_leaf {struct ocfs2_dx_entry_list dl_list; } ;
struct TYPE_2__ {int dx_major_hash; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_dx_leaf *VAR_0)
{
 struct ocfs2_dx_entry_list *VAR_1 = &VAR_0->dl_list;
 int VAR_2, VAR_3 = FUNC_0(VAR_1->de_num_used);

 for (VAR_2 = 0; VAR_2 < (VAR_3 - 1); VAR_2++) {
  if (FUNC_1(VAR_1->de_entries[VAR_2].dx_major_hash) !=
      FUNC_1(VAR_1->de_entries[VAR_2 + 1].dx_major_hash))
   return 0;
 }

 return 1;
}
