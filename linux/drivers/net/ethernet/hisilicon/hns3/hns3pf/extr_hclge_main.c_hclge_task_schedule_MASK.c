
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stats_timer; } ;
struct hclge_dev {int service_task; int affinity_mask; int fd_arfs_expire_timer; TYPE_1__ hw_stats; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *,unsigned long) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct hclge_dev *VAR_4, unsigned long VAR_5)
{
 if (!FUNC_3(VAR_0, &VAR_4->state) &&
     !FUNC_3(VAR_1, &VAR_4->state) &&
     !FUNC_2(VAR_2, &VAR_4->state)) {
  VAR_4->hw_stats.stats_timer++;
  VAR_4->fd_arfs_expire_timer++;
  FUNC_1(FUNC_0(&VAR_4->affinity_mask),
        VAR_3, &VAR_4->service_task,
        VAR_5);
 }
}
