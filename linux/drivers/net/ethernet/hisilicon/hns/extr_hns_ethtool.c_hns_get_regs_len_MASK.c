
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_2__* ae_handle; } ;
struct hnae_ae_ops {int (* get_regs_len ) (TYPE_2__*) ;} ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct hnae_ae_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 u32 VAR_2;
 struct hns_nic_priv *VAR_3 = FUNC_1(VAR_1);
 struct hnae_ae_ops *VAR_4;

 VAR_4 = VAR_3->ae_handle->dev->ops;
 if (!VAR_4->get_regs_len) {
  FUNC_0(VAR_1, "ops->get_regs_len is null!\n");
  return -VAR_0;
 }

 VAR_2 = VAR_4->get_regs_len(VAR_3->ae_handle);
 if (VAR_2 > 0)
  return VAR_2 * sizeof(u32);
 else
  return VAR_2;
}
