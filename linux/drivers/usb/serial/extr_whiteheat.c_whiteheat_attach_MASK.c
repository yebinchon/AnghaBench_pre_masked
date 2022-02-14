
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct whiteheat_hw_info {int sw_minor_rev; int sw_major_rev; } ;
struct whiteheat_command_private {int wait_command; scalar_t__ port_running; int mutex; } ;
struct usb_serial_port {TYPE_2__* read_urb; TYPE_1__* write_urb; int bulk_in_endpointAddress; int bulk_out_endpointAddress; } ;
struct usb_serial {TYPE_3__* type; TYPE_4__* dev; struct usb_serial_port** port; } ;
typedef scalar_t__ __u8 ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {int description; } ;
struct TYPE_9__ {int complete; } ;
struct TYPE_8__ {int complete; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int,scalar_t__*,int,int*,int ) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (struct usb_serial_port*,struct whiteheat_command_private*) ;
 int FUNC_10 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_11(struct usb_serial *VAR_8)
{
 struct usb_serial_port *VAR_9;
 struct whiteheat_command_private *VAR_10;
 struct whiteheat_hw_info *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 __u8 *VAR_15;
 __u8 *VAR_16;

 VAR_9 = VAR_8->port[VAR_0];

 VAR_12 = FUNC_10(VAR_8->dev,
   VAR_9->bulk_out_endpointAddress);
 VAR_15 = FUNC_4(2, VAR_4);
 if (!VAR_15)
  goto no_command_buffer;
 VAR_15[0] = VAR_5;
 VAR_15[1] = 0;

 VAR_16 = FUNC_4(sizeof(*VAR_11) + 1, VAR_4);
 if (!VAR_16)
  goto no_result_buffer;





 FUNC_7(VAR_8->dev, VAR_12);
 VAR_13 = FUNC_6(VAR_8->dev, VAR_12, VAR_15, 2,
      &VAR_14, VAR_1);
 if (VAR_13) {
  FUNC_0(&VAR_8->dev->dev, "%s: Couldn't send command [%d]\n",
   VAR_8->type->description, VAR_13);
  goto no_firmware;
 } else if (VAR_14 != 2) {
  FUNC_0(&VAR_8->dev->dev, "%s: Send command incomplete [%d]\n",
   VAR_8->type->description, VAR_14);
  goto no_firmware;
 }

 VAR_12 = FUNC_8(VAR_8->dev,
    VAR_9->bulk_in_endpointAddress);

 FUNC_7(VAR_8->dev, VAR_12);
 VAR_13 = FUNC_6(VAR_8->dev, VAR_12, VAR_16,
   sizeof(*VAR_11) + 1, &VAR_14, VAR_1);
 if (VAR_13) {
  FUNC_0(&VAR_8->dev->dev, "%s: Couldn't get results [%d]\n",
   VAR_8->type->description, VAR_13);
  goto no_firmware;
 } else if (VAR_14 != sizeof(*VAR_11) + 1) {
  FUNC_0(&VAR_8->dev->dev, "%s: Get results incomplete [%d]\n",
   VAR_8->type->description, VAR_14);
  goto no_firmware;
 } else if (VAR_16[0] != VAR_15[0]) {
  FUNC_0(&VAR_8->dev->dev, "%s: Command failed [%d]\n",
   VAR_8->type->description, VAR_16[0]);
  goto no_firmware;
 }

 VAR_11 = (struct whiteheat_hw_info *)&VAR_16[1];

 FUNC_1(&VAR_8->dev->dev, "%s: Firmware v%d.%02d\n",
   VAR_8->type->description,
   VAR_11->sw_major_rev, VAR_11->sw_minor_rev);

 VAR_10 = FUNC_4(sizeof(struct whiteheat_command_private),
        VAR_4);
 if (!VAR_10)
  goto no_command_private;

 FUNC_5(&VAR_10->mutex);
 VAR_10->port_running = 0;
 FUNC_2(&VAR_10->wait_command);
 FUNC_9(VAR_9, VAR_10);
 VAR_9->write_urb->complete = VAR_7;
 VAR_9->read_urb->complete = VAR_6;
 FUNC_3(VAR_16);
 FUNC_3(VAR_15);

 return 0;

no_firmware:

 FUNC_0(&VAR_8->dev->dev,
  "%s: Unable to retrieve firmware version, try replugging\n",
  VAR_8->type->description);
 FUNC_0(&VAR_8->dev->dev,
  "%s: If the firmware is not running (status led not blinking)\n",
  VAR_8->type->description);
 FUNC_0(&VAR_8->dev->dev,
  "%s: please contact support@connecttech.com\n",
  VAR_8->type->description);
 FUNC_3(VAR_16);
 FUNC_3(VAR_15);
 return -VAR_2;

no_command_private:
 FUNC_3(VAR_16);
no_result_buffer:
 FUNC_3(VAR_15);
no_command_buffer:
 return -VAR_3;
}
