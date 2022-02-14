
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ath6kl_vif {scalar_t__ nw_type; scalar_t__ sme_state; int fw_vif_idx; int txe_intvl; } ;
struct ath6kl {int wmi; int fw_capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ath6kl* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 struct ath6kl_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_5,
       struct net_device *VAR_6,
       u32 VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct ath6kl *VAR_10 = FUNC_0(VAR_6);
 struct ath6kl_vif *VAR_11 = FUNC_2(VAR_6);

 if (VAR_11->nw_type != VAR_3 ||
     !FUNC_3(VAR_0, VAR_10->fw_capabilities))
  return -VAR_2;

 if (VAR_11->sme_state != VAR_4)
  return -VAR_1;


 VAR_11->txe_intvl = VAR_9;

 return FUNC_1(VAR_10->wmi, VAR_11->fw_vif_idx,
      VAR_7, VAR_8, VAR_9);
}
