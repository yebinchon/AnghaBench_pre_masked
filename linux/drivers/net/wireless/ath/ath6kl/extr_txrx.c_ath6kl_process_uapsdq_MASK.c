
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int h_proto; } ;
struct ath6kl_vif {int fw_vif_idx; int flags; struct ath6kl* ar; } ;
struct ath6kl_sta {int sta_flags; int apsd_info; int aid; int psq_lock; int apsdq; } ;
struct ath6kl_llc_snap_hdr {int eth_type; } ;
struct ath6kl {int wmi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static bool FUNC_10(struct ath6kl_sta *VAR_7,
    struct ath6kl_vif *VAR_8,
    struct sk_buff *VAR_9,
    u32 *VAR_10)
{
 struct ath6kl *VAR_11 = VAR_8->ar;
 bool VAR_12 = 0;
 struct ethhdr *VAR_13 = (struct ethhdr *) VAR_9->data;
 u8 VAR_14 = 0, VAR_15, *VAR_16;
 u16 VAR_17;
 struct ath6kl_llc_snap_hdr *VAR_18;

 if (VAR_7->sta_flags & VAR_2) {





  FUNC_7(&VAR_7->psq_lock);
  if (!FUNC_5(&VAR_7->apsdq))
   *VAR_10 |= VAR_4;
  else if (VAR_7->sta_flags & VAR_1)
   *VAR_10 |= VAR_3;
  *VAR_10 |= VAR_5;
  FUNC_8(&VAR_7->psq_lock);
  return 0;
 } else if (!VAR_7->apsd_info) {
  return 0;
 }

 if (FUNC_9(VAR_6, &VAR_8->flags)) {
  VAR_17 = FUNC_3(VAR_13->h_proto);
  if (FUNC_4(VAR_17)) {

   VAR_16 = (u8 *)(VAR_13 + 1);
  } else {

   VAR_18 = (struct ath6kl_llc_snap_hdr *)
       (VAR_13 + 1);
   VAR_17 = FUNC_3(VAR_18->eth_type);
   VAR_16 = (u8 *)(VAR_18 + 1);
  }

  if (VAR_17 == VAR_0)
   VAR_14 = FUNC_0(
       VAR_16, 0);
 }

 VAR_15 = FUNC_1(VAR_14);

 if ((VAR_7->apsd_info & (1 << VAR_15)) == 0)
  return 0;


 FUNC_7(&VAR_7->psq_lock);
 VAR_12 = FUNC_5(&VAR_7->apsdq);
 FUNC_6(&VAR_7->apsdq, VAR_9);
 FUNC_8(&VAR_7->psq_lock);





 if (VAR_12) {
  FUNC_2(VAR_11->wmi,
           VAR_8->fw_vif_idx,
           VAR_7->aid, 1, 0);
 }
 *VAR_10 |= VAR_5;

 return 1;
}
