
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_1__* dev; } ;
struct hnae_ae_ops {int (* set_loopback ) (struct hnae_handle*,int ,int ) ;int (* stop ) (struct hnae_handle*) ;} ;
struct TYPE_2__ {struct hnae_ae_ops* ops; } ;


 int VAR_0 ;
 struct hns_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (struct hnae_handle*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct hns_nic_priv *VAR_2 = FUNC_0(VAR_1);
 struct hnae_handle *VAR_3 = VAR_2->ae_handle;
 struct hnae_ae_ops *VAR_4 = VAR_3->dev->ops;

 VAR_4->stop(VAR_3);
 VAR_4->set_loopback(VAR_3, VAR_0, 0);
}
