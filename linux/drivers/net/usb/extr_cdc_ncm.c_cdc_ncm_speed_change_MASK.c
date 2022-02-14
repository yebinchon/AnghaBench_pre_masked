
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usbnet {int net; } ;
struct usb_cdc_speed_change {int ULBitRate; int DLBitRRate; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct usbnet*,int ,int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct usbnet *VAR_1,
       struct usb_cdc_speed_change *VAR_2)
{
 uint32_t VAR_3 = FUNC_0(VAR_2->DLBitRRate);
 uint32_t VAR_4 = FUNC_0(VAR_2->ULBitRate);





 if ((VAR_4 > 1000000) && (VAR_3 > 1000000)) {
  FUNC_1(VAR_1, VAR_0, VAR_1->net,
      "%u mbit/s downlink %u mbit/s uplink\n",
      (unsigned int)(VAR_3 / 1000000U),
      (unsigned int)(VAR_4 / 1000000U));
 } else {
  FUNC_1(VAR_1, VAR_0, VAR_1->net,
      "%u kbit/s downlink %u kbit/s uplink\n",
      (unsigned int)(VAR_3 / 1000U),
      (unsigned int)(VAR_4 / 1000U));
 }
}
