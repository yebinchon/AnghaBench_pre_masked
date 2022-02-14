
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcan_usb_pro_rxts {int * ts64; } ;
struct pcan_usb_pro_interface {scalar_t__ cm_ignore_count; int time_ref; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct pcan_usb_pro_interface *VAR_0,
       struct pcan_usb_pro_rxts *VAR_1)
{

 if (VAR_0->cm_ignore_count > 0)
  VAR_0->cm_ignore_count--;
 else
  FUNC_1(&VAR_0->time_ref,
        FUNC_0(VAR_1->ts64[1]));
}
