
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
struct hnae_ae_ops {int (* set_rss ) (TYPE_2__*,int const*,int const*,int const) ;} ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct hnae_ae_ops* ops; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_1 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*,int const*,int const*,int const) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_3, const u32 *VAR_4, const u8 *VAR_5,
     const u8 VAR_6)
{
 struct hns_nic_priv *VAR_7 = FUNC_2(VAR_3);
 struct hnae_ae_ops *VAR_8;

 if (FUNC_0(VAR_7->enet_ver)) {
  FUNC_1(VAR_3,
      "RSS feature is not supported on this hardware\n");
  return -VAR_0;
 }

 VAR_8 = VAR_7->ae_handle->dev->ops;

 if (VAR_6 != VAR_1 && VAR_6 != VAR_2) {
  FUNC_1(VAR_3, "Invalid hfunc!\n");
  return -VAR_0;
 }

 return VAR_8->set_rss(VAR_7->ae_handle, VAR_4, VAR_5, VAR_6);
}
