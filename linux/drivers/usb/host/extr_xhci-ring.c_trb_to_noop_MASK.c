
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * field; } ;
struct TYPE_3__ {int control; } ;
union xhci_trb {TYPE_2__ generic; TYPE_1__ link; } ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (union xhci_trb*) ;

__attribute__((used)) static void FUNC_3(union xhci_trb *VAR_2, u32 VAR_3)
{
 if (FUNC_2(VAR_2)) {

  VAR_2->link.control &= FUNC_1(~VAR_0);
 } else {
  VAR_2->generic.field[0] = 0;
  VAR_2->generic.field[1] = 0;
  VAR_2->generic.field[2] = 0;

  VAR_2->generic.field[3] &= FUNC_1(VAR_1);
  VAR_2->generic.field[3] |= FUNC_1(FUNC_0(VAR_3));
 }
}
