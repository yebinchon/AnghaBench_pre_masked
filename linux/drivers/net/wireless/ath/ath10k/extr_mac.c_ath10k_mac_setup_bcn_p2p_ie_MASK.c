
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_5__ {scalar_t__ variable; } ;
struct TYPE_6__ {TYPE_2__ beacon; } ;
struct ieee80211_mgmt {TYPE_3__ u; } ;
struct ath10k_vif {int vdev_id; TYPE_1__* vif; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; int p2p; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,char*,int ,int) ;
 int FUNC_1 (struct ath10k*,int ,int const*) ;
 int * FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ath10k_vif *VAR_4,
           struct sk_buff *VAR_5)
{
 struct ath10k *VAR_6 = VAR_4->ar;
 struct ieee80211_mgmt *VAR_7;
 const u8 *VAR_8;
 int VAR_9;

 if (VAR_4->vif->type != VAR_1 || !VAR_4->vif->p2p)
  return 0;

 VAR_7 = (void *)VAR_5->data;
 VAR_8 = FUNC_2(VAR_3, VAR_2,
      VAR_7->u.beacon.variable,
      VAR_5->len - (VAR_7->u.beacon.variable -
           VAR_5->data));
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_6, VAR_4->vdev_id, VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_6, "failed to submit p2p go bcn ie for vdev %i: %d\n",
       VAR_4->vdev_id, VAR_9);
  return VAR_9;
 }

 return 0;
}
