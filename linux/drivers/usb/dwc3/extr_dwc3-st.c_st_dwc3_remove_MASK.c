
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_dwc3 {int rstc_rst; int rstc_pwrdn; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 struct st_dwc3* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct st_dwc3 *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev);

 FUNC_2(VAR_1->rstc_pwrdn);
 FUNC_2(VAR_1->rstc_rst);

 return 0;
}
