
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wl1251 {int dummy; } ;
struct cmd_enabledisable_path {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cmd_enabledisable_path*) ;
 struct cmd_enabledisable_path* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct cmd_enabledisable_path*,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,char*,int ) ;

int FUNC_5(struct wl1251 *VAR_6, u8 VAR_7, bool VAR_8)
{
 struct cmd_enabledisable_path *VAR_9;
 int VAR_10;
 u16 VAR_11;

 FUNC_3(VAR_3, "cmd data path");

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_5);
 if (!VAR_9) {
  VAR_10 = -VAR_4;
  goto out;
 }

 VAR_9->channel = VAR_7;

 if (VAR_8)
  VAR_11 = VAR_1;
 else
  VAR_11 = VAR_0;

 VAR_10 = FUNC_2(VAR_6, VAR_11, VAR_9, sizeof(*VAR_9));
 if (VAR_10 < 0) {
  FUNC_4("rx %s cmd for channel %d failed",
        VAR_8 ? "start" : "stop", VAR_7);
  goto out;
 }

 FUNC_3(VAR_2, "rx %s cmd channel %d",
       VAR_8 ? "start" : "stop", VAR_7);

out:
 FUNC_0(VAR_9);
 return VAR_10;
}
