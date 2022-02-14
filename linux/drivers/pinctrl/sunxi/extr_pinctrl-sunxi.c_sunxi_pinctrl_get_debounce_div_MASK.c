
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 void* FUNC_0 (int) ;
 unsigned long FUNC_1 (struct clk*) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_0, int VAR_1, int *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_0);
 unsigned int VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_1 - VAR_3);
 VAR_5 = 0;

 for (VAR_6 = 1; VAR_6 < 8; VAR_6++) {
  int VAR_7 = FUNC_0(VAR_1 - (VAR_3 >> VAR_6));

  if (VAR_7 < VAR_4) {
   VAR_4 = VAR_7;
   VAR_5 = VAR_6;
  }
 }

 *VAR_2 = VAR_4;
 return VAR_5;
}
