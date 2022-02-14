
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct myri10ge_priv {int vendor_specific_offset; struct pci_dev* pdev; } ;


 int FUNC_0 (struct pci_dev*,int,int *) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static u32 FUNC_3(struct myri10ge_priv *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 int VAR_2 = VAR_0->vendor_specific_offset;
 u32 VAR_3;


 FUNC_1(VAR_1, VAR_2 + 0x10, 0x3);


 FUNC_2(VAR_1, VAR_2 + 0x18, 0xfffffff0);
 FUNC_0(VAR_1, VAR_2 + 0x14, &VAR_3);
 return VAR_3;
}
