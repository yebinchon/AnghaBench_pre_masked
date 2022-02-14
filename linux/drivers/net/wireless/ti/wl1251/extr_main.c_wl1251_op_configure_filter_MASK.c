
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct wl1251_filter_params {int enabled; int mc_list_length; int * mc_list; } ;
struct wl1251 {scalar_t__ state; int mutex; int rx_filter; int rx_config; int bssid; } ;
struct ieee80211_hw {struct wl1251* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct wl1251_filter_params*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wl1251*,int,int *,int ) ;
 int FUNC_5 (struct wl1251*,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct wl1251*) ;
 int FUNC_8 (struct wl1251*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_17,
           unsigned int VAR_18,
           unsigned int *VAR_19, u64 VAR_20)
{
 struct wl1251_filter_params *VAR_21 = (void *)(unsigned long)VAR_20;
 struct wl1251 *VAR_22 = VAR_17->priv;
 int VAR_23;

 FUNC_6(VAR_6, "mac80211 configure filter");

 *VAR_19 &= VAR_16;
 VAR_18 &= VAR_16;

 if (VAR_18 == 0) {

  FUNC_1(VAR_21);
  return;
 }

 FUNC_2(&VAR_22->mutex);

 VAR_22->rx_config = VAR_13;
 VAR_22->rx_filter = VAR_14;

 if (*VAR_19 & VAR_7)




  VAR_22->rx_config &= ~VAR_1;
 if (*VAR_19 & VAR_10)
  VAR_22->rx_filter |= VAR_3;
 if (*VAR_19 & VAR_8) {
  VAR_22->rx_config &= ~VAR_0;
  VAR_22->rx_config &= ~VAR_5;
 }
 if (*VAR_19 & VAR_9)
  VAR_22->rx_filter |= VAR_2;
 if (*VAR_19 & VAR_11 || FUNC_0(VAR_22->bssid))
  VAR_22->rx_config &= ~VAR_0;
 if (*VAR_19 & VAR_12)
  VAR_22->rx_filter |= VAR_4;

 if (VAR_22->state == VAR_15)
  goto out;

 VAR_23 = FUNC_8(VAR_22);
 if (VAR_23 < 0)
  goto out;

 if (*VAR_19 & VAR_7)
  VAR_23 = FUNC_4(VAR_22, 0, ((void*)0), 0);
 else if (VAR_21)
  VAR_23 = FUNC_4(VAR_22, VAR_21->enabled,
         VAR_21->mc_list,
         VAR_21->mc_list_length);
 if (VAR_23 < 0)
  goto out;


 FUNC_5(VAR_22, VAR_22->rx_config, VAR_22->rx_filter);

 FUNC_7(VAR_22);

out:
 FUNC_3(&VAR_22->mutex);
 FUNC_1(VAR_21);
}
