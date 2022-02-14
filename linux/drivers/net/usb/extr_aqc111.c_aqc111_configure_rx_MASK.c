
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct usbnet {TYPE_2__* net; TYPE_1__* udev; } ;
struct aqc111_data {int link_speed; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_4__ {int mtu; } ;
struct TYPE_3__ {int speed; } ;


 int * VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct usbnet*,int ,int ,int,int*) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int,size_t*) ;
 int FUNC_2 (size_t*,int *,int) ;
 int FUNC_3 (TYPE_2__*,char*,int,int) ;

__attribute__((used)) static void FUNC_4(struct usbnet *VAR_6,
    struct aqc111_data *VAR_7)
{
 enum usb_device_speed VAR_8 = VAR_6->udev->speed;
 u16 VAR_9 = 0, VAR_10 = 0;
 u8 VAR_11[5] = { 0 };
 u8 VAR_12 = 0;
 u16 VAR_13 = 0;
 u8 VAR_14 = 0;

 VAR_11[0] = 0x00;
 VAR_11[1] = 0xF8;
 VAR_11[2] = 0x07;
 switch (VAR_7->link_speed) {
 case 132:
  VAR_9 = 5000;
  VAR_14 = 0x05;
  VAR_13 = 0x001F;
  break;
 case 133:
  VAR_9 = 2500;
  VAR_13 = 0x003F;
  break;
 case 134:
  VAR_9 = 1000;
  VAR_13 = 0x009F;
  break;
 case 135:
  VAR_9 = 100;
  VAR_12 = 1;
  VAR_13 = 0x063F;
  VAR_11[1] = 0xFB;
  VAR_11[2] = 0x4;
  break;
 }

 FUNC_1(VAR_6, VAR_1, VAR_2,
    1, 1, &VAR_14);

 FUNC_1(VAR_6, VAR_1, VAR_5, 3, 3, VAR_11);

 switch (VAR_8) {
 case 128:
  VAR_10 = 3;
  break;
 case 130:
  VAR_10 = 2;
  break;
 case 131:
 case 129:
  VAR_10 = 1;
  VAR_12 = 0;
  break;
 default:
  VAR_10 = 0;
  break;
 }

 if (VAR_6->net->mtu > 12500 && VAR_6->net->mtu <= 16334)
  VAR_12 = 2;

 FUNC_2(VAR_11, &VAR_0[VAR_12], 5);

 FUNC_1(VAR_6, VAR_1, VAR_4, 5, 5, VAR_11);


 if (VAR_6->net->mtu <= 4500)
  VAR_13 = 0x0810;
 else if (VAR_6->net->mtu <= 9500)
  VAR_13 = 0x1020;
 else if (VAR_6->net->mtu <= 12500)
  VAR_13 = 0x1420;
 else if (VAR_6->net->mtu <= 16334)
  VAR_13 = 0x1A20;

 FUNC_0(VAR_6, VAR_1, VAR_3,
      2, &VAR_13);
 FUNC_3(VAR_6->net, "Link Speed %d, USB %d", VAR_9, VAR_10);
}
