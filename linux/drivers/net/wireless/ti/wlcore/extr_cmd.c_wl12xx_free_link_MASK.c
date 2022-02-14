
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {size_t bcast_hlid; } ;
struct wl12xx_vif {scalar_t__ bss_type; scalar_t__ encryption_type; scalar_t__ total_freed_pkts; TYPE_1__ ap; int links_map; } ;
struct wl1271 {scalar_t__ active_link_count; TYPE_2__* links; int flags; int wl_lock; int links_map; } ;
struct TYPE_4__ {scalar_t__ total_freed_pkts; int * wlvif; int addr; scalar_t__ ba_bitmap; scalar_t__ prev_freed_pkts; scalar_t__ allocated_pkts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct wl1271*,size_t) ;

void FUNC_7(struct wl1271 *VAR_6, struct wl12xx_vif *VAR_7, u8 *VAR_8)
{
 unsigned long VAR_9;

 if (*VAR_8 == VAR_5)
  return;


 FUNC_3(&VAR_6->wl_lock, VAR_9);
 FUNC_1(*VAR_8, VAR_6->links_map);
 FUNC_1(*VAR_8, VAR_7->links_map);
 FUNC_4(&VAR_6->wl_lock, VAR_9);

 VAR_6->links[*VAR_8].allocated_pkts = 0;
 VAR_6->links[*VAR_8].prev_freed_pkts = 0;
 VAR_6->links[*VAR_8].ba_bitmap = 0;
 FUNC_2(VAR_6->links[*VAR_8].addr);





 FUNC_6(VAR_6, *VAR_8);
 VAR_6->links[*VAR_8].wlvif = ((void*)0);

 if (VAR_7->bss_type == VAR_0 &&
     *VAR_8 == VAR_7->ap.bcast_hlid) {
  u32 VAR_10 = VAR_3;




  VAR_7->total_freed_pkts = VAR_6->links[*VAR_8].total_freed_pkts;





  if (VAR_7->encryption_type == VAR_1)
   VAR_10 = VAR_4;

  if (FUNC_5(VAR_2, &VAR_6->flags))
   VAR_7->total_freed_pkts += VAR_10;
 }

 VAR_6->links[*VAR_8].total_freed_pkts = 0;

 *VAR_8 = VAR_5;
 VAR_6->active_link_count--;
 FUNC_0(VAR_6->active_link_count < 0);
}
