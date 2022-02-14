
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_dx_entry_list {TYPE_1__* de_entries; int de_num_used; } ;
struct ocfs2_dx_leaf {struct ocfs2_dx_entry_list dl_list; } ;
struct TYPE_2__ {int dx_major_hash; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ocfs2_dx_leaf*) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_dx_leaf *VAR_1,
     u32 VAR_2, u32 VAR_3,
     u32 *VAR_4)
{
 struct ocfs2_dx_entry_list *VAR_5 = &VAR_1->dl_list;
 int VAR_6, VAR_7 = FUNC_1(VAR_5->de_num_used);
 int VAR_8;
 VAR_8 = FUNC_3(VAR_1);
 if (VAR_8) {
  u32 VAR_9 = FUNC_2(VAR_5->de_entries[0].dx_major_hash);

  if (VAR_9 == VAR_3) {







   return -VAR_0;
  }

  if (VAR_9 == VAR_2) {
   *VAR_4 = VAR_2 + 1;
   return 0;
  }

  if (VAR_9 > VAR_3) {







   *VAR_4 = VAR_9;
   return 0;
  }

  *VAR_4 = VAR_3;
  return 0;
 }







 for (VAR_6 = (VAR_7 / 2); VAR_6 < VAR_7; VAR_6++)
  if (FUNC_2(VAR_5->de_entries[VAR_6].dx_major_hash) >
      VAR_2)
   break;

 FUNC_0(VAR_6 == VAR_7);
 *VAR_4 = FUNC_2(VAR_5->de_entries[VAR_6].dx_major_hash);
 return 0;
}
