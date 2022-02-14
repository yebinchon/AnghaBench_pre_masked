
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int mutex; struct device* dev; } ;
struct wusb_dev {int port_idx; int addr; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct wusbhc*,int ) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wusbhc*,int ) ;
 struct wusb_dev* FUNC_6 (struct wusbhc*,int ) ;

__attribute__((used)) static void FUNC_7(struct wusbhc *VAR_0, u8 VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;
 struct wusb_dev *VAR_3;

 FUNC_3(&VAR_0->mutex);
 VAR_3 = FUNC_6(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_2, "ignoring DN DISCONNECT from unconnected device %02x\n",
   VAR_1);
 } else {
  FUNC_2(VAR_2, "DN DISCONNECT: device 0x%02x going down\n",
   VAR_3->addr);
  FUNC_0(VAR_0, FUNC_5(VAR_0,
   VAR_3->port_idx));
 }
 FUNC_4(&VAR_0->mutex);
}
