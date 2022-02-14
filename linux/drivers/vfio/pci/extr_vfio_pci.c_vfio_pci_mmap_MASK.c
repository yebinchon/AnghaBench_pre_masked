
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vm_area_struct {unsigned int vm_pgoff; scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; int vm_page_prot; struct vfio_pci_device* vm_private_data; } ;
struct vfio_pci_region {int flags; TYPE_1__* ops; } ;
struct vfio_pci_device {scalar_t__* barmap; int * bar_mmap_supported; struct vfio_pci_region* region; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* mmap ) (struct vfio_pci_device*,struct vfio_pci_region*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct pci_dev*,unsigned int,int ) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,int,char*) ;
 int FUNC_4 (struct pci_dev*,unsigned int) ;
 scalar_t__ FUNC_5 (struct pci_dev*,unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vm_area_struct*,scalar_t__,unsigned int,scalar_t__,int ) ;
 int FUNC_8 (struct vfio_pci_device*,struct vfio_pci_region*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_9(void *VAR_8, struct vm_area_struct *VAR_9)
{
 struct vfio_pci_device *VAR_10 = VAR_8;
 struct pci_dev *VAR_11 = VAR_10->pdev;
 unsigned int VAR_12;
 u64 VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_12 = VAR_9->vm_pgoff >> (VAR_4 - VAR_2);

 if (VAR_9->vm_end < VAR_9->vm_start)
  return -VAR_0;
 if ((VAR_9->vm_flags & VAR_7) == 0)
  return -VAR_0;
 if (VAR_12 >= VAR_3) {
  int VAR_18 = VAR_12 - VAR_3;
  struct vfio_pci_region *VAR_19 = VAR_10->region + VAR_18;

  if (VAR_19 && VAR_19->ops && VAR_19->ops->mmap &&
      (VAR_19->flags & VAR_6))
   return VAR_19->ops->mmap(VAR_10, VAR_19, VAR_9);
  return -VAR_0;
 }
 if (VAR_12 >= VAR_5)
  return -VAR_0;
 if (!VAR_10->bar_mmap_supported[VAR_12])
  return -VAR_0;

 VAR_13 = FUNC_0(FUNC_4(VAR_11, VAR_12));
 VAR_14 = VAR_9->vm_end - VAR_9->vm_start;
 VAR_15 = VAR_9->vm_pgoff &
  ((1U << (VAR_4 - VAR_2)) - 1);
 VAR_16 = VAR_15 << VAR_2;

 if (VAR_16 + VAR_14 > VAR_13)
  return -VAR_0;





 if (!VAR_10->barmap[VAR_12]) {
  VAR_17 = FUNC_3(VAR_11,
         1 << VAR_12, "vfio-pci");
  if (VAR_17)
   return VAR_17;

  VAR_10->barmap[VAR_12] = FUNC_1(VAR_11, VAR_12, 0);
  if (!VAR_10->barmap[VAR_12]) {
   FUNC_2(VAR_11, 1 << VAR_12);
   return -VAR_1;
  }
 }

 VAR_9->vm_private_data = VAR_10;
 VAR_9->vm_page_prot = FUNC_6(VAR_9->vm_page_prot);
 VAR_9->vm_pgoff = (FUNC_5(VAR_11, VAR_12) >> VAR_2) + VAR_15;

 return FUNC_7(VAR_9, VAR_9->vm_start, VAR_9->vm_pgoff,
          VAR_14, VAR_9->vm_page_prot);
}
