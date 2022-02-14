
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev const*,int ,int) ;

__attribute__((used)) static u32 FUNC_1(const struct pci_dev *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_3 & (VAR_0 - 1);
 VAR_3 &= ~(VAR_0 - 1);
 FUNC_0(VAR_2, VAR_1, VAR_3);

 return VAR_4;
}
