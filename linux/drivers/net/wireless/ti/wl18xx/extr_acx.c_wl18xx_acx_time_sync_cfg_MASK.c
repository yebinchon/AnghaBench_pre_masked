
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * params; } ;
struct TYPE_4__ {TYPE_1__ sg; } ;
struct wl1271 {int zone_master_mac_addr; TYPE_2__ conf; } ;
struct acx_time_sync_cfg {int zone_mac_addr; int sync_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct acx_time_sync_cfg*) ;
 struct acx_time_sync_cfg* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_time_sync_cfg*,int) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_6)
{
 struct acx_time_sync_cfg *VAR_7;
 int VAR_8;

 FUNC_4(VAR_1, "acx time sync cfg: mode %d, addr: %pM",
       VAR_6->conf.sg.params[VAR_5],
       VAR_6->zone_master_mac_addr);

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_4);
 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_7->sync_mode = VAR_6->conf.sg.params[VAR_5];
 FUNC_2(VAR_7->zone_mac_addr, VAR_6->zone_master_mac_addr, VAR_3);

 VAR_8 = FUNC_3(VAR_6, VAR_0,
       VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_5("acx time sync cfg failed: %d", VAR_8);
  goto out;
 }
out:
 FUNC_0(VAR_7);
 return VAR_8;
}
