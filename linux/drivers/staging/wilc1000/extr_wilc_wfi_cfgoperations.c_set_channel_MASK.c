
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wiphy {int dummy; } ;
struct wilc_vif {int ndev; } ;
struct wilc {int vif_mutex; int op_ch; } ;
struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct TYPE_2__ {int center_freq; } ;


 scalar_t__ FUNC_0 (struct wilc_vif*) ;
 int FUNC_1 (struct wilc_vif*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 struct wilc_vif* FUNC_6 (struct wilc*) ;
 int FUNC_7 (struct wilc_vif*,int ) ;
 struct wilc* FUNC_8 (struct wiphy*) ;

__attribute__((used)) static int FUNC_9(struct wiphy *VAR_0,
         struct cfg80211_chan_def *VAR_1)
{
 struct wilc *VAR_2 = FUNC_8(VAR_0);
 struct wilc_vif *VAR_3;
 u32 VAR_4;
 int VAR_5;

 FUNC_3(&VAR_2->vif_mutex);
 VAR_3 = FUNC_6(VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_4(&VAR_2->vif_mutex);
  return FUNC_1(VAR_3);
 }

 VAR_4 = FUNC_2(VAR_1->chan->center_freq);

 VAR_2->op_ch = VAR_4;
 VAR_5 = FUNC_7(VAR_3, VAR_4);
 if (VAR_5)
  FUNC_5(VAR_3->ndev, "Error in setting channel\n");

 FUNC_4(&VAR_2->vif_mutex);
 return VAR_5;
}
