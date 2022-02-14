
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvaser_usb {TYPE_1__* intf; } ;
struct TYPE_4__ {int info1; } ;
struct kvaser_cmd {TYPE_2__ error_event; } ;
struct TYPE_3__ {int dev; } ;







 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct kvaser_usb *VAR_0,
         const struct kvaser_cmd *VAR_1)
{

 switch (FUNC_1(VAR_1->error_event.info1)) {
 case 129:
  FUNC_0(&VAR_0->intf->dev,
    "CMD_START_CHIP_REQ error in parameter\n");
  break;

 case 128:
  FUNC_0(&VAR_0->intf->dev,
    "CMD_STOP_CHIP_REQ error in parameter\n");
  break;

 case 132:
  FUNC_0(&VAR_0->intf->dev,
    "CMD_FLUSH_QUEUE error in parameter\n");
  break;

 case 130:
  FUNC_0(&VAR_0->intf->dev,
    "Set bittiming failed. Error in parameter\n");
  break;

 case 131:
  FUNC_0(&VAR_0->intf->dev,
    "Set data bittiming failed. Error in parameter\n");
  break;

 default:
  FUNC_0(&VAR_0->intf->dev,
    "Unhandled parameter error event cmd_no (%u)\n",
    FUNC_1(VAR_1->error_event.info1));
  break;
 }
}
