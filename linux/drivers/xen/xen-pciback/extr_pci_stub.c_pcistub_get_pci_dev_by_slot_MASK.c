
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pcibk_device {int dummy; } ;
struct pcistub_device {int dummy; } ;
struct pci_dev {int dummy; } ;


 struct pcistub_device* FUNC_0 (int,int,int,int) ;
 struct pci_dev* FUNC_1 (struct xen_pcibk_device*,struct pcistub_device*) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

struct pci_dev *FUNC_4(struct xen_pcibk_device *VAR_1,
         int VAR_2, int VAR_3,
         int VAR_4, int VAR_5)
{
 struct pcistub_device *VAR_6;
 struct pci_dev *VAR_7 = ((void*)0);
 unsigned long VAR_8;

 FUNC_2(&VAR_0, VAR_8);

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  VAR_7 = FUNC_1(VAR_1, VAR_6);

 FUNC_3(&VAR_0, VAR_8);
 return VAR_7;
}
