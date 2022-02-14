
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_2__* ae_handle; } ;
struct hnae_ae_ops {int (* get_regs ) (TYPE_2__*,void*) ;} ;
struct ethtool_regs {int version; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct hnae_ae_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*,void*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, struct ethtool_regs *VAR_2,
    void *VAR_3)
{
 struct hns_nic_priv *VAR_4 = FUNC_1(VAR_1);
 struct hnae_ae_ops *VAR_5;

 VAR_5 = VAR_4->ae_handle->dev->ops;

 VAR_2->version = VAR_0;
 if (!VAR_5->get_regs) {
  FUNC_0(VAR_1, "ops->get_regs is null!\n");
  return;
 }
 VAR_5->get_regs(VAR_4->ae_handle, VAR_3);
}
