
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_virtqueue {int broken; int (* notify ) (struct virtqueue*) ;} ;
struct virtqueue {int dummy; } ;


 int FUNC_0 (struct virtqueue*) ;
 struct vring_virtqueue* FUNC_1 (struct virtqueue*) ;
 scalar_t__ FUNC_2 (int) ;

bool FUNC_3(struct virtqueue *VAR_0)
{
 struct vring_virtqueue *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_2(VAR_1->broken))
  return 0;


 if (!VAR_1->notify(VAR_0)) {
  VAR_1->broken = 1;
  return 0;
 }
 return 1;
}
