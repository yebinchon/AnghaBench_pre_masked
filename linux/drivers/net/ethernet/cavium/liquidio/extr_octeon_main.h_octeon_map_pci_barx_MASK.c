
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct octeon_device {TYPE_2__* pci_dev; TYPE_1__* mmio; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int len; int mapped_len; int done; int hw_addr; int start; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static inline int FUNC_7(struct octeon_device *VAR_1,
          int VAR_2, int VAR_3)
{
 u32 VAR_4 = 0;

 if (FUNC_4(VAR_1->pci_dev, VAR_2 * 2, VAR_0)) {
  FUNC_1(&VAR_1->pci_dev->dev, "pci_request_region failed for bar %d\n",
   VAR_2);
  return 1;
 }

 VAR_1->mmio[VAR_2].start = FUNC_6(VAR_1->pci_dev, VAR_2 * 2);
 VAR_1->mmio[VAR_2].len = FUNC_5(VAR_1->pci_dev, VAR_2 * 2);

 VAR_4 = VAR_1->mmio[VAR_2].len;
 if (!VAR_4)
  goto err_release_region;

 if (VAR_3 && (VAR_4 > VAR_3))
  VAR_4 = VAR_3;

 VAR_1->mmio[VAR_2].hw_addr =
  FUNC_2(VAR_1->mmio[VAR_2].start, VAR_4);
 VAR_1->mmio[VAR_2].mapped_len = VAR_4;

 FUNC_0(&VAR_1->pci_dev->dev, "BAR%d start: 0x%llx mapped %u of %u bytes\n",
  VAR_2, VAR_1->mmio[VAR_2].start, VAR_4,
  VAR_1->mmio[VAR_2].len);

 if (!VAR_1->mmio[VAR_2].hw_addr) {
  FUNC_1(&VAR_1->pci_dev->dev, "error ioremap for bar %d\n",
   VAR_2);
  goto err_release_region;
 }
 VAR_1->mmio[VAR_2].done = 1;

 return 0;

err_release_region:
 FUNC_3(VAR_1->pci_dev, VAR_2 * 2);
 return 1;
}
