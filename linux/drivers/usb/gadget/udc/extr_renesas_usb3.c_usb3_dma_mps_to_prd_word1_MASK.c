
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int maxpacket; } ;
struct renesas_usb3_ep {TYPE_1__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u32 FUNC_0(struct renesas_usb3_ep *VAR_7)
{
 switch (VAR_7->ep.maxpacket) {
 case 8:
  return VAR_5;
 case 16:
  return VAR_1;
 case 32:
  return VAR_2;
 case 64:
  return VAR_4;
 case 512:
  return VAR_3;
 case 1024:
  return VAR_0;
 default:
  return VAR_6;
 }
}
