
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtll_omap {int nch; int * ch_clk; } ;
struct usbhs_omap_platform_data {int * port_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct usbtll_omap* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_7(struct usbhs_omap_platform_data *VAR_3)
{
 int VAR_4;
 struct usbtll_omap *VAR_5;

 if (!VAR_1)
  return -VAR_0;

 FUNC_5(&VAR_2);
 VAR_5 = FUNC_2(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_5->nch; VAR_4++) {
  if (FUNC_3(VAR_3->port_mode[VAR_4])) {
   if (!FUNC_0(VAR_5->ch_clk[VAR_4]))
    FUNC_1(VAR_5->ch_clk[VAR_4]);
  }
 }

 FUNC_6(&VAR_2);
 FUNC_4(VAR_1);

 return 0;
}
