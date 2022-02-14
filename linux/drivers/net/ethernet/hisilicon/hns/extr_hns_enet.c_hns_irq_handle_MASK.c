
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hns_nic_ring_data {int napi; TYPE_5__* ring; } ;
typedef int irqreturn_t ;
struct TYPE_10__ {TYPE_4__* q; } ;
struct TYPE_9__ {TYPE_3__* handle; } ;
struct TYPE_8__ {TYPE_2__* dev; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {int (* toggle_ring_irq ) (TYPE_5__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct hns_nic_ring_data *VAR_3 = (struct hns_nic_ring_data *)VAR_2;

 VAR_3->ring->q->handle->dev->ops->toggle_ring_irq(
  VAR_3->ring, 1);
 FUNC_0(&VAR_3->napi);

 return VAR_0;
}
