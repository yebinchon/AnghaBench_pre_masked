
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int ** clks; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*) ;
 void* FUNC_3 (int ,int) ;
 int FUNC_4 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, struct usbhs_priv *VAR_2)
{
 if (!FUNC_4(VAR_2))
  return 0;


 VAR_2->clks[0] = FUNC_3(FUNC_2(VAR_1), 0);
 if (FUNC_0(VAR_2->clks[0]))
  return FUNC_1(VAR_2->clks[0]);





 VAR_2->clks[1] = FUNC_3(FUNC_2(VAR_1), 1);
 if (FUNC_1(VAR_2->clks[1]) == -VAR_0)
  VAR_2->clks[1] = ((void*)0);
 else if (FUNC_0(VAR_2->clks[1]))
  return FUNC_1(VAR_2->clks[1]);

 return 0;
}
