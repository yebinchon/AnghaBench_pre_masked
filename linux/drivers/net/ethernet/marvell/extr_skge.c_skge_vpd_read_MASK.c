
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static u32 FUNC_3(struct pci_dev *VAR_3, int VAR_4, u16 VAR_5)
{
 u32 VAR_6;

 FUNC_2(VAR_3, VAR_4 + VAR_0, VAR_5);

 do {
  FUNC_1(VAR_3, VAR_4 + VAR_0, &VAR_5);
 } while (!(VAR_5 & VAR_1));

 FUNC_0(VAR_3, VAR_4 + VAR_2, &VAR_6);
 return VAR_6;
}
