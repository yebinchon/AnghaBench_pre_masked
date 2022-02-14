
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wsm_operational_mode {int disable_more_flag_usage; int power_mode; } ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct hwbus_priv {int dummy; } ;
struct hwbus_ops {int dummy; } ;
struct device {int dummy; } ;
struct cw1200_common {int hw_refclk; char* sdd_path; int firmware_ready; int wsm_startup_done; int hw; struct device* pdev; struct hwbus_priv* hwbus_priv; struct hwbus_ops const* hwbus_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct device*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_2 (int const*,int) ;
 int FUNC_3 (struct cw1200_common*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 char* VAR_5 ;
 int FUNC_6 (struct cw1200_common*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct cw1200_common*,struct wsm_operational_mode*) ;
 int FUNC_10 (struct cw1200_common*,int) ;

int FUNC_11(const struct hwbus_ops *VAR_6,
        struct hwbus_priv *VAR_7,
        struct device *VAR_8,
        struct cw1200_common **VAR_9,
        int VAR_10, const u8 *VAR_11,
        const char *VAR_12, bool VAR_13)
{
 int VAR_14 = -VAR_0;
 struct ieee80211_hw *VAR_15;
 struct cw1200_common *VAR_16;
 struct wsm_operational_mode VAR_17 = {
  .power_mode = VAR_3,
  .disable_more_flag_usage = 1,
 };

 VAR_15 = FUNC_2(VAR_11, VAR_13);
 if (!VAR_15)
  goto err;

 VAR_16 = VAR_15->priv;
 VAR_16->hw_refclk = VAR_10;
 if (VAR_4)
  VAR_16->hw_refclk = VAR_4;

 VAR_16->sdd_path = (char *)VAR_12;
 if (VAR_5)
  VAR_16->sdd_path = VAR_5;

 VAR_16->hwbus_ops = VAR_6;
 VAR_16->hwbus_priv = VAR_7;
 VAR_16->pdev = VAR_8;
 FUNC_0(VAR_16->hw, VAR_8);


 *VAR_9 = VAR_16;

 VAR_14 = FUNC_4(VAR_16);
 if (VAR_14)
  goto err1;

 VAR_14 = FUNC_3(VAR_16);
 if (VAR_14)
  goto err2;

 if (FUNC_8(VAR_16->wsm_startup_done,
          VAR_16->firmware_ready,
          3*VAR_2) <= 0) {



  FUNC_7("Timeout waiting on device startup\n");
  VAR_14 = -VAR_1;
  goto err2;
 }


 FUNC_9(VAR_16, &VAR_17);


 FUNC_10(VAR_16, 1);

 VAR_14 = FUNC_5(VAR_15);
 if (VAR_14)
  goto err2;

 return VAR_14;

err2:
 FUNC_6(VAR_16);
err1:
 FUNC_1(VAR_15);
err:
 *VAR_9 = ((void*)0);
 return VAR_14;
}
