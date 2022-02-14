
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vring {int dummy; } ;
struct virtqueue {int dummy; } ;
struct virtio_device {int dev; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {size_t queue_size_in_bytes; int queue_dma_addr; } ;
struct TYPE_4__ {int we_own_ring; TYPE_1__ split; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct virtqueue* FUNC_0 (unsigned int,struct vring,struct virtio_device*,int,int,int (*) (struct virtqueue*),void (*) (struct virtqueue*),char const*) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 TYPE_2__* FUNC_2 (struct virtqueue*) ;
 void* FUNC_3 (struct virtio_device*,size_t,int *,int) ;
 int FUNC_4 (struct virtio_device*,size_t,void*,int ) ;
 int FUNC_5 (struct vring*,unsigned int,void*,unsigned int) ;
 size_t FUNC_6 (unsigned int,unsigned int) ;

__attribute__((used)) static struct virtqueue *FUNC_7(
 unsigned int VAR_4,
 unsigned int VAR_5,
 unsigned int VAR_6,
 struct virtio_device *VAR_7,
 bool VAR_8,
 bool VAR_9,
 bool VAR_10,
 bool (*VAR_11)(struct virtqueue *),
 void (*VAR_12)(struct virtqueue *),
 const char *VAR_13)
{
 struct virtqueue *VAR_14;
 void *VAR_15 = ((void*)0);
 dma_addr_t VAR_16;
 size_t VAR_17;
 struct vring VAR_18;


 if (VAR_5 & (VAR_5 - 1)) {
  FUNC_1(&VAR_7->dev, "Bad virtqueue length %u\n", VAR_5);
  return ((void*)0);
 }


 for (; VAR_5 && FUNC_6(VAR_5, VAR_6) > VAR_1; VAR_5 /= 2) {
  VAR_15 = FUNC_3(VAR_7, FUNC_6(VAR_5, VAR_6),
       &VAR_16,
       VAR_0|VAR_2|VAR_3);
  if (VAR_15)
   break;
  if (!VAR_9)
   return ((void*)0);
 }

 if (!VAR_5)
  return ((void*)0);

 if (!VAR_15) {

  VAR_15 = FUNC_3(VAR_7, FUNC_6(VAR_5, VAR_6),
       &VAR_16, VAR_0|VAR_3);
 }
 if (!VAR_15)
  return ((void*)0);

 VAR_17 = FUNC_6(VAR_5, VAR_6);
 FUNC_5(&VAR_18, VAR_5, VAR_15, VAR_6);

 VAR_14 = FUNC_0(VAR_4, VAR_18, VAR_7, VAR_8, VAR_10,
       VAR_11, VAR_12, VAR_13);
 if (!VAR_14) {
  FUNC_4(VAR_7, VAR_17, VAR_15,
     VAR_16);
  return ((void*)0);
 }

 FUNC_2(VAR_14)->split.queue_dma_addr = VAR_16;
 FUNC_2(VAR_14)->split.queue_size_in_bytes = VAR_17;
 FUNC_2(VAR_14)->we_own_ring = 1;

 return VAR_14;
}
