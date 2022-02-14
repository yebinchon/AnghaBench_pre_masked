
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_2__* ae_handle; int enet_ver; } ;
struct hnae_ae_ops {int (* get_rss ) (TYPE_2__*,int *,int *,int *) ;} ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct hnae_ae_ops* ops; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_1, u32 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct hns_nic_priv *VAR_5 = FUNC_2(VAR_1);
 struct hnae_ae_ops *VAR_6;

 if (FUNC_0(VAR_5->enet_ver)) {
  FUNC_1(VAR_1,
      "RSS feature is not supported on this hardware\n");
  return -VAR_0;
 }

 VAR_6 = VAR_5->ae_handle->dev->ops;

 if (!VAR_2)
  return 0;

 return VAR_6->get_rss(VAR_5->ae_handle, VAR_2, VAR_3, VAR_4);
}
