
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct hns3_nic_priv {struct hnae3_handle* ae_handle; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_promisc_mode ) (struct hnae3_handle*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct hns3_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,int,int) ;

int FUNC_2(struct net_device *VAR_2, u8 VAR_3)
{
 struct hns3_nic_priv *VAR_4 = FUNC_0(VAR_2);
 struct hnae3_handle *VAR_5 = VAR_4->ae_handle;

 if (VAR_5->ae_algo->ops->set_promisc_mode) {
  return VAR_5->ae_algo->ops->set_promisc_mode(VAR_5,
      VAR_3 & VAR_1,
      VAR_3 & VAR_0);
 }

 return 0;
}
