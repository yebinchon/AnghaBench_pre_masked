
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_free; } ;
struct vring_virtqueue {TYPE_1__ vq; scalar_t__ indirect; } ;
struct virtqueue {int dummy; } ;


 struct vring_virtqueue* FUNC_0 (struct virtqueue*) ;

__attribute__((used)) static inline bool FUNC_1(struct virtqueue *VAR_0,
       unsigned int VAR_1)
{
 struct vring_virtqueue *VAR_2 = FUNC_0(VAR_0);





 return (VAR_2->indirect && VAR_1 > 1 && VAR_2->vq.num_free);
}
