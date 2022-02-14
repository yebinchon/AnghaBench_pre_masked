
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct brcmu_chan {int chspec; int bw; int chnum; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_p2p_info {int remain_on_channel_cookie; int status; TYPE_3__* cfg; TYPE_1__* bss_idx; } ;
struct brcmf_cfg80211_vif {int ifp; } ;
typedef int s32 ;
struct TYPE_5__ {int (* encchspec ) (struct brcmu_chan*) ;} ;
struct TYPE_6__ {TYPE_2__ d11inf; struct brcmf_pub* pub; } ;
struct TYPE_4__ {struct brcmf_cfg80211_vif* vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct brcmu_chan*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static s32
FUNC_5(struct brcmf_p2p_info *VAR_5, u16 VAR_6, u32 VAR_7)
{
 struct brcmf_pub *VAR_8 = VAR_5->cfg->pub;
 struct brcmf_cfg80211_vif *VAR_9;
 struct brcmu_chan VAR_10;
 s32 VAR_11 = 0;

 VAR_9 = VAR_5->bss_idx[VAR_3].vif;
 if (!VAR_9) {
  FUNC_0(VAR_8, "Discovery is not set, so we have nothing to do\n");
  VAR_11 = -VAR_2;
  goto exit;
 }

 if (FUNC_4(VAR_0, &VAR_5->status)) {
  FUNC_0(VAR_8, "Previous LISTEN is not completed yet\n");

  goto exit;
 }

 VAR_10.chnum = VAR_6;
 VAR_10.bw = VAR_1;
 VAR_5->cfg->d11inf.encchspec(&VAR_10);
 VAR_11 = FUNC_1(VAR_9->ifp, VAR_4,
        VAR_10.chspec, (u16)VAR_7);
 if (!VAR_11) {
  FUNC_2(VAR_0, &VAR_5->status);
  VAR_5->remain_on_channel_cookie++;
 }
exit:
 return VAR_11;
}
