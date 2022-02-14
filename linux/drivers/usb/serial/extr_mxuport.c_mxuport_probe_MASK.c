
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usb_serial {TYPE_3__* interface; TYPE_2__* dev; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct firmware {int* data; } ;
typedef int buf ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int idProduct; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_serial*,struct firmware const*) ;
 int FUNC_5 (struct usb_serial*,int*) ;
 int FUNC_6 (struct usb_serial*,int ,int ,int ) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,char*,int *) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (struct usb_serial*,void*) ;

__attribute__((used)) static int FUNC_11(struct usb_serial *VAR_5,
    const struct usb_device_id *VAR_6)
{
 u16 VAR_7 = FUNC_3(VAR_5->dev->descriptor.idProduct);
 const struct firmware *VAR_8 = ((void*)0);
 u32 VAR_9;
 int VAR_10;
 char VAR_11[32];
 int VAR_12;


 VAR_12 = FUNC_6(VAR_5, VAR_0, 0, 0);
 if (VAR_12) {
  FUNC_6(VAR_5, VAR_1, 0, 0);
  return VAR_12;
 }

 VAR_12 = FUNC_5(VAR_5, &VAR_9);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_0(&VAR_5->interface->dev, "Device firmware version v%x.%x.%x\n",
  (VAR_9 & 0xff0000) >> 16,
  (VAR_9 & 0xff00) >> 8,
  (VAR_9 & 0xff));

 FUNC_9(VAR_11, sizeof(VAR_11) - 1, "moxa/moxa-%04x.fw", VAR_7);

 VAR_12 = FUNC_8(&VAR_8, VAR_11, &VAR_5->interface->dev);
 if (VAR_12) {
  FUNC_2(&VAR_5->interface->dev, "Firmware %s not found\n",
    VAR_11);


  VAR_12 = 0;
 } else {
  VAR_10 = ((VAR_8->data[VAR_2] << 16) |
        (VAR_8->data[VAR_3] << 8) |
        VAR_8->data[VAR_4]);
  FUNC_0(&VAR_5->interface->dev,
   "Available firmware version v%x.%x.%x\n",
   VAR_8->data[VAR_2], VAR_8->data[VAR_3],
   VAR_8->data[VAR_4]);
  if (VAR_10 > VAR_9) {
   VAR_12 = FUNC_4(VAR_5, VAR_8);
   if (VAR_12)
    goto out;
   VAR_12 = FUNC_5(VAR_5, &VAR_9);
   if (VAR_12 < 0)
    goto out;
  }
 }

 FUNC_1(&VAR_5->interface->dev,
   "Using device firmware version v%x.%x.%x\n",
   (VAR_9 & 0xff0000) >> 16,
   (VAR_9 & 0xff00) >> 8,
   (VAR_9 & 0xff));





 FUNC_10(VAR_5, (void *)VAR_6->driver_info);
out:
 if (VAR_8)
  FUNC_7(VAR_8);
 return VAR_12;
}
