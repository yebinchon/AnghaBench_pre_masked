
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 struct clk* FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_3, struct clk **VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_1 + 1; VAR_5 < VAR_0; VAR_5++)
  VAR_4[VAR_5] = FUNC_0(&VAR_3->dev, VAR_2[VAR_5]);
}
