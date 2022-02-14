
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {TYPE_2__* udev; int net; } ;
typedef int mac_addr ;
struct TYPE_3__ {int idProduct; int idVendor; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,unsigned char*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_7, unsigned char *VAR_8)
{
 int VAR_9 = 0;
 unsigned char VAR_10[0x06];
 int VAR_11 = 0;

 FUNC_3(VAR_7->net, "get_mac_address:\n\tusbnet VID:%0x PID:%0x\n",
     FUNC_1(VAR_7->udev->descriptor.idVendor),
     FUNC_1(VAR_7->udev->descriptor.idProduct));

 FUNC_2(VAR_10, 0, sizeof(VAR_10));
 VAR_11 = FUNC_0(VAR_7, VAR_6, 0,
      VAR_4, VAR_10, 0x02,
      VAR_0);
 VAR_11 += FUNC_0(VAR_7, VAR_6, 0, VAR_5,
       VAR_10 + 2, 0x02, VAR_0);
 VAR_11 += FUNC_0(VAR_7, VAR_6, 0, VAR_3,
       VAR_10 + 4, 0x02, VAR_0);
 if (VAR_11 != VAR_2)
  VAR_9 = -VAR_1;

 VAR_8[0] = VAR_10[5];
 VAR_8[1] = VAR_10[4];
 VAR_8[2] = VAR_10[3];
 VAR_8[3] = VAR_10[2];
 VAR_8[4] = VAR_10[1];
 VAR_8[5] = VAR_10[0];

 return VAR_9;
}
