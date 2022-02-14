
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct portdrv_service_data {scalar_t__ service; struct device* dev; struct pcie_port_service_driver* drv; } ;
struct pcie_port_service_driver {scalar_t__ service; } ;
struct device {scalar_t__ driver; int * bus; } ;


 int VAR_0 ;
 struct pcie_port_service_driver* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, void *VAR_2)
{
 struct pcie_port_service_driver *VAR_3;
 struct portdrv_service_data *VAR_4;
 u32 VAR_5;

 VAR_4 = (struct portdrv_service_data *) VAR_2;
 VAR_5 = VAR_4->service;

 if (VAR_1->bus == &VAR_0 && VAR_1->driver) {
  VAR_3 = FUNC_0(VAR_1->driver);
  if (VAR_3->service == VAR_5) {
   VAR_4->drv = VAR_3;
   VAR_4->dev = VAR_1;
   return 1;
  }
 }

 return 0;
}
