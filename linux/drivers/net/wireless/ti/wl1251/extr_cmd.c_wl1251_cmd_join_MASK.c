
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct wl1251 {scalar_t__* bssid; int rx_filter; int rx_config; } ;
struct cmd_join {int basic_rate_set; int ctrl; scalar_t__ channel; scalar_t__ bss_type; scalar_t__ dtim_interval; int beacon_interval; int rx_filter_options; int rx_config_options; int bssid_lsb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct cmd_join*) ;
 struct cmd_join* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct cmd_join*,int) ;
 int FUNC_3 (int ,char*,char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1251 *VAR_11, u8 VAR_12, u8 VAR_13,
      u16 VAR_14, u8 VAR_15)
{
 struct cmd_join *VAR_16;
 int VAR_17, VAR_18;
 u8 *VAR_19;

 VAR_16 = FUNC_1(sizeof(*VAR_16), VAR_5);
 if (!VAR_16) {
  VAR_17 = -VAR_3;
  goto out;
 }

 FUNC_3(VAR_2, "cmd join%s ch %d %d/%d",
       VAR_12 == VAR_0 ? " ibss" : "",
       VAR_13, VAR_14, VAR_15);


 VAR_19 = (u8 *) &VAR_16->bssid_lsb;
 for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++)
  VAR_19[VAR_18] = VAR_11->bssid[VAR_4 - VAR_18 - 1];

 VAR_16->rx_config_options = VAR_11->rx_config;
 VAR_16->rx_filter_options = VAR_11->rx_filter;

 VAR_16->basic_rate_set = VAR_8 | VAR_9 |
  VAR_10 | VAR_7;

 VAR_16->beacon_interval = VAR_14;
 VAR_16->dtim_interval = VAR_15;
 VAR_16->bss_type = VAR_12;
 VAR_16->channel = VAR_13;
 VAR_16->ctrl = VAR_6;

 VAR_17 = FUNC_2(VAR_11, VAR_1, VAR_16, sizeof(*VAR_16));
 if (VAR_17 < 0) {
  FUNC_4("failed to initiate cmd join");
  goto out;
 }

out:
 FUNC_0(VAR_16);
 return VAR_17;
}
