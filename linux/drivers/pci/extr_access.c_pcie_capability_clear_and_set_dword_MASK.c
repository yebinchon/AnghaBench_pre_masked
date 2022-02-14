
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int,int *) ;
 int FUNC_1 (struct pci_dev*,int,int ) ;

int FUNC_2(struct pci_dev *VAR_0, int VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (!VAR_4) {
  VAR_5 &= ~VAR_2;
  VAR_5 |= VAR_3;
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_5);
 }

 return VAR_4;
}
