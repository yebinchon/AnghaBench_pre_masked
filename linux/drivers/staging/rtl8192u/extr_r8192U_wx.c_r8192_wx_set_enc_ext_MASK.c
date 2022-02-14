
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_point {int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
typedef int u8 ;
typedef int u32 ;
struct r8192_priv {int wx_mutex; struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {scalar_t__ alg; int ext_flags; int key_len; int key; } ;
struct ieee80211_device {scalar_t__ iw_mode; int pairwise_key_type; int auth_mode; int group_key_type; scalar_t__ ap_mac_addr; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ieee80211_device*,struct iw_request_info*,union iwreq_data*,char*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,int,int,int,int*,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_9,
     struct iw_request_info *VAR_10,
     union iwreq_data *VAR_11, char *VAR_12)
{
 int VAR_13 = 0;
 struct r8192_priv *VAR_14 = FUNC_1(VAR_9);
 struct ieee80211_device *VAR_15 = VAR_14->ieee80211;


 FUNC_4(&VAR_14->wx_mutex);
 VAR_13 = FUNC_2(VAR_14->ieee80211, VAR_10, VAR_11, VAR_12);

 {
  u8 VAR_16[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
  u8 VAR_17[6] = {0};
  u32 VAR_18[4] = {0};
  struct iw_encode_ext *VAR_19 = (struct iw_encode_ext *)VAR_12;
  struct iw_point *VAR_20 = &VAR_11->encoding;
  u8 VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;

  if ((VAR_20->flags & VAR_2) || VAR_19->alg == VAR_1)

   goto end_hw_sec;


  VAR_22 = (VAR_19->alg == VAR_0)?VAR_6:VAR_19->alg;
  VAR_21 = VAR_20->flags & VAR_4;
  if (VAR_21)
   VAR_21--;
  VAR_23 = VAR_19->ext_flags & VAR_3;

  if ((!VAR_23) || (VAR_5 == VAR_15->iw_mode) || (VAR_22 == VAR_8)) {
   if ((VAR_19->key_len == 13) && (VAR_22 == VAR_8))
    VAR_22 = VAR_7;
   VAR_15->pairwise_key_type = VAR_22;
   FUNC_0(VAR_9);
  }
  FUNC_3((u8 *)VAR_18, VAR_19->key, 16);

  if ((VAR_22 & VAR_8) && (VAR_15->auth_mode != 2)) {

   FUNC_6(VAR_9,
     VAR_21,
     VAR_21,
     VAR_22,
     VAR_17,
     0,
     VAR_18);
  } else if (VAR_23) {
   VAR_15->group_key_type = VAR_22;
   FUNC_6(VAR_9,
     VAR_21,
     VAR_21,
     VAR_22,
     VAR_16,
     0,
     VAR_18);
  } else {
   FUNC_6(VAR_9,
     4,
     VAR_21,
     VAR_22,
     (u8 *)VAR_15->ap_mac_addr,
     0,
     VAR_18);
  }


 }

end_hw_sec:

 FUNC_5(&VAR_14->wx_mutex);
 return VAR_13;

}
