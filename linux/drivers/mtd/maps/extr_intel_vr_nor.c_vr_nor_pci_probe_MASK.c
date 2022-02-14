
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ virt; } ;
struct vr_nor_mtd {scalar_t__ csr_base; TYPE_1__ map; int info; struct pci_dev* dev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct vr_nor_mtd*) ;
 struct vr_nor_mtd* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,struct vr_nor_mtd*) ;
 unsigned int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct vr_nor_mtd*) ;
 int FUNC_11 (struct vr_nor_mtd*) ;
 int FUNC_12 (struct vr_nor_mtd*) ;
 int FUNC_13 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 struct vr_nor_mtd *VAR_7 = ((void*)0);
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_5);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_7(VAR_5, VAR_0);
 if (VAR_9)
  goto disable_dev;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_3);
 VAR_9 = -VAR_1;
 if (!VAR_7)
  goto release;

 VAR_7->dev = VAR_5;

 VAR_9 = FUNC_10(VAR_7);
 if (VAR_9)
  goto release;

 VAR_9 = FUNC_12(VAR_7);
 if (VAR_9)
  goto destroy_maps;

 VAR_9 = FUNC_11(VAR_7);
 if (VAR_9)
  goto destroy_mtd_setup;

 FUNC_8(VAR_5, VAR_7);

 return 0;

      destroy_mtd_setup:
 FUNC_3(VAR_7->info);

      destroy_maps:

 VAR_8 = FUNC_9(VAR_7->csr_base + VAR_2);
 VAR_8 &= ~VAR_4;
 FUNC_13(VAR_8, VAR_7->csr_base + VAR_2);


 FUNC_0(VAR_7->map.virt);


 FUNC_0(VAR_7->csr_base);

      release:
 FUNC_1(VAR_7);
 FUNC_6(VAR_5);

      disable_dev:
 FUNC_4(VAR_5);

      out:
 return VAR_9;
}
