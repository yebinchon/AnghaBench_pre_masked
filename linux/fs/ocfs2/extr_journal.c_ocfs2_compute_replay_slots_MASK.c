
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int max_slots; int osb_lock; struct ocfs2_replay_map* replay_map; } ;
struct ocfs2_replay_map {int rm_slots; int* rm_replay_slots; int rm_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_replay_map* FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ocfs2_super*,int,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ocfs2_super *VAR_4)
{
 struct ocfs2_replay_map *VAR_5;
 int VAR_6, VAR_7;


 if (VAR_4->replay_map)
  return 0;

 VAR_5 = FUNC_0(sizeof(struct ocfs2_replay_map) +
        (VAR_4->max_slots * sizeof(char)), VAR_2);

 if (!VAR_5) {
  FUNC_1(-VAR_1);
  return -VAR_1;
 }

 FUNC_3(&VAR_4->osb_lock);

 VAR_5->rm_slots = VAR_4->max_slots;
 VAR_5->rm_state = VAR_3;


 for (VAR_6 = 0; VAR_6 < VAR_5->rm_slots; VAR_6++) {
  if (FUNC_2(VAR_4, VAR_6, &VAR_7) == -VAR_0)
   VAR_5->rm_replay_slots[VAR_6] = 1;
 }

 VAR_4->replay_map = VAR_5;
 FUNC_4(&VAR_4->osb_lock);
 return 0;
}
