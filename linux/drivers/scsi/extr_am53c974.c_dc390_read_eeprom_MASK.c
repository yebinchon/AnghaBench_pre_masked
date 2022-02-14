
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2, u16 *VAR_3)
{
 u8 VAR_4 = VAR_1, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_2(VAR_2, 0xc0, 0);
  FUNC_3(160);

  FUNC_1(VAR_2, VAR_4++);
  *VAR_3++ = FUNC_0(VAR_2);

  FUNC_2(VAR_2, 0x80, 0);
  FUNC_2(VAR_2, 0x80, 0);
  FUNC_3(160);
 }
}
