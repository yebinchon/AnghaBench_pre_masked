
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hdr {int frame_control; } ;
struct TYPE_2__ {scalar_t__ sw_decrypt_mcast_mgmt; } ;
struct ath10k {TYPE_1__ hw_params; } ;


 int FUNC_0 (struct ieee80211_hdr*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct ath10k *VAR_0,
           struct ieee80211_hdr *VAR_1)
{
 if (!FUNC_1(VAR_1->frame_control))
  return 0;





 if (FUNC_2(VAR_1->frame_control))
  return 0;




 if (FUNC_3(FUNC_0(VAR_1)) &&
     VAR_0->hw_params.sw_decrypt_mcast_mgmt)
  return 0;

 return 1;
}
