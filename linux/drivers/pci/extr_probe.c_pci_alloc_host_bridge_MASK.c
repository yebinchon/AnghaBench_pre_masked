
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; } ;
struct pci_host_bridge {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct pci_host_bridge* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pci_host_bridge*) ;
 int VAR_1 ;

struct pci_host_bridge *FUNC_2(size_t VAR_2)
{
 struct pci_host_bridge *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3) + VAR_2, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_3);
 VAR_3->dev.release = VAR_1;

 return VAR_3;
}
