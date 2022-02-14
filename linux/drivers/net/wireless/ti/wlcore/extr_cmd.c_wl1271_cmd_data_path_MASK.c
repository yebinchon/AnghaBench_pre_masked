
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl1271 {int dummy; } ;
struct cmd_enabledisable_path {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cmd_enabledisable_path*) ;
 struct cmd_enabledisable_path* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct cmd_enabledisable_path*,int,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,char*,int) ;

int FUNC_5(struct wl1271 *VAR_8, bool VAR_9)
{
 struct cmd_enabledisable_path *VAR_10;
 int VAR_11;
 u16 VAR_12, VAR_13;

 FUNC_3(VAR_5, "cmd data path");

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_7);
 if (!VAR_10) {
  VAR_11 = -VAR_6;
  goto out;
 }


 VAR_10->channel = 1;

 if (VAR_9) {
  VAR_12 = VAR_2;
  VAR_13 = VAR_3;
 } else {
  VAR_12 = VAR_0;
  VAR_13 = VAR_1;
 }

 VAR_11 = FUNC_2(VAR_8, VAR_12, VAR_10, sizeof(*VAR_10), 0);
 if (VAR_11 < 0) {
  FUNC_4("rx %s cmd for channel %d failed",
        VAR_9 ? "start" : "stop", VAR_10->channel);
  goto out;
 }

 FUNC_3(VAR_4, "rx %s cmd channel %d",
       VAR_9 ? "start" : "stop", VAR_10->channel);

 VAR_11 = FUNC_2(VAR_8, VAR_13, VAR_10, sizeof(*VAR_10), 0);
 if (VAR_11 < 0) {
  FUNC_4("tx %s cmd for channel %d failed",
        VAR_9 ? "start" : "stop", VAR_10->channel);
  goto out;
 }

 FUNC_3(VAR_4, "tx %s cmd channel %d",
       VAR_9 ? "start" : "stop", VAR_10->channel);

out:
 FUNC_0(VAR_10);
 return VAR_11;
}
