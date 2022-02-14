
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0, u8 VAR_1)
{
 u8 VAR_2 = 1, VAR_3 = 0x80, VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 9; VAR_5++) {
  if (VAR_2) {
   FUNC_0(VAR_0, 0x80, 0x40);
   VAR_4 = 0xc0;
  } else
   VAR_4 = 0x80;

  FUNC_1(160);
  FUNC_0(VAR_0, 0x80, VAR_4);
  FUNC_1(160);
  FUNC_0(VAR_0, 0x80, 0);
  FUNC_1(160);

  VAR_2 = (VAR_1 & VAR_3) ? 1 : 0;
  VAR_3 >>= 1;
 }
}
