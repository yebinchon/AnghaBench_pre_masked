
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct pci_dev*,char*) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3)
{
 struct pci_dev *VAR_4;
 u8 VAR_5;





 VAR_4 = FUNC_1(VAR_2, VAR_1, ((void*)0));
 if (VAR_4 != ((void*)0)) {






  if (VAR_4->revision < 0x40 || VAR_4->revision > 0x42)
   goto exit;
 } else {
  VAR_4 = FUNC_1(VAR_2, VAR_0, ((void*)0));
  if (VAR_4 == ((void*)0))
   goto exit;


  if (VAR_4->revision < 0x10 || VAR_4->revision > 0x12)
   goto exit;
 }
 FUNC_3(VAR_3, 0x76, &VAR_5);





 VAR_5 &= ~(1<<5);
 VAR_5 |= (1<<4);
 FUNC_4(VAR_3, 0x76, VAR_5);
 FUNC_2(VAR_3, "Applying VIA southbridge workaround\n");
exit:
 FUNC_0(VAR_4);
}
