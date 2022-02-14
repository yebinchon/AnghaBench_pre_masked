
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t7l66xb_platform_data {int (* disable ) (struct platform_device*) ;} ;
struct t7l66xb {int rscr; int scr; int clk32k; int clk48m; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct t7l66xb_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct t7l66xb*) ;
 int FUNC_5 (int *) ;
 struct t7l66xb* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct platform_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct t7l66xb_platform_data *VAR_1 = FUNC_2(&VAR_0->dev);
 struct t7l66xb *VAR_2 = FUNC_6(VAR_0);
 int VAR_3;

 VAR_3 = VAR_1->disable(VAR_0);
 FUNC_0(VAR_2->clk48m);
 FUNC_1(VAR_2->clk48m);
 FUNC_0(VAR_2->clk32k);
 FUNC_1(VAR_2->clk32k);
 FUNC_9(VAR_0);
 FUNC_3(VAR_2->scr);
 FUNC_7(&VAR_2->rscr);
 FUNC_5(&VAR_0->dev);
 FUNC_4(VAR_2);

 return VAR_3;

}
