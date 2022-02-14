
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; int end; int name; int flags; } ;
struct pci_bus {int dev; TYPE_1__* parent; struct resource busn_res; } ;
struct TYPE_2__ {struct resource busn_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,struct resource*,char*,struct resource*,int ,struct resource*) ;
 struct resource* FUNC_1 (int ) ;
 int FUNC_2 (struct pci_bus*) ;
 scalar_t__ FUNC_3 (struct pci_bus*) ;
 struct resource* FUNC_4 (struct resource*,struct resource*) ;

int FUNC_5(struct pci_bus *VAR_2, int VAR_3, int VAR_4)
{
 struct resource *VAR_5 = &VAR_2->busn_res;
 struct resource *VAR_6, *VAR_7;

 VAR_5->start = VAR_3;
 VAR_5->end = VAR_4;
 VAR_5->flags = VAR_0;

 if (!FUNC_3(VAR_2))
  VAR_6 = &VAR_2->parent->busn_res;
 else {
  VAR_6 = FUNC_1(FUNC_2(VAR_2));
  VAR_5->flags |= VAR_1;
 }

 VAR_7 = FUNC_4(VAR_6, VAR_5);

 if (VAR_7)
  FUNC_0(&VAR_2->dev,
      "busn_res: can not insert %pR under %s%pR (conflicts with %s %pR)\n",
       VAR_5, FUNC_3(VAR_2) ? "domain " : "",
       VAR_6, VAR_7->name, VAR_7);

 return VAR_7 == ((void*)0);
}
