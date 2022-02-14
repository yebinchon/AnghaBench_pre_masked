
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,unsigned int*) ;
 int FUNC_1 (struct pci_dev*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_3, u8 VAR_4)
{
 unsigned int VAR_5;

 FUNC_0(VAR_3, VAR_2, &VAR_5);
 VAR_5 &= ~VAR_1;
 VAR_5 |= (VAR_0 | (VAR_4 << 1));
 FUNC_1(VAR_3, VAR_2, VAR_5);
}
