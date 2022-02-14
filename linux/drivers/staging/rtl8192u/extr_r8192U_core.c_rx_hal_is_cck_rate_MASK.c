
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_drvinfo_819x_usb {int RxRate; scalar_t__ RxHT; } ;







__attribute__((used)) static inline bool FUNC_0(struct rx_drvinfo_819x_usb *VAR_0)
{
 if (VAR_0->RxHT)
  return 0;

 switch (VAR_0->RxRate) {
 case 130:
 case 129:
 case 128:
 case 131:
  return 1;
 default:
  return 0;
 }
}
