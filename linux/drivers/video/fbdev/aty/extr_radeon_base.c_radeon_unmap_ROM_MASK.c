
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeonfb_info {int bios_seg; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_1(struct radeonfb_info *VAR_0, struct pci_dev *VAR_1)
{
 if (!VAR_0->bios_seg)
  return;
 FUNC_0(VAR_1, VAR_0->bios_seg);
}
