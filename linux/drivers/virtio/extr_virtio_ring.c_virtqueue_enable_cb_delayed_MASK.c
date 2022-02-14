
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_virtqueue {scalar_t__ packed_ring; } ;
struct virtqueue {int dummy; } ;


 struct vring_virtqueue* FUNC_0 (struct virtqueue*) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct virtqueue*) ;

bool FUNC_3(struct virtqueue *VAR_0)
{
 struct vring_virtqueue *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->packed_ring ? FUNC_1(VAR_0) :
     FUNC_2(VAR_0);
}
