
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_omap_platform_data {int * port_mode; } ;
struct usbhs_hcd_omap {int nports; struct usbhs_omap_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static unsigned FUNC_3(struct usbhs_hcd_omap *VAR_3,
      unsigned VAR_4)
{
 struct usbhs_omap_platform_data *VAR_5 = VAR_3->pdata;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->nports; VAR_6++) {

  VAR_4 &= ~(VAR_0 << 2 * VAR_6);

  if (FUNC_1(VAR_5->port_mode[VAR_6]) ||
    (FUNC_2(VAR_5->port_mode[VAR_6])))
   VAR_4 |= VAR_2 << 2 * VAR_6;
  else if (FUNC_0(VAR_5->port_mode[VAR_6]))
   VAR_4 |= VAR_1 << 2 * VAR_6;
 }

 return VAR_4;
}
