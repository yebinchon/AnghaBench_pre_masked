
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfa384x_usbctlx {int state; } ;
struct TYPE_2__ {int transfer_flags; } ;
struct hfa384x {TYPE_1__ ctlx_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfa384x*,struct hfa384x_usbctlx*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct hfa384x *VAR_3,
      struct hfa384x_usbctlx *VAR_4)
{
 int VAR_5;






 VAR_3->ctlx_urb.transfer_flags |= VAR_2;
 VAR_5 = FUNC_1(&VAR_3->ctlx_urb);

 if (VAR_5 != -VAR_1) {






  VAR_4->state = VAR_0;
  FUNC_0(VAR_3, VAR_4);
  VAR_5 = 0;
 }

 return VAR_5;
}
