
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {TYPE_2__* serial; } ;
struct TYPE_3__ {int bcdDevice; } ;
struct usb_device {TYPE_1__ descriptor; int dev; } ;
struct belkin_sa_private {int bad_flow_control; scalar_t__ last_msr; scalar_t__ last_lsr; scalar_t__ control_state; int lock; } ;
struct TYPE_4__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 struct belkin_sa_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_serial_port*,struct belkin_sa_private*) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_2)
{
 struct usb_device *VAR_3 = VAR_2->serial->dev;
 struct belkin_sa_private *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct belkin_sa_private), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(&VAR_4->lock);
 VAR_4->control_state = 0;
 VAR_4->last_lsr = 0;
 VAR_4->last_msr = 0;

 VAR_4->bad_flow_control =
  (FUNC_2(VAR_3->descriptor.bcdDevice) <= 0x0206) ? 1 : 0;
 FUNC_0(&VAR_3->dev, "bcdDevice: %04x, bfc: %d\n",
     FUNC_2(VAR_3->descriptor.bcdDevice),
     VAR_4->bad_flow_control);

 FUNC_4(VAR_2, VAR_4);

 return 0;
}
