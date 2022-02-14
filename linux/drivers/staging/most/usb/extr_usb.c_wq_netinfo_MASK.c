
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct work_struct {int dummy; } ;
struct device {int dummy; } ;
struct usb_device {struct device dev; } ;
struct most_dev {int iface; int (* on_netinfo ) (int *,int,int*) ;struct usb_device* usb_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct usb_device*,int ,int*) ;
 int FUNC_2 (int *,int,int*) ;
 struct most_dev* FUNC_3 (struct work_struct*) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_4)
{
 struct most_dev *VAR_5 = FUNC_3(VAR_4);
 struct usb_device *VAR_6 = VAR_5->usb_device;
 struct device *VAR_7 = &VAR_6->dev;
 u16 VAR_8, VAR_9, VAR_10, VAR_11;
 u8 VAR_12[6];

 if (FUNC_1(VAR_6, VAR_0, &VAR_8) < 0) {
  FUNC_0(VAR_7, "Vendor request 'hw_addr_hi' failed\n");
  return;
 }

 if (FUNC_1(VAR_6, VAR_2, &VAR_9) < 0) {
  FUNC_0(VAR_7, "Vendor request 'hw_addr_mid' failed\n");
  return;
 }

 if (FUNC_1(VAR_6, VAR_1, &VAR_10) < 0) {
  FUNC_0(VAR_7, "Vendor request 'hw_addr_low' failed\n");
  return;
 }

 if (FUNC_1(VAR_6, VAR_3, &VAR_11) < 0) {
  FUNC_0(VAR_7, "Vendor request 'link status' failed\n");
  return;
 }

 VAR_12[0] = VAR_8 >> 8;
 VAR_12[1] = VAR_8;
 VAR_12[2] = VAR_9 >> 8;
 VAR_12[3] = VAR_9;
 VAR_12[4] = VAR_10 >> 8;
 VAR_12[5] = VAR_10;

 if (VAR_5->on_netinfo)
  VAR_5->on_netinfo(&VAR_5->iface, VAR_11, VAR_12);
}
