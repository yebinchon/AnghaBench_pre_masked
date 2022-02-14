
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_usb {int optclk; int wkupclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct omap_usb *VAR_0)
{
 FUNC_1(VAR_0->wkupclk);
 if (!FUNC_0(VAR_0->optclk))
  FUNC_1(VAR_0->optclk);

 return 0;
}
