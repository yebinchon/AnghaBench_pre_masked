
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u16 FUNC_3(struct pci_dev *VAR_0)
{
 int VAR_1;
 u16 VAR_2 = 0;
 u8 VAR_3;

 for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
  VAR_2 <<= 1;

  FUNC_1(VAR_0, 0x80, 0x80);
  FUNC_2(160);
  FUNC_1(VAR_0, 0x80, 0x40);
  FUNC_2(160);
  FUNC_0(VAR_0, 0x00, &VAR_3);

  if (VAR_3 == 0x22)
   VAR_2 |= 1;
 }

 return VAR_2;
}
