
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usbnet {TYPE_1__* net; int data; } ;
struct sr_data {int * mac_addr; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (struct usbnet*) ;
 int FUNC_4 (struct usbnet*) ;
 int FUNC_5 (struct usbnet*) ;
 int FUNC_6 (struct usbnet*,int) ;
 int FUNC_7 (struct usbnet*,int ,int,int ,int ,int *) ;
 int FUNC_8 (struct usbnet*,int,int) ;
 int FUNC_9 (struct usbnet*,int) ;

__attribute__((used)) static int FUNC_10(struct usbnet *VAR_11)
{
 struct sr_data *VAR_12 = (struct sr_data *)&VAR_11->data;
 int VAR_13, VAR_14;
 u16 VAR_15;

 VAR_13 = FUNC_8(VAR_11,
   VAR_5 | VAR_4 | VAR_3, 5);
 if (VAR_13 < 0)
  goto out;

 VAR_14 = ((FUNC_4(VAR_11) & 0x1f) == 0x10 ? 1 : 0);

 VAR_13 = FUNC_7(VAR_11, VAR_1, VAR_14, 0, 0, ((void*)0));
 if (VAR_13 < 0) {
  FUNC_2(VAR_11->net, "Select PHY #1 failed: %d\n", VAR_13);
  goto out;
 }

 VAR_13 = FUNC_6(VAR_11, VAR_7 | VAR_9);
 if (VAR_13 < 0)
  goto out;

 FUNC_1(150);

 VAR_13 = FUNC_6(VAR_11, VAR_6);
 if (VAR_13 < 0)
  goto out;

 FUNC_1(150);

 if (VAR_14) {
  VAR_13 = FUNC_6(VAR_11, VAR_8);
  if (VAR_13 < 0)
   goto out;
 } else {
  VAR_13 = FUNC_6(VAR_11, VAR_10);
  if (VAR_13 < 0)
   goto out;
 }

 FUNC_1(150);
 VAR_15 = FUNC_5(VAR_11);
 FUNC_2(VAR_11->net, "RX_CTL is 0x%04x after software reset\n", VAR_15);
 VAR_13 = FUNC_9(VAR_11, 0x0000);
 if (VAR_13 < 0)
  goto out;

 VAR_15 = FUNC_5(VAR_11);
 FUNC_2(VAR_11->net, "RX_CTL is 0x%04x setting to 0x0000\n", VAR_15);

 VAR_13 = FUNC_6(VAR_11, VAR_9);
 if (VAR_13 < 0)
  goto out;

 FUNC_1(150);

 VAR_13 = FUNC_6(VAR_11, VAR_8 | VAR_9);
 if (VAR_13 < 0)
  goto out;

 FUNC_1(150);

 VAR_13 = FUNC_3(VAR_11);
 if (VAR_13 < 0)
  goto out;


 FUNC_0(VAR_12->mac_addr, VAR_11->net->dev_addr, VAR_0);
 VAR_13 = FUNC_7(VAR_11, VAR_2, 0, 0, VAR_0,
       VAR_12->mac_addr);
 if (VAR_13 < 0)
  goto out;

 return 0;

out:
 return VAR_13;
}
