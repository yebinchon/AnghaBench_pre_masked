
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int num; } ;
struct TYPE_8__ {TYPE_3__ vring; } ;
struct TYPE_5__ {unsigned int num; } ;
struct TYPE_6__ {TYPE_1__ vring; } ;
struct vring_virtqueue {TYPE_4__ split; TYPE_2__ packed; scalar_t__ packed_ring; } ;
struct virtqueue {int dummy; } ;


 struct vring_virtqueue* FUNC_0 (struct virtqueue*) ;

unsigned int FUNC_1(struct virtqueue *VAR_0)
{

 struct vring_virtqueue *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->packed_ring ? VAR_1->packed.vring.num : VAR_1->split.vring.num;
}
