
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_regset {int list; } ;
struct xhci_hcd {int regset_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct xhci_regset* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct xhci_regset *FUNC_3(struct xhci_hcd *VAR_1)
{
 struct xhci_regset *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);





 FUNC_0(&VAR_2->list);
 FUNC_2(&VAR_2->list, &VAR_1->regset_list);

 return VAR_2;
}
