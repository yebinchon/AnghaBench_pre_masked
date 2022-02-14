
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_lock; struct ocfs2_recovery_map* recovery_map; } ;
struct ocfs2_recovery_map {int rm_used; unsigned int* rm_entries; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct ocfs2_super *VAR_0,
         unsigned int VAR_1)
{
 int VAR_2;
 struct ocfs2_recovery_map *VAR_3 = VAR_0->recovery_map;

 FUNC_0(&VAR_0->osb_lock);

 for (VAR_2 = 0; VAR_2 < VAR_3->rm_used; VAR_2++) {
  if (VAR_3->rm_entries[VAR_2] == VAR_1)
   return 1;
 }

 return 0;
}
