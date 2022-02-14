
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_scan_complete_event {int status; } ;
struct wmi {int is_probe_ssid; } ;
struct ath6kl_vif {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath6kl_vif*,int ) ;

__attribute__((used)) static int FUNC_2(struct wmi *VAR_0, u8 *VAR_1, int VAR_2,
           struct ath6kl_vif *VAR_3)
{
 struct wmi_scan_complete_event *VAR_4;

 VAR_4 = (struct wmi_scan_complete_event *) VAR_1;

 FUNC_1(VAR_3, FUNC_0(VAR_4->status));
 VAR_0->is_probe_ssid = 0;

 return 0;
}
