
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_omap_platform_data {int* port_mode; scalar_t__ single_ulpi_bypass; } ;
struct usbhs_hcd_omap {int nports; struct usbhs_omap_platform_data* pdata; } ;



 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static unsigned FUNC_1(struct usbhs_hcd_omap *VAR_4,
      unsigned VAR_5)
{
 struct usbhs_omap_platform_data *VAR_6 = VAR_4->pdata;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->nports; VAR_7++) {
  switch (VAR_6->port_mode[VAR_7]) {
  case 128:
   VAR_5 &= ~(VAR_0 << VAR_7);
   break;
  case 129:
   if (VAR_6->single_ulpi_bypass)
    break;

   if (VAR_7 == 0)
    VAR_5 &= ~VAR_2;
   else
    VAR_5 &= ~(VAR_3
        << (VAR_7-1));
   break;
  default:
   if (VAR_6->single_ulpi_bypass)
    break;

   if (VAR_7 == 0)
    VAR_5 |= VAR_2;
   else
    VAR_5 |= VAR_3
        << (VAR_7-1);
   break;
  }
 }

 if (VAR_6->single_ulpi_bypass) {

  VAR_5 |= VAR_1;

  for (VAR_7 = 0; VAR_7 < VAR_4->nports; VAR_7++) {
   if (FUNC_0(VAR_6->port_mode[VAR_7])) {
    VAR_5 &= ~VAR_1;
    break;
   }
  }
 }

 return VAR_5;
}
