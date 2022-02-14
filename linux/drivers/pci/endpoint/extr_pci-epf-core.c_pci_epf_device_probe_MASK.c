
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf_driver {int (* probe ) (struct pci_epf*) ;} ;
struct pci_epf {struct pci_epf_driver* driver; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_epf*) ;
 struct pci_epf* FUNC_1 (struct device*) ;
 struct pci_epf_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct pci_epf *VAR_2 = FUNC_1(VAR_1);
 struct pci_epf_driver *VAR_3 = FUNC_2(VAR_1->driver);

 if (!VAR_3->probe)
  return -VAR_0;

 VAR_2->driver = VAR_3;

 return VAR_3->probe(VAR_2);
}
