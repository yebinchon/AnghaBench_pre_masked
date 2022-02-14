
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9t001 {int regulators; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mt9t001 *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_3(FUNC_0(VAR_0->regulators),
       VAR_0->regulators);
 if (VAR_1 < 0)
  return VAR_1;


 VAR_1 = FUNC_1(VAR_0->clk);
 if (VAR_1 < 0)
  FUNC_2(FUNC_0(VAR_0->regulators),
           VAR_0->regulators);

 return VAR_1;
}
