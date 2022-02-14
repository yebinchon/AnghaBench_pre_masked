
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_endpoint_test {int test_reg_bar; int * bar; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;


 int FUNC_0 (struct pci_endpoint_test*,int,int) ;
 int FUNC_1 (struct pci_endpoint_test*,int,int,int) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static bool FUNC_3(struct pci_endpoint_test *VAR_0,
      enum pci_barno VAR_1)
{
 int VAR_2;
 u32 VAR_3;
 int VAR_4;
 struct pci_dev *VAR_5 = VAR_0->pdev;

 if (!VAR_0->bar[VAR_1])
  return 0;

 VAR_4 = FUNC_2(VAR_5, VAR_1);

 if (VAR_1 == VAR_0->test_reg_bar)
  VAR_4 = 0x4;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2 += 4)
  FUNC_1(VAR_0, VAR_1, VAR_2, 0xA0A0A0A0);

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2 += 4) {
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_3 != 0xA0A0A0A0)
   return 0;
 }

 return 1;
}
