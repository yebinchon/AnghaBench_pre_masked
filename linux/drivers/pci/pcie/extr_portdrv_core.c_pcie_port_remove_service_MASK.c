
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port_service_driver {int (* remove ) (struct pcie_device*) ;} ;
struct pcie_device {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct pcie_device*) ;
 struct pcie_device* FUNC_2 (struct device*) ;
 struct pcie_port_service_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct pcie_device *VAR_1;
 struct pcie_port_service_driver *VAR_2;

 if (!VAR_0 || !VAR_0->driver)
  return 0;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_3(VAR_0->driver);
 if (VAR_2 && VAR_2->remove) {
  VAR_2->remove(VAR_1);
  FUNC_0(VAR_0);
 }
 return 0;
}
