
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int device; int irq; } ;
struct mgsl_struct {int phys_lcr_base; int lcr_offset; int io_addr_size; int misc_ctrl_value; int hw_version; int irq_flags; int bus_type; void* phys_memory_base; int irq_level; void* io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mgsl_struct*) ;
 struct mgsl_struct* FUNC_1 () ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 void* FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5 (struct pci_dev *VAR_4,
     const struct pci_device_id *VAR_5)
{
 struct mgsl_struct *VAR_6;

 if (FUNC_2(VAR_4)) {
  FUNC_4("error enabling pci device %p\n", VAR_4);
  return -VAR_0;
 }

 VAR_6 = FUNC_1();
 if (!VAR_6) {
  FUNC_4("can't allocate device instance data.\n");
  return -VAR_0;
 }



 VAR_6->io_base = FUNC_3(VAR_4, 2);
 VAR_6->irq_level = VAR_4->irq;
 VAR_6->phys_memory_base = FUNC_3(VAR_4, 3);





 VAR_6->phys_lcr_base = FUNC_3(VAR_4, 0);
 VAR_6->lcr_offset = VAR_6->phys_lcr_base & (VAR_3-1);
 VAR_6->phys_lcr_base &= ~(VAR_3-1);

 VAR_6->bus_type = VAR_2;
 VAR_6->io_addr_size = 8;
 VAR_6->irq_flags = VAR_1;

 if (VAR_4->device == 0x0210) {

  VAR_6->misc_ctrl_value = 0x007c4080;
  VAR_6->hw_version = 1;
 } else {





  VAR_6->misc_ctrl_value = 0x087e4546;
  VAR_6->hw_version = 0;
 }

 FUNC_0(VAR_6);

 return 0;
}
