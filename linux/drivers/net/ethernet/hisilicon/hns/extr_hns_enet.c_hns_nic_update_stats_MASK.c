
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int stats; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* update_stats ) (struct hnae_handle*,int *) ;} ;


 struct hns_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae_handle*,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct hns_nic_priv *VAR_1 = FUNC_0(VAR_0);
 struct hnae_handle *VAR_2 = VAR_1->ae_handle;

 VAR_2->dev->ops->update_stats(VAR_2, &VAR_0->stats);
}
