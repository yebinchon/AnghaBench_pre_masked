
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int pending; struct td** td; } ;
typedef TYPE_1__ urb_priv_t ;
struct td {int dummy; } ;
struct ohci_hcd {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ohci_hcd*,struct td*) ;

__attribute__((used)) static void FUNC_3 (struct ohci_hcd *VAR_0, urb_priv_t *VAR_1)
{
 int VAR_2 = VAR_1->length - 1;

 if (VAR_2 >= 0) {
  int VAR_3;
  struct td *VAR_4;

  for (VAR_3 = 0; VAR_3 <= VAR_2; VAR_3++) {
   VAR_4 = VAR_1->td [VAR_3];
   if (VAR_4)
    FUNC_2 (VAR_0, VAR_4);
  }
 }

 FUNC_1 (&VAR_1->pending);
 FUNC_0 (VAR_1);
}
