
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct brcmf_cfg80211_conf {void* retry_long; void* retry_short; void* rts_threshold; void* frag_threshold; } ;



__attribute__((used)) static void FUNC_0(struct brcmf_cfg80211_conf *VAR_0)
{
 VAR_0->frag_threshold = (u32)-1;
 VAR_0->rts_threshold = (u32)-1;
 VAR_0->retry_short = (u32)-1;
 VAR_0->retry_long = (u32)-1;
}
