
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf_test {int cmd_handler; struct pci_epf* epf; } ;
struct device {int dummy; } ;
struct pci_epf {int * header; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct pci_epf_test* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct pci_epf*,struct pci_epf_test*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct pci_epf *VAR_4)
{
 struct pci_epf_test *VAR_5;
 struct device *VAR_6 = &VAR_4->dev;

 VAR_5 = FUNC_1(VAR_6, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->header = &VAR_3;
 VAR_5->epf = VAR_4;

 FUNC_0(&VAR_5->cmd_handler, VAR_2);

 FUNC_2(VAR_4, VAR_5);
 return 0;
}
