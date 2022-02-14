
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct emac_adapter {int * clk; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_5,
     struct emac_adapter *VAR_6)
{
 int VAR_7;

 if (FUNC_2(&VAR_5->dev))
  return 0;

 VAR_7 = FUNC_1(VAR_6->clk[VAR_4], 125000000);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6->clk[VAR_4]);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6->clk[VAR_0], 125000000);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6->clk[VAR_1], 25000000);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6->clk[VAR_1]);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6->clk[VAR_2]);
 if (VAR_7)
  return VAR_7;

 return FUNC_0(VAR_6->clk[VAR_3]);
}
