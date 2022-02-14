
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hns_nic_ring_data {struct hnae_ring* ring; } ;
struct hnae_ring {TYPE_4__* q; scalar_t__ io_base; } ;
struct TYPE_8__ {TYPE_3__* handle; } ;
struct TYPE_7__ {TYPE_2__* dev; scalar_t__ coal_adapt_en; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* toggle_ring_irq ) (struct hnae_ring*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hnae_ring*) ;
 int FUNC_1 (struct hns_nic_ring_data*) ;
 int FUNC_2 (struct hnae_ring*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct hnae_ring*,int) ;
 int FUNC_5 (struct hnae_ring*,int) ;

__attribute__((used)) static bool FUNC_6(struct hns_nic_ring_data *VAR_1)
{
 struct hnae_ring *VAR_2 = VAR_1->ring;
 int VAR_3 = 0;
 bool VAR_4;

 FUNC_2(VAR_2);


 VAR_1->ring->q->handle->dev->ops->toggle_ring_irq(VAR_2, 0);
 VAR_3 = FUNC_3(VAR_2->io_base + VAR_0);

 if (VAR_3 <= FUNC_0(VAR_2)) {
  if (VAR_2->q->handle->coal_adapt_en)
   FUNC_1(VAR_1);

  VAR_4 = 1;
 } else {
  VAR_1->ring->q->handle->dev->ops->toggle_ring_irq(
   VAR_1->ring, 1);

  VAR_4 = 0;
 }

 return VAR_4;
}
