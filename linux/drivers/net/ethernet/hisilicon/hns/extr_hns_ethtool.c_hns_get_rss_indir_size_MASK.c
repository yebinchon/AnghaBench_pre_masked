
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_2__* ae_handle; int enet_ver; } ;
struct hnae_ae_ops {int (* get_rss_indir_size ) (TYPE_2__*) ;} ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct hnae_ae_ops* ops; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static u32
FUNC_4(struct net_device *VAR_0)
{
 struct hns_nic_priv *VAR_1 = FUNC_2(VAR_0);
 struct hnae_ae_ops *VAR_2;

 if (FUNC_0(VAR_1->enet_ver)) {
  FUNC_1(VAR_0,
      "RSS feature is not supported on this hardware\n");
  return 0;
 }

 VAR_2 = VAR_1->ae_handle->dev->ops;
 return VAR_2->get_rss_indir_size(VAR_1->ae_handle);
}
