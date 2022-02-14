
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hso_device {int is_active; TYPE_1__* usb; int async_get_intf; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct hso_device *VAR_3)
{
 if (VAR_3->usb->state == VAR_2) {
  if (!VAR_3->is_active) {
   VAR_3->is_active = 1;
   FUNC_0(&VAR_3->async_get_intf);
  }
 }

 if (VAR_3->usb->state != VAR_1)
  return -VAR_0;

 FUNC_1(VAR_3->usb);

 return 0;
}
