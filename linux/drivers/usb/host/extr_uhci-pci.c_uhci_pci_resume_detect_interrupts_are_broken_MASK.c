
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uhci_hcd {int rh_numports; scalar_t__ io_addr; } ;
struct TYPE_2__ {int vendor; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct uhci_hcd*) ;

__attribute__((used)) static int FUNC_3(struct uhci_hcd *VAR_2)
{
 int VAR_3;

 switch (FUNC_1(FUNC_2(VAR_2))->vendor) {
 default:
  break;

 case 129:



  return 1;

 case 128:







  for (VAR_3 = 0; VAR_3 < VAR_2->rh_numports; ++VAR_3) {
   if (FUNC_0(VAR_2->io_addr + VAR_0 + VAR_3 * 2) &
     VAR_1)
    return 1;
  }
  break;
 }
 return 0;
}
