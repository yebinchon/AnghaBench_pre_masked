
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct mwifiex_user_scan_chan {int dummy; } ;
struct mwifiex_user_scan_cfg {int ssid_list; int num_ssids; int random_mac; int * chan_list; } ;
struct mwifiex_private {struct mwifiex_adapter* adapter; TYPE_2__* hidden_chan; TYPE_1__* scan_request; scalar_t__ scan_aborting; } ;
struct mwifiex_adapter {int active_scan_triggered; int dev; } ;
struct TYPE_5__ {int chan_number; } ;
struct TYPE_4__ {int flags; int ssids; int n_ssids; int mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mwifiex_user_scan_cfg*) ;
 struct mwifiex_user_scan_cfg* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__**,int ,int) ;
 int FUNC_6 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_7 (struct mwifiex_private*,struct mwifiex_user_scan_cfg*) ;

__attribute__((used)) static int
FUNC_8(struct mwifiex_private *VAR_5)
{
 int VAR_6;
 struct mwifiex_adapter *VAR_7 = VAR_5->adapter;
 u8 VAR_8 = 0;
 struct mwifiex_user_scan_cfg *VAR_9;

 if (VAR_7->active_scan_triggered || !VAR_5->scan_request ||
     VAR_5->scan_aborting) {
  VAR_7->active_scan_triggered = 0;
  return 0;
 }

 if (!VAR_5->hidden_chan[0].chan_number) {
  FUNC_6(VAR_7, VAR_2, "No BSS with hidden SSID found on DFS channels\n");
  return 0;
 }
 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);

 if (!VAR_9)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (!VAR_5->hidden_chan[VAR_8].chan_number)
   break;
  FUNC_4(&VAR_9->chan_list[VAR_8],
         &VAR_5->hidden_chan[VAR_8],
         sizeof(struct mwifiex_user_scan_chan));
 }

 VAR_7->active_scan_triggered = 1;
 if (VAR_5->scan_request->flags & VAR_4)
  FUNC_1(VAR_9->random_mac,
    VAR_5->scan_request->mac_addr);
 VAR_9->num_ssids = VAR_5->scan_request->n_ssids;
 VAR_9->ssid_list = VAR_5->scan_request->ssids;

 VAR_6 = FUNC_7(VAR_5, VAR_9);
 FUNC_2(VAR_9);

 FUNC_5(&VAR_5->hidden_chan, 0, sizeof(VAR_5->hidden_chan));

 if (VAR_6) {
  FUNC_0(VAR_5->adapter->dev, "scan failed: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
