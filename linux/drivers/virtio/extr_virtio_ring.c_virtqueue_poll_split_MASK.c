
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_5__ {TYPE_1__* used; } ;
struct TYPE_6__ {TYPE_2__ vring; } ;
struct vring_virtqueue {TYPE_3__ split; } ;
struct virtqueue {int vdev; } ;
struct TYPE_4__ {int idx; } ;


 struct vring_virtqueue* FUNC_0 (struct virtqueue*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct virtqueue *VAR_0, unsigned VAR_1)
{
 struct vring_virtqueue *VAR_2 = FUNC_0(VAR_0);

 return (u16)VAR_1 != FUNC_1(VAR_0->vdev,
   VAR_2->split.vring.used->idx);
}
