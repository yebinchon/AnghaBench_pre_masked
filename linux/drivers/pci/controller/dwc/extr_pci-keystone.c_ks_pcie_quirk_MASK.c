
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int class; int member_0; int class_mask; } ;
struct pci_dev {int dev; struct pci_bus* bus; } ;
struct pci_bus {struct pci_bus* parent; struct pci_dev* self; } ;







 int FUNC_0 (int const,int ) ;

 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct pci_bus*) ;
 scalar_t__ FUNC_3 (struct pci_device_id const*,struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct pci_bus *VAR_1 = VAR_0->bus;
 struct pci_dev *VAR_2;
 static const struct pci_device_id VAR_3[] = {
  { FUNC_0(128, 131),
   .class = 129 << 8, .class_mask = ~0, },
  { FUNC_0(128, 133),
   .class = 129 << 8, .class_mask = ~0, },
  { FUNC_0(128, 130),
   .class = 129 << 8, .class_mask = ~0, },
  { FUNC_0(128, 132),
   .class = 129 << 8, .class_mask = ~0, },
  { 0, },
 };

 if (FUNC_2(VAR_1))
  VAR_2 = VAR_0;


 while (!FUNC_2(VAR_1)) {
  VAR_2 = VAR_1->self;
  VAR_1 = VAR_1->parent;
 }

 if (!VAR_2)
  return;







 if (FUNC_3(VAR_3, VAR_2)) {
  if (FUNC_4(VAR_0) > 256) {
   FUNC_1(&VAR_0->dev, "limiting MRRS to 256\n");
   FUNC_5(VAR_0, 256);
  }
 }
}
