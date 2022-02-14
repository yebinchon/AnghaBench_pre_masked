
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_device; int dev; } ;
struct ilo_hwinfo {int * mmio_vaddr; int * ram_vaddr; int * db_vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int VAR_3 ;
 void* FUNC_1 (struct pci_dev*,int,int) ;
 int * FUNC_2 (struct pci_dev*,int,unsigned long,int) ;
 int FUNC_3 (struct pci_dev*,int *) ;
 int FUNC_4 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_4, struct ilo_hwinfo *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;


 VAR_5->mmio_vaddr = FUNC_1(VAR_4, 1, 0);
 if (VAR_5->mmio_vaddr == ((void*)0)) {
  FUNC_0(&VAR_4->dev, "Error mapping mmio\n");
  goto out;
 }


 if (VAR_4->subsystem_device == 0x00E4) {
  VAR_6 = 5;

  VAR_7 = FUNC_4(VAR_4, VAR_6) - 0x2000;
 } else {
  VAR_6 = 2;
  VAR_7 = 0;
 }
 VAR_5->ram_vaddr = FUNC_2(VAR_4, VAR_6, VAR_7, VAR_3 * VAR_1);
 if (VAR_5->ram_vaddr == ((void*)0)) {
  FUNC_0(&VAR_4->dev, "Error mapping shared mem\n");
  goto mmio_free;
 }


 VAR_5->db_vaddr = FUNC_1(VAR_4, 3, VAR_3 * VAR_2);
 if (VAR_5->db_vaddr == ((void*)0)) {
  FUNC_0(&VAR_4->dev, "Error mapping doorbell\n");
  goto ram_free;
 }

 return 0;
ram_free:
 FUNC_3(VAR_4, VAR_5->ram_vaddr);
mmio_free:
 FUNC_3(VAR_4, VAR_5->mmio_vaddr);
out:
 return -VAR_0;
}
