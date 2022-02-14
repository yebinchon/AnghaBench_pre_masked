
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr {scalar_t__ sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_mac_addr ) (struct hnae_handle*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct hns_nic_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct hnae_handle*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, void *VAR_2)
{
 struct hns_nic_priv *VAR_3 = FUNC_3(VAR_1);
 struct hnae_handle *VAR_4 = VAR_3->ae_handle;
 struct sockaddr *VAR_5 = VAR_2;
 int VAR_6;

 if (!VAR_5 || !FUNC_0((const u8 *)VAR_5->sa_data))
  return -VAR_0;

 VAR_6 = VAR_4->dev->ops->set_mac_addr(VAR_4, VAR_5->sa_data);
 if (VAR_6) {
  FUNC_2(VAR_1, "set_mac_address fail, ret=%d!\n", VAR_6);
  return VAR_6;
 }

 FUNC_1(VAR_1->dev_addr, VAR_5->sa_data, VAR_1->addr_len);

 return 0;
}
