
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int control; } ;
union xhci_trb {TYPE_1__ link; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(union xhci_trb *VAR_1)
{
 return FUNC_0(VAR_1->link.control) & VAR_0;
}
