
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int features; } ;
struct hns3_nic_priv {struct hnae3_handle* ae_handle; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_gro_en ) (struct hnae3_handle*,int) ;int (* enable_hw_strip_rxvtag ) (struct hnae3_handle*,int) ;int (* enable_fd ) (struct hnae3_handle*,int) ;int (* enable_vlan_filter ) (struct hnae3_handle*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hns3_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,int) ;
 int FUNC_2 (struct hnae3_handle*,int) ;
 int FUNC_3 (struct hnae3_handle*,int) ;
 int FUNC_4 (struct hnae3_handle*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
     netdev_features_t VAR_5)
{
 netdev_features_t VAR_6 = VAR_4->features ^ VAR_5;
 struct hns3_nic_priv *VAR_7 = FUNC_0(VAR_4);
 struct hnae3_handle *VAR_8 = VAR_7->ae_handle;
 bool VAR_9;
 int VAR_10;

 if (VAR_6 & (VAR_0) && VAR_8->ae_algo->ops->set_gro_en) {
  VAR_9 = !!(VAR_5 & VAR_0);
  VAR_10 = VAR_8->ae_algo->ops->set_gro_en(VAR_8, VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 if ((VAR_6 & VAR_1) &&
     VAR_8->ae_algo->ops->enable_vlan_filter) {
  VAR_9 = !!(VAR_5 & VAR_1);
  VAR_8->ae_algo->ops->enable_vlan_filter(VAR_8, VAR_9);
 }

 if ((VAR_6 & VAR_2) &&
     VAR_8->ae_algo->ops->enable_hw_strip_rxvtag) {
  VAR_9 = !!(VAR_5 & VAR_2);
  VAR_10 = VAR_8->ae_algo->ops->enable_hw_strip_rxvtag(VAR_8, VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 if ((VAR_6 & VAR_3) && VAR_8->ae_algo->ops->enable_fd) {
  VAR_9 = !!(VAR_5 & VAR_3);
  VAR_8->ae_algo->ops->enable_fd(VAR_8, VAR_9);
 }

 VAR_4->features = VAR_5;
 return 0;
}
