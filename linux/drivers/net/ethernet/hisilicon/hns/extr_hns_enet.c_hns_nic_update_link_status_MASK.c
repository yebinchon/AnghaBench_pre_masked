
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {scalar_t__ phy_if; scalar_t__ phy_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 struct hns_nic_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct hns_nic_priv *VAR_2 = FUNC_2(VAR_1);

 struct hnae_handle *VAR_3 = VAR_2->ae_handle;

 if (VAR_3->phy_dev) {
  if (VAR_3->phy_if != VAR_0)
   return;

  (void)FUNC_0(VAR_3->phy_dev);
 }
 FUNC_1(VAR_1);
}
