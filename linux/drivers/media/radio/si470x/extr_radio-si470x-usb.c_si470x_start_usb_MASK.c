
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct si470x_device {int int_in_running; int status_rssi_auto_update; int hdl; TYPE_2__* intf; int int_in_urb; TYPE_1__* int_in_endpoint; int int_in_buffer; int usbdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int bInterval; int wMaxPacketSize; int bEndpointAddress; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (struct si470x_device*) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,struct si470x_device*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct si470x_device *VAR_2)
{
 int VAR_3;


 FUNC_4(VAR_2->int_in_urb, VAR_2->usbdev,
   FUNC_5(VAR_2->usbdev,
    VAR_2->int_in_endpoint->bEndpointAddress),
   VAR_2->int_in_buffer,
   FUNC_1(VAR_2->int_in_endpoint->wMaxPacketSize),
   VAR_1,
   VAR_2,
   VAR_2->int_in_endpoint->bInterval);

 VAR_2->int_in_running = 1;
 FUNC_2();

 VAR_3 = FUNC_6(VAR_2->int_in_urb, VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_2->intf->dev,
    "submitting int urb failed (%d)\n", VAR_3);
  VAR_2->int_in_running = 0;
 }
 VAR_2->status_rssi_auto_update = VAR_2->int_in_running;


 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_7(&VAR_2->hdl);

 return VAR_3;
}
