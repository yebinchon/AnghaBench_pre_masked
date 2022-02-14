
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int retry_short; int retry_long; int frag_threshold; int rts_threshold; } ;
struct wilc_priv {int dev; } ;
struct wilc_vif {int ndev; struct wilc_priv priv; } ;
struct wilc {int dummy; } ;
struct cfg_param_attr {int short_retry_limit; int long_retry_limit; int frag_threshold; int rts_threshold; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 struct wilc_vif* FUNC_2 (struct wilc*) ;
 int FUNC_3 (struct wilc_vif*,struct cfg_param_attr*) ;
 struct wilc* FUNC_4 (struct wiphy*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_9, u32 VAR_10)
{
 int VAR_11;
 struct cfg_param_attr VAR_12;
 struct wilc *VAR_13 = FUNC_4(VAR_9);
 struct wilc_vif *VAR_14;
 struct wilc_priv *VAR_15;

 VAR_14 = FUNC_2(VAR_13);
 if (!VAR_14)
  return -VAR_0;

 VAR_15 = &VAR_14->priv;
 VAR_12.flag = 0;

 if (VAR_10 & VAR_7) {
  FUNC_0(VAR_14->ndev,
      "Setting WIPHY_PARAM_RETRY_SHORT %d\n",
      VAR_9->retry_short);
  VAR_12.flag |= VAR_3;
  VAR_12.short_retry_limit = VAR_9->retry_short;
 }
 if (VAR_10 & VAR_6) {
  FUNC_0(VAR_14->ndev,
      "Setting WIPHY_PARAM_RETRY_LONG %d\n",
      VAR_9->retry_long);
  VAR_12.flag |= VAR_2;
  VAR_12.long_retry_limit = VAR_9->retry_long;
 }
 if (VAR_10 & VAR_5) {
  if (VAR_9->frag_threshold > 255 &&
      VAR_9->frag_threshold < 7937) {
   FUNC_0(VAR_14->ndev,
       "Setting WIPHY_PARAM_FRAG_THRESHOLD %d\n",
       VAR_9->frag_threshold);
   VAR_12.flag |= VAR_1;
   VAR_12.frag_threshold = VAR_9->frag_threshold;
  } else {
   FUNC_1(VAR_14->ndev,
       "Fragmentation threshold out of range\n");
   return -VAR_0;
  }
 }

 if (VAR_10 & VAR_8) {
  if (VAR_9->rts_threshold > 255) {
   FUNC_0(VAR_14->ndev,
       "Setting WIPHY_PARAM_RTS_THRESHOLD %d\n",
       VAR_9->rts_threshold);
   VAR_12.flag |= VAR_4;
   VAR_12.rts_threshold = VAR_9->rts_threshold;
  } else {
   FUNC_1(VAR_14->ndev, "RTS threshold out of range\n");
   return -VAR_0;
  }
 }

 VAR_11 = FUNC_3(VAR_14, &VAR_12);
 if (VAR_11)
  FUNC_1(VAR_15->dev, "Error in setting WIPHY PARAMS\n");

 return VAR_11;
}
