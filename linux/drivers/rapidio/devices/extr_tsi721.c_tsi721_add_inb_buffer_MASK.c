
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct tsi721_device {TYPE_2__* imsg_ring; TYPE_1__* pdev; } ;
struct rio_mport {struct tsi721_device* priv; } ;
struct TYPE_4__ {size_t rx_slot; scalar_t__ size; void** imq_base; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,size_t) ;

__attribute__((used)) static int FUNC_1(struct rio_mport *VAR_1, int VAR_2, void *VAR_3)
{
 struct tsi721_device *VAR_4 = VAR_1->priv;
 u32 VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_4->imsg_ring[VAR_2].rx_slot;
 if (VAR_4->imsg_ring[VAR_2].imq_base[VAR_5]) {
  FUNC_0(&VAR_4->pdev->dev,
   "Error adding inbound buffer %d, buffer exists",
   VAR_5);
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_4->imsg_ring[VAR_2].imq_base[VAR_5] = VAR_3;

 if (++VAR_4->imsg_ring[VAR_2].rx_slot == VAR_4->imsg_ring[VAR_2].size)
  VAR_4->imsg_ring[VAR_2].rx_slot = 0;

out:
 return VAR_6;
}
