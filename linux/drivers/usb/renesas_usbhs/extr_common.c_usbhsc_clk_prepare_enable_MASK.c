
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int * clks; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_4(struct usbhs_priv *VAR_0)
{
 int VAR_1, VAR_2;

 if (!FUNC_3(VAR_0))
  return 0;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->clks); VAR_1++) {
  VAR_2 = FUNC_2(VAR_0->clks[VAR_1]);
  if (VAR_2) {
   while (--VAR_1 >= 0)
    FUNC_1(VAR_0->clks[VAR_1]);
   return VAR_2;
  }
 }

 return VAR_2;
}
