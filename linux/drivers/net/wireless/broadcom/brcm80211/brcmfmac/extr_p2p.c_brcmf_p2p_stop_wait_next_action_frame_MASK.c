
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcmf_p2p_info {int status; scalar_t__ af_sent_channel; TYPE_2__* bss_idx; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_cfg80211_info {struct brcmf_p2p_info p2p; } ;
struct TYPE_4__ {TYPE_1__* vif; } ;
struct TYPE_3__ {struct brcmf_if* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_cfg80211_info*,struct brcmf_if*,int,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct brcmf_cfg80211_info *VAR_6)
{
 struct brcmf_p2p_info *VAR_7 = &VAR_6->p2p;
 struct brcmf_if *VAR_8 = VAR_7->bss_idx[VAR_4].vif->ifp;

 if (FUNC_2(VAR_2, &VAR_7->status) &&
     (FUNC_2(VAR_0, &VAR_7->status) ||
      FUNC_2(VAR_1, &VAR_7->status))) {
  FUNC_0(VAR_5, "*** Wake UP ** abort actframe iovar\n");



  if (VAR_7->af_sent_channel)
   FUNC_1(VAR_6, VAR_8, 1, 1);
 } else if (FUNC_2(VAR_3,
       &VAR_7->status)) {
  FUNC_0(VAR_5, "*** Wake UP ** abort listen for next af frame\n");

  FUNC_1(VAR_6, VAR_8, 1, 1);
 }
}
