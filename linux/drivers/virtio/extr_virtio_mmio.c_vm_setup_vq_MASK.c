
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct virtqueue {struct virtio_mmio_vq_info* priv; } ;
struct virtio_mmio_vq_info {int node; struct virtqueue* vq; } ;
struct virtio_mmio_device {int version; scalar_t__ base; int lock; int virtqueues; } ;
struct virtio_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct virtqueue* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct virtio_mmio_vq_info*) ;
 struct virtio_mmio_vq_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct virtio_mmio_device* FUNC_9 (struct virtio_device*) ;
 int FUNC_10 (struct virtqueue*) ;
 int FUNC_11 (struct virtqueue*) ;
 int FUNC_12 (struct virtqueue*) ;
 int FUNC_13 (struct virtqueue*) ;
 int VAR_19 ;
 struct virtqueue* FUNC_14 (unsigned int,unsigned int,int ,struct virtio_device*,int,int,int,int ,void (*) (struct virtqueue*),char const*) ;
 int FUNC_15 (struct virtqueue*) ;
 int FUNC_16 (int,scalar_t__) ;

__attribute__((used)) static struct virtqueue *FUNC_17(struct virtio_device *VAR_20, unsigned VAR_21,
      void (*VAR_22)(struct virtqueue *VAR_23),
      const char *VAR_24, bool VAR_25)
{
 struct virtio_mmio_device *VAR_26 = FUNC_9(VAR_20);
 struct virtio_mmio_vq_info *VAR_27;
 struct virtqueue *VAR_28;
 unsigned long VAR_29;
 unsigned int VAR_30;
 int VAR_31;

 if (!VAR_24)
  return ((void*)0);


 FUNC_16(VAR_21, VAR_26->base + VAR_15);


 if (FUNC_6(VAR_26->base + (VAR_26->version == 1 ?
   VAR_13 : VAR_14))) {
  VAR_31 = -VAR_1;
  goto error_available;
 }


 VAR_27 = FUNC_4(sizeof(*VAR_27), VAR_3);
 if (!VAR_27) {
  VAR_31 = -VAR_2;
  goto error_kmalloc;
 }

 VAR_30 = FUNC_6(VAR_26->base + VAR_12);
 if (VAR_30 == 0) {
  VAR_31 = -VAR_1;
  goto error_new_virtqueue;
 }


 VAR_28 = FUNC_14(VAR_21, VAR_30, VAR_18, VAR_20,
     1, 1, VAR_25, VAR_19, VAR_22, VAR_24);
 if (!VAR_28) {
  VAR_31 = -VAR_2;
  goto error_new_virtqueue;
 }


 FUNC_16(FUNC_13(VAR_28), VAR_26->base + VAR_11);
 if (VAR_26->version == 1) {
  u64 VAR_32 = FUNC_11(VAR_28) >> VAR_4;






  if (VAR_32 >> 32) {
   FUNC_2(&VAR_20->dev,
    "platform bug: legacy virtio-mmio must not be used with RAM above 0x%llxGB\n",
    0x1ULL << (32 + VAR_4 - 30));
   VAR_31 = -VAR_0;
   goto error_bad_pfn;
  }

  FUNC_16(VAR_5, VAR_26->base + VAR_6);
  FUNC_16(VAR_32, VAR_26->base + VAR_13);
 } else {
  u64 VAR_33;

  VAR_33 = FUNC_11(VAR_28);
  FUNC_16((u32)VAR_33, VAR_26->base + VAR_10);
  FUNC_16((u32)(VAR_33 >> 32),
    VAR_26->base + VAR_9);

  VAR_33 = FUNC_10(VAR_28);
  FUNC_16((u32)VAR_33, VAR_26->base + VAR_8);
  FUNC_16((u32)(VAR_33 >> 32),
    VAR_26->base + VAR_7);

  VAR_33 = FUNC_12(VAR_28);
  FUNC_16((u32)VAR_33, VAR_26->base + VAR_17);
  FUNC_16((u32)(VAR_33 >> 32),
    VAR_26->base + VAR_16);

  FUNC_16(1, VAR_26->base + VAR_14);
 }

 VAR_28->priv = VAR_27;
 VAR_27->vq = VAR_28;

 FUNC_7(&VAR_26->lock, VAR_29);
 FUNC_5(&VAR_27->node, &VAR_26->virtqueues);
 FUNC_8(&VAR_26->lock, VAR_29);

 return VAR_28;

error_bad_pfn:
 FUNC_15(VAR_28);
error_new_virtqueue:
 if (VAR_26->version == 1) {
  FUNC_16(0, VAR_26->base + VAR_13);
 } else {
  FUNC_16(0, VAR_26->base + VAR_14);
  FUNC_1(FUNC_6(VAR_26->base + VAR_14));
 }
 FUNC_3(VAR_27);
error_kmalloc:
error_available:
 return FUNC_0(VAR_31);
}
