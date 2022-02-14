
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct in_ifaddr {int ifa_next; int ifa_local; } ;
struct in_device {int ifa_list; } ;
struct cfg80211_wowlan {int dummy; } ;
struct ath6kl_vif {scalar_t__ nw_type; int fw_vif_idx; int ndev; struct ath6kl* ar; int flags; } ;
struct ath6kl {int wmi; int * fw_capabilities; } ;
typedef int ips ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct in_device* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int,int ,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (struct ath6kl*,struct ath6kl_vif*) ;
 int FUNC_9 (struct ath6kl*,struct ath6kl_vif*) ;
 int FUNC_10 (struct ath6kl*,struct ath6kl_vif*,struct cfg80211_wowlan*,int *) ;
 int FUNC_11 (int **,int ,int) ;
 int FUNC_12 (int ) ;
 struct in_ifaddr* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct ath6kl_vif *VAR_9,
      struct cfg80211_wowlan *VAR_10, u32 *VAR_11)
{
 struct ath6kl *VAR_12 = VAR_9->ar;
 struct in_device *VAR_13;
 struct in_ifaddr *VAR_14;
 int VAR_15;
 u16 VAR_16, VAR_17;
 __be32 VAR_18[VAR_5];
 u8 VAR_19 = 0;

 if (!FUNC_14(VAR_6, &VAR_9->flags) &&
     FUNC_14(VAR_1,
       VAR_12->fw_capabilities)) {
  VAR_15 = FUNC_5(VAR_9->ar->wmi,
      VAR_9->fw_vif_idx, 0);
  if (VAR_15)
   return VAR_15;
 }


 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
  FUNC_3(VAR_12->wmi, VAR_9->fw_vif_idx,
            VAR_7, VAR_16);






 if (VAR_10)
  VAR_15 = FUNC_10(VAR_12, VAR_9, VAR_10, VAR_11);
 else if (VAR_9->nw_type == VAR_0)
  VAR_15 = FUNC_8(VAR_12, VAR_9);
 else
  VAR_15 = FUNC_9(VAR_12, VAR_9);

 if (VAR_15)
  return VAR_15;

 FUNC_12(VAR_9->ndev);

 if (VAR_9->nw_type != VAR_0) {
  VAR_15 = FUNC_4(VAR_12->wmi, VAR_9->fw_vif_idx,
          VAR_3,
          0);
  if (VAR_15)
   return VAR_15;


  VAR_17 = VAR_3 * 15;
  if (VAR_17 > VAR_2)
   VAR_17 = VAR_2;

  VAR_15 = FUNC_2(VAR_12->wmi, VAR_9->fw_vif_idx,
            VAR_17, 0);
  if (VAR_15)
   return VAR_15;

  VAR_15 = FUNC_6(VAR_12->wmi, VAR_9->fw_vif_idx,
      0xFFFF, 0, 0xFFFF, 0, 0, 0,
      0, 0, 0, 0);
  if (VAR_15)
   return VAR_15;
 }


 VAR_13 = FUNC_0(VAR_9->ndev);
 if (!VAR_13)
  return 0;

 VAR_14 = FUNC_13(VAR_13->ifa_list);
 FUNC_11(&VAR_18, 0, sizeof(VAR_18));


 while (VAR_19 < VAR_5 && VAR_14) {
  VAR_18[VAR_19] = VAR_14->ifa_local;
  VAR_14 = FUNC_13(VAR_14->ifa_next);
  VAR_19++;
 }

 if (VAR_14) {
  FUNC_1("total IP addr count is exceeding fw limit\n");
  return -VAR_4;
 }

 VAR_15 = FUNC_7(VAR_12->wmi, VAR_9->fw_vif_idx, VAR_18[0], VAR_18[1]);
 if (VAR_15) {
  FUNC_1("fail to setup ip for arp agent\n");
  return VAR_15;
 }

 return VAR_15;
}
