
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rt2800_ops {int * (* drv_get_txwi ) (struct queue_entry*) ;} ;
struct queue_entry {TYPE_3__* queue; } ;
typedef int __le32 ;
struct TYPE_6__ {TYPE_2__* rt2x00dev; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {struct rt2800_ops* drv; } ;


 int * FUNC_0 (struct queue_entry*) ;

__attribute__((used)) static inline __le32 *FUNC_1(struct queue_entry *VAR_0)
{
 const struct rt2800_ops *VAR_1 = VAR_0->queue->rt2x00dev->ops->drv;

 return VAR_1->drv_get_txwi(VAR_0);
}
