
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* used; } ;
struct TYPE_8__ {TYPE_3__ vring; } ;
struct TYPE_5__ {int vdev; } ;
struct vring_virtqueue {scalar_t__ last_used_idx; TYPE_4__ split; TYPE_1__ vq; } ;
struct TYPE_6__ {int idx; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct vring_virtqueue *VAR_0)
{
 return VAR_0->last_used_idx != FUNC_0(VAR_0->vq.vdev,
   VAR_0->split.vring.used->idx);
}
