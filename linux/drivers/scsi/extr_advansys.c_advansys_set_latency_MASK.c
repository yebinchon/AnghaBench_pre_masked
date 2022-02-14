
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_3)
{
 if ((VAR_3->device == VAR_0) ||
     (VAR_3->device == VAR_1)) {
  FUNC_1(VAR_3, VAR_2, 0);
 } else {
  u8 VAR_4;
  FUNC_0(VAR_3, VAR_2, &VAR_4);
  if (VAR_4 < 0x20)
   FUNC_1(VAR_3, VAR_2, 0x20);
 }
}
