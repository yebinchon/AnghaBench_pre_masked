
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_virtqueue {scalar_t__ packed_ring; int weak_barriers; } ;
struct virtqueue {int dummy; } ;


 struct vring_virtqueue* FUNC_0 (struct virtqueue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct virtqueue*,unsigned int) ;
 int FUNC_3 (struct virtqueue*,unsigned int) ;

bool FUNC_4(struct virtqueue *VAR_0, unsigned VAR_1)
{
 struct vring_virtqueue *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->weak_barriers);
 return VAR_2->packed_ring ? FUNC_2(VAR_0, VAR_1) :
     FUNC_3(VAR_0, VAR_1);
}
