
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtio_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct virtio_device*,int ) ;
 struct virtqueue* FUNC_1 (unsigned int,unsigned int,unsigned int,struct virtio_device*,int,int,int,int (*) (struct virtqueue*),void (*) (struct virtqueue*),char const*) ;
 struct virtqueue* FUNC_2 (unsigned int,unsigned int,unsigned int,struct virtio_device*,int,int,int,int (*) (struct virtqueue*),void (*) (struct virtqueue*),char const*) ;

struct virtqueue *FUNC_3(
 unsigned int VAR_1,
 unsigned int VAR_2,
 unsigned int VAR_3,
 struct virtio_device *VAR_4,
 bool VAR_5,
 bool VAR_6,
 bool VAR_7,
 bool (*VAR_8)(struct virtqueue *),
 void (*VAR_9)(struct virtqueue *),
 const char *VAR_10)
{

 if (FUNC_0(VAR_4, VAR_0))
  return FUNC_1(VAR_1, VAR_2, VAR_3,
    VAR_4, VAR_5, VAR_6,
    VAR_7, VAR_8, VAR_9, VAR_10);

 return FUNC_2(VAR_1, VAR_2, VAR_3,
   VAR_4, VAR_5, VAR_6,
   VAR_7, VAR_8, VAR_9, VAR_10);
}
