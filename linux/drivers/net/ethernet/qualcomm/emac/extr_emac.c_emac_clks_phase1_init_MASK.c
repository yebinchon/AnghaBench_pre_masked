
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct emac_adapter {int * clk; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct platform_device*,struct emac_adapter*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3,
     struct emac_adapter *VAR_4)
{
 int VAR_5;




 if (FUNC_3(&VAR_3->dev))
  return 0;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4->clk[VAR_0]);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4->clk[VAR_1]);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4->clk[VAR_2], 19200000);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_4->clk[VAR_2]);
}
