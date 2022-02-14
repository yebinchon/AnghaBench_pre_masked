
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_virtqueue {int broken; } ;
struct virtqueue {int dummy; } ;


 struct vring_virtqueue* FUNC_0 (struct virtqueue*) ;

bool FUNC_1(struct virtqueue *VAR_0)
{
 struct vring_virtqueue *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->broken;
}
