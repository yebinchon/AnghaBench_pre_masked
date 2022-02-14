
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct lpc32xx_udc {int usb_slv_clk; int udca_p_base; int udca_v_base; int dd_cache; scalar_t__ driver; int gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 struct lpc32xx_udc* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct lpc32xx_udc*,int ) ;
 int FUNC_6 (struct lpc32xx_udc*) ;
 int FUNC_7 (struct lpc32xx_udc*,int) ;
 int FUNC_8 (struct lpc32xx_udc*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct lpc32xx_udc *VAR_3 = FUNC_4(VAR_2);

 FUNC_9(&VAR_3->gadget);
 if (VAR_3->driver)
  return -VAR_0;

 FUNC_7(VAR_3, 1);
 FUNC_8(VAR_3);
 FUNC_5(VAR_3, 0);

 FUNC_1(&VAR_2->dev, 0);
 FUNC_6(VAR_3);

 FUNC_3(VAR_3->dd_cache);
 FUNC_2(&VAR_2->dev, VAR_1,
     VAR_3->udca_v_base, VAR_3->udca_p_base);

 FUNC_0(VAR_3->usb_slv_clk);

 return 0;
}
