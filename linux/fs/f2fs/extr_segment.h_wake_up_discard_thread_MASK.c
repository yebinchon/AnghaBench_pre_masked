
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct discard_cmd_control {int discard_granularity; int discard_wake; int discard_wait_queue; int cmd_lock; int * pend_list; } ;
struct TYPE_2__ {struct discard_cmd_control* dcc_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void FUNC_6(struct f2fs_sb_info *VAR_2, bool VAR_3)
{
 struct discard_cmd_control *VAR_4 = FUNC_0(VAR_2)->dcc_info;
 bool VAR_5 = 0;
 int VAR_6;

 if (VAR_3)
  goto wake_up;

 FUNC_3(&VAR_4->cmd_lock);
 for (VAR_6 = VAR_1 - 1; VAR_6 >= 0; VAR_6--) {
  if (VAR_6 + 1 < VAR_4->discard_granularity)
   break;
  if (!FUNC_2(&VAR_4->pend_list[VAR_6])) {
   VAR_5 = 1;
   break;
  }
 }
 FUNC_4(&VAR_4->cmd_lock);
 if (!VAR_5 || !FUNC_1(VAR_2, VAR_0))
  return;
wake_up:
 VAR_4->discard_wake = 1;
 FUNC_5(&VAR_4->discard_wait_queue);
}
