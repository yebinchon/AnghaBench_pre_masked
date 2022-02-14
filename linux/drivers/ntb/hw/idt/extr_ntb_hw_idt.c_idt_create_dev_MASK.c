
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct idt_ntb_dev {struct idt_89hpes_cfg* swcfg; int gasa_lock; int msg_mask_lock; int db_mask_lock; TYPE_1__ ntb; } ;
struct idt_89hpes_cfg {int name; } ;


 int VAR_0 ;
 struct idt_ntb_dev* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 struct idt_ntb_dev* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct idt_ntb_dev *FUNC_6(struct pci_dev *VAR_2,
       const struct pci_device_id *VAR_3)
{
 struct idt_ntb_dev *VAR_4;


 VAR_4 = FUNC_4(&VAR_2->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  FUNC_2(&VAR_2->dev, "Memory allocation failed for descriptor");
  return FUNC_0(-VAR_0);
 }


 VAR_4->swcfg = (struct idt_89hpes_cfg *)VAR_3->driver_data;

 VAR_4->ntb.pdev = VAR_2;


 FUNC_5(&VAR_4->db_mask_lock);
 FUNC_5(&VAR_4->msg_mask_lock);
 FUNC_5(&VAR_4->gasa_lock);

 FUNC_3(&VAR_2->dev, "IDT %s discovered", VAR_4->swcfg->name);

 FUNC_1(&VAR_2->dev, "NTB device descriptor created");

 return VAR_4;
}
