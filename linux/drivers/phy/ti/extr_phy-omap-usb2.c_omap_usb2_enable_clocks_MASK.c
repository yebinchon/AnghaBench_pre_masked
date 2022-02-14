
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_usb {int wkupclk; int dev; int optclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct omap_usb *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0->wkupclk);
 if (VAR_1 < 0) {
  FUNC_3(VAR_0->dev, "Failed to enable wkupclk %d\n", VAR_1);
  goto err0;
 }

 if (!FUNC_0(VAR_0->optclk)) {
  VAR_1 = FUNC_2(VAR_0->optclk);
  if (VAR_1 < 0) {
   FUNC_3(VAR_0->dev, "Failed to enable optclk %d\n", VAR_1);
   goto err1;
  }
 }

 return 0;

err1:
 FUNC_1(VAR_0->wkupclk);

err0:
 return VAR_1;
}
