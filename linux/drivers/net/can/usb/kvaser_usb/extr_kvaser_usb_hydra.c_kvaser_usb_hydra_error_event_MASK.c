
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvaser_usb {TYPE_1__* intf; } ;
struct TYPE_4__ {int error_code; int info1; } ;
struct kvaser_cmd {TYPE_2__ error_event; } ;
struct TYPE_3__ {int dev; } ;




 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct kvaser_usb *VAR_0,
      const struct kvaser_cmd *VAR_1)
{
 switch (VAR_1->error_event.error_code) {
 case 128:
  FUNC_2(VAR_0, VAR_1);
  break;

 case 129:



  FUNC_0(&VAR_0->intf->dev,
   "Received CAN error event for cmd_no (%u)\n",
   FUNC_3(VAR_1->error_event.info1));
  break;

 default:
  FUNC_1(&VAR_0->intf->dev,
    "Unhandled error event (%d)\n",
    VAR_1->error_event.error_code);
  break;
 }
}
