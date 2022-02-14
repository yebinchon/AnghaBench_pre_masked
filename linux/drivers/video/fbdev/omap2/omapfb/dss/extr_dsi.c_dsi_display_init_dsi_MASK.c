
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsi_data {scalar_t__ module_id; int pll; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*) ;
 struct dsi_data* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,int) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_3)
{
 struct dsi_data *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_13(&VAR_4->pll);
 if (VAR_5)
  goto err0;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5)
  goto err1;

 FUNC_14(VAR_4->module_id, VAR_4->module_id == 0 ?
   VAR_1 :
   VAR_0);

 FUNC_0("PLL OK\n");

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  goto err2;

 FUNC_1(VAR_3);

 FUNC_9(VAR_3);
 FUNC_10(VAR_3);

 if (1)
  FUNC_1(VAR_3);

 VAR_5 = FUNC_8(VAR_3);
 if (VAR_5)
  goto err3;


 FUNC_11(VAR_3, 0, 1);
 FUNC_11(VAR_3, 1, 1);
 FUNC_11(VAR_3, 2, 1);
 FUNC_11(VAR_3, 3, 1);
 FUNC_7(VAR_3, 1);
 FUNC_5(VAR_3);

 return 0;
err3:
 FUNC_3(VAR_3);
err2:
 FUNC_14(VAR_4->module_id, VAR_2);
err1:
 FUNC_12(&VAR_4->pll);
err0:
 return VAR_5;
}
