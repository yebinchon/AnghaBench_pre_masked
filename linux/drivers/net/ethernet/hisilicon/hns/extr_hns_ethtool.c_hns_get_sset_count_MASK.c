
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {TYPE_1__* phydev; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {scalar_t__ phy_if; TYPE_2__* dev; } ;
struct hnae_ae_ops {int (* get_sset_count ) (struct hnae_handle*,int) ;} ;
typedef int hns_nic_test_strs ;
struct TYPE_4__ {struct hnae_ae_ops* ops; } ;
struct TYPE_3__ {scalar_t__ is_c45; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct hnae_handle*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6, int VAR_7)
{
 struct hns_nic_priv *VAR_8 = FUNC_1(VAR_6);
 struct hnae_handle *VAR_9 = VAR_8->ae_handle;
 struct hnae_ae_ops *VAR_10 = VAR_9->dev->ops;

 if (!VAR_10->get_sset_count) {
  FUNC_0(VAR_6, "get_sset_count is null!\n");
  return -VAR_0;
 }
 if (VAR_7 == VAR_3) {
  u32 VAR_11 = (sizeof(hns_nic_test_strs) / VAR_1);

  if (VAR_8->ae_handle->phy_if == VAR_5)
   VAR_11--;

  if ((!VAR_6->phydev) || (VAR_6->phydev->is_c45))
   VAR_11--;

  return VAR_11;
 } else if (VAR_7 == VAR_2) {
  return (VAR_4 + VAR_10->get_sset_count(VAR_9, VAR_7));
 } else {
  return -VAR_0;
 }
}
