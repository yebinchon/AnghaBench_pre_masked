
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int test_mode_nr; int test_mode; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;


 int VAR_0 ;






__attribute__((used)) static int FUNC_0(struct dwc3 *VAR_1, enum usb_device_state VAR_2,
  u32 VAR_3, int VAR_4)
{
 if ((VAR_3 & 0xff) != 0)
  return -VAR_0;
 if (!VAR_4)
  return -VAR_0;

 switch (VAR_3 >> 8) {
 case 131:
 case 130:
 case 128:
 case 129:
 case 132:
  VAR_1->test_mode_nr = VAR_3 >> 8;
  VAR_1->test_mode = 1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
