
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring {int dummy; } ;
struct virtqueue {int dummy; } ;
struct virtio_device {int dummy; } ;


 int VAR_0 ;
 struct virtqueue* FUNC_0 (unsigned int,struct vring,struct virtio_device*,int,int,int (*) (struct virtqueue*),void (*) (struct virtqueue*),char const*) ;
 scalar_t__ FUNC_1 (struct virtio_device*,int ) ;
 int FUNC_2 (struct vring*,unsigned int,void*,unsigned int) ;

struct virtqueue *FUNC_3(unsigned int VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3,
          struct virtio_device *VAR_4,
          bool VAR_5,
          bool VAR_6,
          void *VAR_7,
          bool (*VAR_8)(struct virtqueue *VAR_9),
          void (*VAR_10)(struct virtqueue *VAR_11),
          const char *VAR_12)
{
 struct vring VAR_13;

 if (FUNC_1(VAR_4, VAR_0))
  return ((void*)0);

 FUNC_2(&VAR_13, VAR_2, VAR_7, VAR_3);
 return FUNC_0(VAR_1, VAR_13, VAR_4, VAR_5, VAR_6,
         VAR_8, VAR_10, VAR_12);
}
