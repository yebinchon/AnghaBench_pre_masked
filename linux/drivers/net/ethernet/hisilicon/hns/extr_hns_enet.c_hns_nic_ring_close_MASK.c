
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_3__* ring_data; struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_2__* dev; } ;
struct TYPE_8__ {int irq; } ;
struct TYPE_7__ {int napi; TYPE_4__* ring; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* toggle_ring_irq ) (TYPE_4__*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct hns_nic_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, int VAR_1)
{
 struct hns_nic_priv *VAR_2 = FUNC_2(VAR_0);
 struct hnae_handle *VAR_3 = VAR_2->ae_handle;

 VAR_3->dev->ops->toggle_ring_irq(VAR_2->ring_data[VAR_1].ring, 1);
 FUNC_0(VAR_2->ring_data[VAR_1].ring->irq);

 FUNC_1(&VAR_2->ring_data[VAR_1].napi);
}
