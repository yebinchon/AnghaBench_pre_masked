
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nvmet_ns {int device_path; scalar_t__ p2p_dev; TYPE_1__* bdev; int use_p2pmem; } ;
struct TYPE_2__ {int bd_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvmet_ns*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 struct pci_dev* FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct nvmet_ns *VAR_1)
{
 int VAR_2;
 struct pci_dev *VAR_3;

 if (!VAR_1->use_p2pmem)
  return 0;

 if (!VAR_1->bdev) {
  FUNC_5("peer-to-peer DMA is not supported by non-block device namespaces\n");
  return -VAR_0;
 }

 if (!FUNC_0(VAR_1->bdev->bd_queue)) {
  FUNC_5("peer-to-peer DMA is not supported by the driver of %s\n",
         VAR_1->device_path);
  return -VAR_0;
 }

 if (VAR_1->p2p_dev) {
  VAR_2 = FUNC_3(VAR_1->p2p_dev, FUNC_1(VAR_1), 1);
  if (VAR_2 < 0)
   return -VAR_0;
 } else {







  VAR_3 = FUNC_4(FUNC_1(VAR_1));
  if (!VAR_3) {
   FUNC_5("no peer-to-peer memory is available for %s\n",
          VAR_1->device_path);
   return -VAR_0;
  }

  FUNC_2(VAR_3);
 }

 return 0;
}
