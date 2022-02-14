
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cfg80211_wowlan_nd_match {int dummy; } ;
struct TYPE_4__ {void* escan_buf; } ;
struct TYPE_3__ {void* nd_info; void* nd; } ;
struct brcmf_cfg80211_info {TYPE_2__ escan_info; TYPE_1__ wowl; void* extra_buf; void* conf; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmf_cfg80211_info*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static s32 FUNC_2(struct brcmf_cfg80211_info *VAR_4)
{
 VAR_4->conf = FUNC_1(sizeof(*VAR_4->conf), VAR_2);
 if (!VAR_4->conf)
  goto init_priv_mem_out;
 VAR_4->extra_buf = FUNC_1(VAR_3, VAR_2);
 if (!VAR_4->extra_buf)
  goto init_priv_mem_out;
 VAR_4->wowl.nd = FUNC_1(sizeof(*VAR_4->wowl.nd) + sizeof(u32), VAR_2);
 if (!VAR_4->wowl.nd)
  goto init_priv_mem_out;
 VAR_4->wowl.nd_info = FUNC_1(sizeof(*VAR_4->wowl.nd_info) +
        sizeof(struct cfg80211_wowlan_nd_match *),
        VAR_2);
 if (!VAR_4->wowl.nd_info)
  goto init_priv_mem_out;
 VAR_4->escan_info.escan_buf = FUNC_1(VAR_0, VAR_2);
 if (!VAR_4->escan_info.escan_buf)
  goto init_priv_mem_out;

 return 0;

init_priv_mem_out:
 FUNC_0(VAR_4);

 return -VAR_1;
}
