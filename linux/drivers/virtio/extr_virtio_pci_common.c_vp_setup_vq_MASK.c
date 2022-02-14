
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct virtqueue {int dummy; } ;
struct virtio_pci_vq_info {int node; struct virtqueue* vq; } ;
struct virtio_pci_device {struct virtio_pci_vq_info** vqs; int lock; int virtqueues; struct virtqueue* (* setup_vq ) (struct virtio_pci_device*,struct virtio_pci_vq_info*,unsigned int,void (*) (struct virtqueue*),char const*,int,int ) ;} ;
struct virtio_device {int dummy; } ;


 int VAR_0 ;
 struct virtqueue* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct virtqueue*) ;
 int FUNC_3 (struct virtio_pci_vq_info*) ;
 struct virtio_pci_vq_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct virtqueue* FUNC_8 (struct virtio_pci_device*,struct virtio_pci_vq_info*,unsigned int,void (*) (struct virtqueue*),char const*,int,int ) ;
 struct virtio_pci_device* FUNC_9 (struct virtio_device*) ;

__attribute__((used)) static struct virtqueue *FUNC_10(struct virtio_device *VAR_2, unsigned VAR_3,
         void (*VAR_4)(struct virtqueue *VAR_5),
         const char *VAR_6,
         bool VAR_7,
         u16 VAR_8)
{
 struct virtio_pci_device *VAR_9 = FUNC_9(VAR_2);
 struct virtio_pci_vq_info *VAR_10 = FUNC_4(sizeof *VAR_10, VAR_1);
 struct virtqueue *VAR_11;
 unsigned long VAR_12;


 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_11 = VAR_9->setup_vq(VAR_9, VAR_10, VAR_3, VAR_4, VAR_6, VAR_7,
         VAR_8);
 if (FUNC_2(VAR_11))
  goto out_info;

 VAR_10->vq = VAR_11;
 if (VAR_4) {
  FUNC_6(&VAR_9->lock, VAR_12);
  FUNC_5(&VAR_10->node, &VAR_9->virtqueues);
  FUNC_7(&VAR_9->lock, VAR_12);
 } else {
  FUNC_1(&VAR_10->node);
 }

 VAR_9->vqs[VAR_3] = VAR_10;
 return VAR_11;

out_info:
 FUNC_3(VAR_10);
 return VAR_11;
}
