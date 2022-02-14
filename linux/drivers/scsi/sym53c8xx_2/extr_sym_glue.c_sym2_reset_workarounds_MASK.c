
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct sym_chip {int features; } ;
struct pci_dev {int revision; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 struct sym_chip* FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_3)
{
 u_short VAR_4;
 struct sym_chip *VAR_5;

 VAR_5 = FUNC_2(VAR_3->device, VAR_3->revision);




 FUNC_0(VAR_3, VAR_1, &VAR_4);
 if (!(VAR_5->features & VAR_0) && (VAR_4 & VAR_2)) {
  VAR_4 = VAR_2;
  FUNC_1(VAR_3, VAR_1, VAR_4);
  FUNC_0(VAR_3, VAR_1, &VAR_4);
 }
}
