
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_usb {TYPE_1__* pipes; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int io_complete_work; int urb_submitted; scalar_t__ ar_usb; } ;


 int VAR_0 ;
 struct ath10k_usb* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ath10k *VAR_1)
{
 struct ath10k_usb *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->pipes[VAR_3].ar_usb) {
   FUNC_2(&VAR_2->pipes[VAR_3].urb_submitted);
   FUNC_1(&VAR_2->pipes[VAR_3].io_complete_work);
  }
 }
}
