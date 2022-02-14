
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct pci_cmd_info {int val; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_1, int VAR_2, u16 *VAR_3, void *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 const struct pci_cmd_info *VAR_6 = VAR_4;

 *VAR_3 &= VAR_0;
 *VAR_3 |= VAR_6->val & ~VAR_0;

 return VAR_5;
}
