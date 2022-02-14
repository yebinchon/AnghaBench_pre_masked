
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port_service_driver {int (* error_resume ) (int ) ;} ;
struct pcie_device {int port; } ;
struct device {scalar_t__ driver; int * bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct pcie_device* FUNC_1 (struct device*) ;
 struct pcie_port_service_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct pcie_device *VAR_3;
 struct pcie_port_service_driver *VAR_4;

 if (VAR_1->bus == &VAR_0 && VAR_1->driver) {
  VAR_4 = FUNC_2(VAR_1->driver);
  if (VAR_4 && VAR_4->error_resume) {
   VAR_3 = FUNC_1(VAR_1);


   VAR_4->error_resume(VAR_3->port);
  }
 }

 return 0;
}
