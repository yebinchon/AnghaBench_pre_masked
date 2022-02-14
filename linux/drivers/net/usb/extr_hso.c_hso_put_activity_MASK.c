
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hso_device {scalar_t__ is_active; int async_put_intf; TYPE_1__* usb; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct hso_device *VAR_2)
{
 if (VAR_2->usb->state != VAR_1) {
  if (VAR_2->is_active) {
   VAR_2->is_active = 0;
   FUNC_0(&VAR_2->async_put_intf);
   return -VAR_0;
  }
 }
 VAR_2->is_active = 0;
 return 0;
}
