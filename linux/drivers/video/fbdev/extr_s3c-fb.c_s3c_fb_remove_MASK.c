
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int has_clksel; } ;
struct s3c_fb {int dev; int bus_clk; int lcd_clk; TYPE_1__ variant; scalar_t__* windows; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct s3c_fb* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct s3c_fb*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct s3c_fb *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_3(VAR_2->dev);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->windows[VAR_3])
   FUNC_5(VAR_2, VAR_2->windows[VAR_3]);

 if (!VAR_2->variant.has_clksel)
  FUNC_0(VAR_2->lcd_clk);

 FUNC_0(VAR_2->bus_clk);

 FUNC_4(VAR_2->dev);
 FUNC_2(VAR_2->dev);

 return 0;
}
