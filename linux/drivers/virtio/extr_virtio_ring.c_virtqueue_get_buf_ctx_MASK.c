
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_virtqueue {scalar_t__ packed_ring; } ;
struct virtqueue {int dummy; } ;


 struct vring_virtqueue* FUNC_0 (struct virtqueue*) ;
 void* FUNC_1 (struct virtqueue*,unsigned int*,void**) ;
 void* FUNC_2 (struct virtqueue*,unsigned int*,void**) ;

void *FUNC_3(struct virtqueue *VAR_0, unsigned int *VAR_1,
       void **VAR_2)
{
 struct vring_virtqueue *VAR_3 = FUNC_0(VAR_0);

 return VAR_3->packed_ring ? FUNC_1(VAR_0, VAR_1, VAR_2) :
     FUNC_2(VAR_0, VAR_1, VAR_2);
}
