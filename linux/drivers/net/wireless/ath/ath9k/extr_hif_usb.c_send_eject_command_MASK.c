
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {struct usb_host_interface* altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device {int dev; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int,int ) ;
 int FUNC_5 (struct usb_device*,int ,unsigned char*,int,int *,int) ;
 scalar_t__ FUNC_6 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_7 (struct usb_endpoint_descriptor*) ;
 int FUNC_8 (struct usb_interface*,int *) ;
 int FUNC_9 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct usb_interface *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_2(VAR_3);
 struct usb_host_interface *VAR_5 = &VAR_3->altsetting[0];
 struct usb_endpoint_descriptor *VAR_6;
 unsigned char *VAR_7;
 u8 VAR_8;
 int VAR_9;

 if (VAR_5->desc.bNumEndpoints < 2)
  return -VAR_0;


 for (VAR_9 = 1; VAR_9 >= 0; VAR_9--) {
  VAR_6 = &VAR_5->endpoint[VAR_9].desc;
  if (FUNC_6(VAR_6) &&
      FUNC_7(VAR_6)) {
   VAR_8 = VAR_6->bEndpointAddress;
   break;
  }
 }
 if (VAR_9 == -1) {
  FUNC_0(&VAR_4->dev,
   "ath9k_htc: Could not find bulk out endpoint\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(31, VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;


 VAR_7[0] = 0x55;
 VAR_7[1] = 0x53;
 VAR_7[2] = 0x42;
 VAR_7[3] = 0x43;
 VAR_7[14] = 6;

 VAR_7[15] = 0x1b;
 VAR_7[19] = 0x2;

 FUNC_1(&VAR_4->dev, "Ejecting storage device...\n");
 VAR_9 = FUNC_5(VAR_4, FUNC_9(VAR_4, VAR_8),
  VAR_7, 31, ((void*)0), 2 * VAR_2);
 FUNC_3(VAR_7);
 if (VAR_9)
  return VAR_9;




 FUNC_8(VAR_3, ((void*)0));
 return 0;
}
