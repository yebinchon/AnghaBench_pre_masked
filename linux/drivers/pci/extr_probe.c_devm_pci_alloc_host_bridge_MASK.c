
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; } ;
struct pci_host_bridge {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct pci_host_bridge* FUNC_0 (struct device*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pci_host_bridge*) ;

struct pci_host_bridge *FUNC_2(struct device *VAR_2,
         size_t VAR_3)
{
 struct pci_host_bridge *VAR_4;

 VAR_4 = FUNC_0(VAR_2, sizeof(*VAR_4) + VAR_3, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_1(VAR_4);
 VAR_4->dev.release = VAR_1;

 return VAR_4;
}
