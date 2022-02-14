
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uhci_qh {int node; } ;
struct uhci_hcd {TYPE_1__* skel_iso_qh; } ;
struct TYPE_2__ {int node; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct uhci_hcd *VAR_0, struct uhci_qh *VAR_1)
{
 FUNC_0(&VAR_1->node, &VAR_0->skel_iso_qh->node);


}
