
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov965x {scalar_t__ streaming; int clk; int * gpios; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ov965x *VAR_2, int VAR_3)
{
 if (VAR_3) {
  int VAR_4 = FUNC_1(VAR_2->clk);

  if (VAR_4)
   return VAR_4;

  FUNC_2(VAR_2->gpios[VAR_0], 0);
  FUNC_2(VAR_2->gpios[VAR_1], 0);
  FUNC_3(25);
 } else {
  FUNC_2(VAR_2->gpios[VAR_1], 1);
  FUNC_2(VAR_2->gpios[VAR_0], 1);

  FUNC_0(VAR_2->clk);
 }

 VAR_2->streaming = 0;

 return 0;
}
