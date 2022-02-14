
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {int sta_lock; TYPE_2__* stations; } ;
struct iwl_addsta_cmd {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_4__ {size_t const* addr; } ;
struct TYPE_6__ {TYPE_1__ sta; } ;
struct TYPE_5__ {int used; TYPE_3__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,size_t,size_t const*) ;
 int FUNC_1 (struct iwl_priv*,char*,size_t) ;
 int FUNC_2 (struct iwl_priv*,char*,size_t const*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_3 (struct iwl_priv*,struct iwl_rxon_context*,size_t const*,int,struct ieee80211_sta*) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_addsta_cmd*,int ) ;
 int FUNC_5 (struct iwl_addsta_cmd*,TYPE_3__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct iwl_priv *VAR_6, struct iwl_rxon_context *VAR_7,
      const u8 *VAR_8, bool VAR_9,
      struct ieee80211_sta *VAR_10, u8 *VAR_11)
{
 int VAR_12 = 0;
 u8 VAR_13;
 struct iwl_addsta_cmd VAR_14;

 *VAR_11 = 0;
 FUNC_6(&VAR_6->sta_lock);
 VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_13 == VAR_2) {
  FUNC_2(VAR_6, "Unable to prepare station %pM for addition\n",
   VAR_8);
  FUNC_7(&VAR_6->sta_lock);
  return -VAR_1;
 }






 if (VAR_6->stations[VAR_13].used & VAR_5) {
  FUNC_1(VAR_6, "STA %d already in process of being "
          "added.\n", VAR_13);
  FUNC_7(&VAR_6->sta_lock);
  return -VAR_0;
 }

 if ((VAR_6->stations[VAR_13].used & VAR_3) &&
     (VAR_6->stations[VAR_13].used & VAR_4)) {
  FUNC_0(VAR_6, "STA %d (%pM) already added, not "
    "adding again.\n", VAR_13, VAR_8);
  FUNC_7(&VAR_6->sta_lock);
  return -VAR_0;
 }

 VAR_6->stations[VAR_13].used |= VAR_5;
 FUNC_5(&VAR_14, &VAR_6->stations[VAR_13].sta,
        sizeof(struct iwl_addsta_cmd));
 FUNC_7(&VAR_6->sta_lock);


 VAR_12 = FUNC_4(VAR_6, &VAR_14, 0);
 if (VAR_12) {
  FUNC_6(&VAR_6->sta_lock);
  FUNC_2(VAR_6, "Adding station %pM failed.\n",
   VAR_6->stations[VAR_13].sta.sta.addr);
  VAR_6->stations[VAR_13].used &= ~VAR_3;
  VAR_6->stations[VAR_13].used &= ~VAR_5;
  FUNC_7(&VAR_6->sta_lock);
 }
 *VAR_11 = VAR_13;
 return VAR_12;
}
