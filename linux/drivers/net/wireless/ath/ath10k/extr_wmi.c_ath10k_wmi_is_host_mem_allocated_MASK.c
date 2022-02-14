
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wlan_host_mem_req {int num_unit_info; int unit_size; int num_units; int req_id; } ;
struct TYPE_4__ {int num_mem_chunks; TYPE_1__* mem_chunks; } ;
struct ath10k {int num_active_peers; int max_num_peers; int max_num_vdevs; TYPE_2__ wmi; } ;
struct TYPE_3__ {int req_id; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static bool
FUNC_2(struct ath10k *VAR_3,
     const struct wlan_host_mem_req **VAR_4,
     u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11, VAR_12;
 bool VAR_13;

 if (VAR_3->wmi.num_mem_chunks != VAR_5)
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_5; ++VAR_11) {
  VAR_6 = FUNC_0(VAR_4[VAR_11]->req_id);
  VAR_7 = FUNC_0(VAR_4[VAR_11]->num_units);
  VAR_8 = FUNC_0(VAR_4[VAR_11]->unit_size);
  VAR_9 = FUNC_0(VAR_4[VAR_11]->num_unit_info);

  if (VAR_9 & VAR_0) {
   if (VAR_3->num_active_peers)
    VAR_7 = VAR_3->num_active_peers + 1;
   else
    VAR_7 = VAR_3->max_num_peers + 1;
  } else if (VAR_9 & VAR_1) {
   VAR_7 = VAR_3->max_num_peers + 1;
  } else if (VAR_9 & VAR_2) {
   VAR_7 = VAR_3->max_num_vdevs + 1;
  }

  VAR_13 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_3->wmi.num_mem_chunks; VAR_12++) {
   if (VAR_3->wmi.mem_chunks[VAR_12].req_id == VAR_6) {
    VAR_10 = VAR_7 * FUNC_1(VAR_8, 4);
    if (VAR_3->wmi.mem_chunks[VAR_12].len == VAR_10) {
     VAR_13 = 1;
     break;
    }
   }
  }
  if (!VAR_13)
   return 0;
 }

 return 1;
}
