
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cw1200_link_entry {scalar_t__ status; unsigned long timestamp; int rx_queue; int buffered; int mac; } ;
struct TYPE_3__ {int * link_map_cache; } ;
struct cw1200_common {int ps_state_lock; TYPE_2__* hw; int link_id_work; int workqueue; struct cw1200_link_entry* link_id_db; TYPE_1__ tx_queue_stats; } ;
struct TYPE_4__ {int wiphy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int *,int const*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct cw1200_common*) ;
 int FUNC_9 (struct cw1200_common*) ;

int FUNC_10(struct cw1200_common *VAR_6, const u8 *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 unsigned long VAR_10 = 0;
 unsigned long VAR_11 = VAR_5;

 FUNC_5(&VAR_6->ps_state_lock);
 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  if (!VAR_6->link_id_db[VAR_8].status) {
   VAR_9 = VAR_8 + 1;
   break;
  } else if (VAR_6->link_id_db[VAR_8].status != VAR_0 &&
      !VAR_6->tx_queue_stats.link_map_cache[VAR_8 + 1]) {
   unsigned long VAR_12 =
    VAR_11 - VAR_6->link_id_db[VAR_8].timestamp;
   if (VAR_12 < VAR_10)
    continue;
   VAR_10 = VAR_12;
   VAR_9 = VAR_8 + 1;
  }
 }
 if (VAR_9) {
  struct cw1200_link_entry *VAR_13 = &VAR_6->link_id_db[VAR_9 - 1];
  FUNC_2("[AP] STA added, link_id: %d\n", VAR_9);
  VAR_13->status = VAR_1;
  FUNC_0(&VAR_13->mac, VAR_7, VAR_4);
  FUNC_1(&VAR_13->buffered, 0, VAR_3);
  FUNC_4(&VAR_13->rx_queue);
  FUNC_8(VAR_6);
  if (FUNC_3(VAR_6->workqueue, &VAR_6->link_id_work) <= 0)
   FUNC_9(VAR_6);
 } else {
  FUNC_7(VAR_6->hw->wiphy,
      "[AP] Early: no more link IDs available.\n");
 }

 FUNC_6(&VAR_6->ps_state_lock);
 return VAR_9;
}
