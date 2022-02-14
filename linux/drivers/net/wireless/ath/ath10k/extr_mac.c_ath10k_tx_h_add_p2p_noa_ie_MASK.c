
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_vif {scalar_t__ type; int p2p; scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_3__ {int noa_len; scalar_t__ noa_data; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;
struct ath10k_vif {TYPE_2__ u; } ;
struct ath10k {int data_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ath10k *VAR_2,
           struct ieee80211_vif *VAR_3,
           struct sk_buff *VAR_4)
{
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *)VAR_4->data;
 struct ath10k_vif *VAR_6 = (void *)VAR_3->drv_priv;


 if (VAR_3->type != VAR_1 || !VAR_3->p2p)
  return;

 if (FUNC_5(FUNC_0(VAR_5->frame_control))) {
  FUNC_3(&VAR_2->data_lock);
  if (VAR_6->u.ap.noa_data)
   if (!FUNC_1(VAR_4, 0, VAR_6->u.ap.noa_len,
           VAR_0))
    FUNC_2(VAR_4, VAR_6->u.ap.noa_data,
          VAR_6->u.ap.noa_len);
  FUNC_4(&VAR_2->data_lock);
 }
}
