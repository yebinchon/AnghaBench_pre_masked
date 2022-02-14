
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {int * idle_ws; int active_map; int lru_list; int timer; int wait; int lock; int * ops; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct list_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct list_head*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 TYPE_1__ VAR_2 ;
 struct list_head* FUNC_8 (int) ;
 int FUNC_9 () ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(void)
{
 struct list_head *VAR_4;
 int VAR_5;

 FUNC_9();

 VAR_2.ops = &VAR_1;
 FUNC_6(&VAR_2.lock);
 FUNC_2(&VAR_2.wait);
 FUNC_7(&VAR_2.timer, VAR_3, 0);

 FUNC_0(&VAR_2.lru_list);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_0(&VAR_2.idle_ws[VAR_5]);

 VAR_4 = FUNC_8(VAR_0);
 if (FUNC_1(VAR_4)) {
  FUNC_4(
  "BTRFS: cannot preallocate zstd compression workspace\n");
 } else {
  FUNC_5(VAR_0 - 1, &VAR_2.active_map);
  FUNC_3(VAR_4, &VAR_2.idle_ws[VAR_0 - 1]);
 }
}
