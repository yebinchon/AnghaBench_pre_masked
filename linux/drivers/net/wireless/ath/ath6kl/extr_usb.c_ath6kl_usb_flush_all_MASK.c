
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath6kl_usb {TYPE_1__* pipes; } ;
struct TYPE_2__ {int urb_submitted; int * ar_usb; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ath6kl_usb *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->pipes[VAR_2].ar_usb != ((void*)0))
   FUNC_1(&VAR_1->pipes[VAR_2].urb_submitted);
 }





 FUNC_0();
}
