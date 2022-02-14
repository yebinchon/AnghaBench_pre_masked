
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {struct xhci_dbc* dbc; } ;
struct xhci_dbc {struct dbc_ep* eps; } ;
struct dbc_ep {int dummy; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline struct dbc_ep *FUNC_0(struct xhci_hcd *VAR_1)
{
 struct xhci_dbc *VAR_2 = VAR_1->dbc;

 return &VAR_2->eps[VAR_0];
}
