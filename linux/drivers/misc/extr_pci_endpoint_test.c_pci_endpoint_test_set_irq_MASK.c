
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_endpoint_test {struct pci_dev* pdev; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct pci_endpoint_test*,int) ;
 int FUNC_2 (struct pci_endpoint_test*) ;
 int FUNC_3 (struct pci_endpoint_test*) ;
 int FUNC_4 (struct pci_endpoint_test*) ;

__attribute__((used)) static bool FUNC_5(struct pci_endpoint_test *VAR_4,
          int VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->pdev;
 struct device *VAR_7 = &VAR_6->dev;

 if (VAR_5 < VAR_0 || VAR_5 > VAR_1) {
  FUNC_0(VAR_7, "Invalid IRQ type option\n");
  return 0;
 }

 if (VAR_3 == VAR_5)
  return 1;

 FUNC_3(VAR_4);
 FUNC_2(VAR_4);

 if (!FUNC_1(VAR_4, VAR_5))
  goto err;

 if (!FUNC_4(VAR_4))
  goto err;

 VAR_3 = VAR_5;
 return 1;

err:
 FUNC_2(VAR_4);
 VAR_3 = VAR_2;
 return 0;
}
