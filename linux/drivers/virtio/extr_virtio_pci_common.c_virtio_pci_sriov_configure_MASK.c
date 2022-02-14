
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {TYPE_1__* config; } ;
struct virtio_pci_device {struct virtio_device vdev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* get_status ) (struct virtio_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct virtio_device*,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;
 struct virtio_pci_device* FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct virtio_device*) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_5, int VAR_6)
{
 struct virtio_pci_device *VAR_7 = FUNC_3(VAR_5);
 struct virtio_device *VAR_8 = &VAR_7->vdev;
 int VAR_9;

 if (!(VAR_8->config->get_status(VAR_8) & VAR_3))
  return -VAR_0;

 if (!FUNC_0(VAR_8, VAR_4))
  return -VAR_1;

 if (FUNC_4(VAR_5))
  return -VAR_2;

 if (VAR_6 == 0) {
  FUNC_1(VAR_5);
  return 0;
 }

 VAR_9 = FUNC_2(VAR_5, VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 return VAR_6;
}
