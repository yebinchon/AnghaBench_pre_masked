
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {scalar_t__ device; int multifunction; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*,char*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2)
{
 u8 VAR_3;
 u32 VAR_4;


 if (VAR_2->device < VAR_0)
  return;


 FUNC_3(VAR_2, 0x488, &VAR_4);
 if (VAR_4 & FUNC_0(25))
  return;

 FUNC_1(VAR_2, "Enabling HDA controller\n");
 FUNC_4(VAR_2, 0x488, VAR_4 | FUNC_0(25));


 FUNC_2(VAR_2, VAR_1, &VAR_3);
 VAR_2->multifunction = !!(VAR_3 & 0x80);
}
