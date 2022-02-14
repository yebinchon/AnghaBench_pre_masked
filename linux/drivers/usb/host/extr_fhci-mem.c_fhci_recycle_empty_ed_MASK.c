
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fhci_hcd {int empty_eds; } ;
struct ed {int node; } ;


 int FUNC_0 (struct ed*) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct fhci_hcd *VAR_0, struct ed *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->node, &VAR_0->empty_eds);
}
