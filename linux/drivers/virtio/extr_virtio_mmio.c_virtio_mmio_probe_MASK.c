
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int release; int * parent; } ;
struct TYPE_4__ {void* vendor; void* device; } ;
struct TYPE_5__ {TYPE_3__ dev; TYPE_1__ id; int * config; } ;
struct virtio_mmio_device {int version; TYPE_2__ vdev; int * base; int lock; int virtqueues; struct platform_device* pdev; } ;
struct resource {int start; } ;
struct platform_device {int dev; int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,...) ;
 int * FUNC_4 (int *,int ,int ) ;
 struct virtio_mmio_device* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct virtio_mmio_device*) ;
 int FUNC_12 (TYPE_3__*) ;
 void* FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct resource*) ;
 int FUNC_16 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_17 (int ,int *) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_17)
{
 struct virtio_mmio_device *VAR_18;
 struct resource *VAR_19;
 unsigned long VAR_20;
 int VAR_21;

 VAR_19 = FUNC_10(VAR_17, VAR_7, 0);
 if (!VAR_19)
  return -VAR_2;

 if (!FUNC_6(&VAR_17->dev, VAR_19->start,
   FUNC_15(VAR_19), VAR_17->name))
  return -VAR_0;

 VAR_18 = FUNC_5(&VAR_17->dev, sizeof(*VAR_18), VAR_6);
 if (!VAR_18)
  return -VAR_4;

 VAR_18->vdev.dev.parent = &VAR_17->dev;
 VAR_18->vdev.dev.release = VAR_16;
 VAR_18->vdev.config = &VAR_15;
 VAR_18->pdev = VAR_17;
 FUNC_1(&VAR_18->virtqueues);
 FUNC_16(&VAR_18->lock);

 VAR_18->base = FUNC_4(&VAR_17->dev, VAR_19->start, FUNC_15(VAR_19));
 if (VAR_18->base == ((void*)0))
  return -VAR_1;


 VAR_20 = FUNC_13(VAR_18->base + VAR_12);
 if (VAR_20 != ('v' | 'i' << 8 | 'r' << 16 | 't' << 24)) {
  FUNC_3(&VAR_17->dev, "Wrong magic value 0x%08lx!\n", VAR_20);
  return -VAR_3;
 }


 VAR_18->version = FUNC_13(VAR_18->base + VAR_14);
 if (VAR_18->version < 1 || VAR_18->version > 2) {
  FUNC_2(&VAR_17->dev, "Version %ld not supported!\n",
    VAR_18->version);
  return -VAR_5;
 }

 VAR_18->vdev.id.device = FUNC_13(VAR_18->base + VAR_10);
 if (VAR_18->vdev.id.device == 0) {




  return -VAR_3;
 }
 VAR_18->vdev.id.vendor = FUNC_13(VAR_18->base + VAR_13);

 if (VAR_18->version == 1) {
  FUNC_17(VAR_9, VAR_18->base + VAR_11);

  VAR_21 = FUNC_8(&VAR_17->dev, FUNC_0(64));




  if (!VAR_21)
   FUNC_7(&VAR_17->dev,
           FUNC_0(32 + VAR_8));
 } else {
  VAR_21 = FUNC_9(&VAR_17->dev, FUNC_0(64));
 }
 if (VAR_21)
  VAR_21 = FUNC_9(&VAR_17->dev, FUNC_0(32));
 if (VAR_21)
  FUNC_3(&VAR_17->dev, "Failed to enable 64-bit or 32-bit DMA.  Trying to continue, but this might not work.\n");

 FUNC_11(VAR_17, VAR_18);

 VAR_21 = FUNC_14(&VAR_18->vdev);
 if (VAR_21)
  FUNC_12(&VAR_18->vdev.dev);

 return VAR_21;
}
