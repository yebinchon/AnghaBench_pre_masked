
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
typedef int __u32 ;







 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(__u32 *VAR_0, __u32 *VAR_1,
        enum usb_device_speed VAR_2)
{
 if (!FUNC_2(VAR_0, VAR_1)) {
  return 0;
 }

 switch (VAR_2) {
 case 130:
 case 132:
 case 131:
 case 128:
 case 129:
  break;
 default:
  FUNC_0("Failed attach request for unsupported USB speed: %s\n",
   FUNC_1(VAR_2));
  return 0;
 }

 return 1;
}
