
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcmf_pub {int dummy; } ;
struct brcmf_p2p_info {int status; TYPE_2__* bss_idx; TYPE_1__* cfg; } ;
struct brcmf_cfg80211_vif {int ifp; } ;
typedef int s32 ;
struct TYPE_4__ {struct brcmf_cfg80211_vif* vif; } ;
struct TYPE_3__ {struct brcmf_pub* pub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct brcmf_pub*,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct brcmf_p2p_info *VAR_8)
{
 struct brcmf_pub *VAR_9 = VAR_8->cfg->pub;
 struct brcmf_cfg80211_vif *VAR_10;
 s32 VAR_11 = 0;

 FUNC_1(VAR_6, "enter\n");
 VAR_10 = VAR_8->bss_idx[VAR_4].vif;
 if (!VAR_10) {
  FUNC_0(VAR_9, "P2P config device not available\n");
  VAR_11 = -VAR_2;
  goto exit;
 }

 if (FUNC_6(VAR_1, &VAR_8->status)) {
  FUNC_1(VAR_3, "P2P config device already configured\n");
  goto exit;
 }


 VAR_10 = VAR_8->bss_idx[VAR_5].vif;
 VAR_11 = FUNC_3(VAR_10->ifp, "p2p_disc", 1);
 if (VAR_11 < 0) {
  FUNC_0(VAR_9, "set p2p_disc error\n");
  goto exit;
 }
 VAR_10 = VAR_8->bss_idx[VAR_4].vif;
 VAR_11 = FUNC_4(VAR_10->ifp, VAR_7, 0, 0);
 if (VAR_11 < 0) {
  FUNC_0(VAR_9, "unable to set WL_P2P_DISC_ST_SCAN\n");
  goto exit;
 }







 VAR_11 = FUNC_2(VAR_10->ifp, "wsec", VAR_0);
 if (VAR_11 < 0) {
  FUNC_0(VAR_9, "wsec error %d\n", VAR_11);
  goto exit;
 }

 FUNC_5(VAR_1, &VAR_8->status);
exit:
 return VAR_11;
}
