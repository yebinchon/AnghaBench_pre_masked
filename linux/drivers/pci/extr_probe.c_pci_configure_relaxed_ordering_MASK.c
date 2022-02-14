
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev_flags; scalar_t__ is_virtfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_dev* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,char*) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_3)
{
 struct pci_dev *VAR_4;


 if (VAR_3->is_virtfn)
  return;

 if (!FUNC_3(VAR_3))
  return;





 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return;

 if (VAR_4->dev_flags & VAR_0) {
  FUNC_2(VAR_3, VAR_1,
        VAR_2);
  FUNC_1(VAR_3, "Relaxed Ordering disabled because the Root Port didn't support it\n");
 }
}
