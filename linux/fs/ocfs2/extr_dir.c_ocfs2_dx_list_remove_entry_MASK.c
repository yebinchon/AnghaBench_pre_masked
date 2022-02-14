
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dx_entry_list {int de_num_used; int * de_entries; } ;
struct ocfs2_dx_entry {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_dx_entry_list *VAR_0,
           int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0->de_num_used);

 if (VAR_2 == 1 || VAR_1 == (VAR_2 - 1))
  goto clear;

 FUNC_2(&VAR_0->de_entries[VAR_1],
  &VAR_0->de_entries[VAR_1 + 1],
  (VAR_2 - VAR_1 - 1)*sizeof(struct ocfs2_dx_entry));
clear:
 VAR_2--;
 FUNC_3(&VAR_0->de_entries[VAR_2], 0,
        sizeof(struct ocfs2_dx_entry));
 VAR_0->de_num_used = FUNC_0(VAR_2);
}
