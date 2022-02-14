
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vq_callback_t ;
struct virtqueue {int dummy; } ;
struct virtio_mmio_device {int pdev; } ;
struct virtio_device {int dev; } ;
struct irq_affinity {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct virtqueue*) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ,int ,int ,struct virtio_mmio_device*) ;
 struct virtio_mmio_device* FUNC_6 (struct virtio_device*) ;
 int FUNC_7 (struct virtio_device*) ;
 int VAR_1 ;
 struct virtqueue* FUNC_8 (struct virtio_device*,int ,int *,char const* const,int const) ;

__attribute__((used)) static int FUNC_9(struct virtio_device *VAR_2, unsigned VAR_3,
         struct virtqueue *VAR_4[],
         vq_callback_t *VAR_5[],
         const char * const VAR_6[],
         const bool *VAR_7,
         struct irq_affinity *VAR_8)
{
 struct virtio_mmio_device *VAR_9 = FUNC_6(VAR_2);
 int VAR_10 = FUNC_4(VAR_9->pdev, 0);
 int VAR_11, VAR_12, VAR_13 = 0;

 if (VAR_10 < 0) {
  FUNC_2(&VAR_2->dev, "Cannot get IRQ resource\n");
  return VAR_10;
 }

 VAR_12 = FUNC_5(VAR_10, VAR_1, VAR_0,
   FUNC_3(&VAR_2->dev), VAR_9);
 if (VAR_12)
  return VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
  if (!VAR_6[VAR_11]) {
   VAR_4[VAR_11] = ((void*)0);
   continue;
  }

  VAR_4[VAR_11] = FUNC_8(VAR_2, VAR_13++, VAR_5[VAR_11], VAR_6[VAR_11],
         VAR_7 ? VAR_7[VAR_11] : 0);
  if (FUNC_0(VAR_4[VAR_11])) {
   FUNC_7(VAR_2);
   return FUNC_1(VAR_4[VAR_11]);
  }
 }

 return 0;
}
