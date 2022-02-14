
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_lock; struct ocfs2_recovery_map* recovery_map; } ;
struct ocfs2_recovery_map {int rm_used; unsigned int* rm_entries; } ;


 int FUNC_0 (unsigned int*,unsigned int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_super *VAR_0,
         unsigned int VAR_1)
{
 int VAR_2;
 struct ocfs2_recovery_map *VAR_3 = VAR_0->recovery_map;

 FUNC_1(&VAR_0->osb_lock);

 for (VAR_2 = 0; VAR_2 < VAR_3->rm_used; VAR_2++) {
  if (VAR_3->rm_entries[VAR_2] == VAR_1)
   break;
 }

 if (VAR_2 < VAR_3->rm_used) {

  FUNC_0(&(VAR_3->rm_entries[VAR_2]), &(VAR_3->rm_entries[VAR_2 + 1]),
   (VAR_3->rm_used - VAR_2 - 1) * sizeof(unsigned int));
  VAR_3->rm_used--;
 }

 FUNC_2(&VAR_0->osb_lock);
}
