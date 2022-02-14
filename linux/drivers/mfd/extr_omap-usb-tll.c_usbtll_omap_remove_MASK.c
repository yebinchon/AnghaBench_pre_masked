
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtll_omap {int nch; int * ch_clk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct usbtll_omap* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct usbtll_omap *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_5(&VAR_1);
 VAR_0 = ((void*)0);
 FUNC_6(&VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_3->nch; VAR_4++) {
  if (!FUNC_0(VAR_3->ch_clk[VAR_4])) {
   FUNC_2(VAR_3->ch_clk[VAR_4]);
   FUNC_1(VAR_3->ch_clk[VAR_4]);
  }
 }

 FUNC_4(&VAR_2->dev);
 return 0;
}
