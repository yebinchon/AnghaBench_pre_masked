
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hns_nic_ring_data {struct hnae_ring* ring; } ;
struct hnae_ring {int next_to_clean; TYPE_4__* q; scalar_t__ io_base; } ;
struct TYPE_8__ {TYPE_3__* handle; } ;
struct TYPE_7__ {TYPE_2__* dev; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* toggle_ring_irq ) (struct hnae_ring*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct hnae_ring*,int) ;
 int FUNC_2 (struct hnae_ring*,int) ;

__attribute__((used)) static bool FUNC_3(struct hns_nic_ring_data *VAR_1)
{
 struct hnae_ring *VAR_2 = VAR_1->ring;
 int VAR_3;

 VAR_1->ring->q->handle->dev->ops->toggle_ring_irq(VAR_2, 0);

 VAR_3 = FUNC_0(VAR_2->io_base + VAR_0);

 if (VAR_3 != VAR_2->next_to_clean) {
  VAR_1->ring->q->handle->dev->ops->toggle_ring_irq(
   VAR_1->ring, 1);

  return 0;
 } else {
  return 1;
 }
}
