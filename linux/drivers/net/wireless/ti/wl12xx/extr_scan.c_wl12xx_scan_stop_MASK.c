
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {int dummy; } ;
struct wl1271_cmd_header {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct wl1271 {TYPE_1__ scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct wl1271_cmd_header*) ;
 struct wl1271_cmd_header* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_cmd_header*,int,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct wl1271 *VAR_6, struct wl12xx_vif *VAR_7)
{
 struct wl1271_cmd_header *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (FUNC_0(VAR_6->scan.state == VAR_5))
  return -VAR_2;

 FUNC_4(VAR_1, "cmd scan stop");

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_4);
 if (!VAR_8) {
  VAR_9 = -VAR_3;
  goto out;
 }

 VAR_9 = FUNC_3(VAR_6, VAR_0, VAR_8,
         sizeof(*VAR_8), 0);
 if (VAR_9 < 0) {
  FUNC_5("cmd stop_scan failed");
  goto out;
 }
out:
 FUNC_1(VAR_8);
 return VAR_9;
}
