
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; int parent; } ;
struct pci_bus {int dev; struct resource busn_res; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (struct resource*,int,int) ;
 int FUNC_1 (int *,char*,struct resource*,char*,int) ;
 int FUNC_2 (struct pci_bus*,int,int ) ;

int FUNC_3(struct pci_bus *VAR_1, int VAR_2)
{
 struct resource *VAR_3 = &VAR_1->busn_res;
 struct resource VAR_4 = *VAR_3;
 resource_size_t VAR_5;
 int VAR_6;

 if (VAR_3->start > VAR_2)
  return -VAR_0;

 VAR_5 = VAR_2 - VAR_3->start + 1;
 VAR_6 = FUNC_0(VAR_3, VAR_3->start, VAR_5);
 FUNC_1(&VAR_1->dev, "busn_res: %pR end %s updated to %02x\n",
   &VAR_4, VAR_6 ? "can not be" : "is", VAR_2);

 if (!VAR_6 && !VAR_3->parent)
  FUNC_2(VAR_1, VAR_3->start, VAR_3->end);

 return VAR_6;
}
