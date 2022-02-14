
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct wl12xx_vif {scalar_t__ bss_type; int total_freed_pkts; int links_map; } ;
struct wl1271 {size_t num_links; int active_link_count; TYPE_3__* links; TYPE_2__* fw_status; int wl_lock; int links_map; int * session_ids; } ;
struct TYPE_6__ {int total_freed_pkts; struct wl12xx_vif* wlvif; int prev_freed_pkts; } ;
struct TYPE_4__ {int * tx_lnk_free_pkts; } ;
struct TYPE_5__ {TYPE_1__ counters; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (int ,size_t) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct wl1271*,size_t) ;

int FUNC_5(struct wl1271 *VAR_2, struct wl12xx_vif *VAR_3, u8 *VAR_4)
{
 unsigned long VAR_5;
 u8 VAR_6 = FUNC_1(VAR_2->links_map, VAR_2->num_links);
 if (VAR_6 >= VAR_2->num_links)
  return -VAR_1;

 VAR_2->session_ids[VAR_6] = FUNC_4(VAR_2, VAR_6);


 FUNC_2(&VAR_2->wl_lock, VAR_5);
 FUNC_0(VAR_6, VAR_2->links_map);
 FUNC_0(VAR_6, VAR_3->links_map);
 FUNC_3(&VAR_2->wl_lock, VAR_5);






 if (VAR_2->fw_status->counters.tx_lnk_free_pkts)
  VAR_2->links[VAR_6].prev_freed_pkts =
   VAR_2->fw_status->counters.tx_lnk_free_pkts[VAR_6];
 VAR_2->links[VAR_6].wlvif = VAR_3;





 if (VAR_3->bss_type != VAR_0)
  VAR_2->links[VAR_6].total_freed_pkts = VAR_3->total_freed_pkts;

 *VAR_4 = VAR_6;

 VAR_2->active_link_count++;
 return 0;
}
