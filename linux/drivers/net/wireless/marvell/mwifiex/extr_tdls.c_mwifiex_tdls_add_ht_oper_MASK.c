
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int cap_info; } ;
struct TYPE_9__ {int ht_oper; TYPE_2__ ht_capb; } ;
struct mwifiex_sta_node {TYPE_4__ tdls_cap; } ;
struct mwifiex_bssdescriptor {int channel; TYPE_3__* bcn_ht_oper; scalar_t__ bcn_ht_cap; } ;
struct TYPE_6__ {struct mwifiex_bssdescriptor bss_descriptor; } ;
struct mwifiex_private {TYPE_5__* adapter; TYPE_1__ curr_bss_params; } ;
struct ieee80211_ht_operation {int ht_param; int primary_chan; } ;
struct TYPE_10__ {int hw_dot_11n_dev_cap; } ;
struct TYPE_8__ {int ht_param; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct ieee80211_ht_operation*,int) ;
 int FUNC_5 (TYPE_5__*,int ,char*) ;
 int FUNC_6 (int ) ;
 struct mwifiex_sta_node* FUNC_7 (struct mwifiex_private*,scalar_t__ const*) ;
 scalar_t__* FUNC_8 (struct sk_buff*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct mwifiex_private *VAR_3, const u8 *VAR_4,
    u8 VAR_5, struct sk_buff *VAR_6)
{
 struct ieee80211_ht_operation *VAR_7;
 struct mwifiex_sta_node *VAR_8;
 struct mwifiex_bssdescriptor *VAR_9 =
     &VAR_3->curr_bss_params.bss_descriptor;
 u8 *VAR_10;

 VAR_8 = FUNC_7(VAR_3, VAR_4);
 if (FUNC_9(!VAR_8)) {
  FUNC_5(VAR_3->adapter, VAR_0,
       "TDLS peer station not found in list\n");
  return -1;
 }

 if (!(FUNC_3(VAR_8->tdls_cap.ht_capb.cap_info))) {
  FUNC_5(VAR_3->adapter, VAR_1,
       "TDLS peer doesn't support ht capabilities\n");
  return 0;
 }

 VAR_10 = FUNC_8(VAR_6, sizeof(struct ieee80211_ht_operation) + 2);
 *VAR_10++ = VAR_2;
 *VAR_10++ = sizeof(struct ieee80211_ht_operation);
 VAR_7 = (void *)VAR_10;

 VAR_7->primary_chan = VAR_9->channel;


 if (FUNC_2(VAR_3->adapter->hw_dot_11n_dev_cap) &&
     VAR_9->bcn_ht_cap &&
     FUNC_1(VAR_9->bcn_ht_oper->ht_param))
  VAR_7->ht_param = VAR_9->bcn_ht_oper->ht_param;

 if (VAR_5) {
  VAR_7->ht_param =
     FUNC_6(VAR_9->channel);
  VAR_7->ht_param |= FUNC_0(2);
 }

 FUNC_4(&VAR_8->tdls_cap.ht_oper, VAR_7,
        sizeof(struct ieee80211_ht_operation));

 return 0;
}
