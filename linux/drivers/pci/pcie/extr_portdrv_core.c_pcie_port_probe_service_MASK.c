
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port_service_driver {int (* probe ) (struct pcie_device*) ;} ;
struct pcie_device {int dummy; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct pcie_device*) ;
 struct pcie_device* FUNC_2 (struct device*) ;
 struct pcie_port_service_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct pcie_device *VAR_2;
 struct pcie_port_service_driver *VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_1->driver)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_1->driver);
 if (!VAR_3 || !VAR_3->probe)
  return -VAR_0;

 VAR_2 = FUNC_2(VAR_1);
 VAR_4 = VAR_3->probe(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_1);
 return 0;
}
