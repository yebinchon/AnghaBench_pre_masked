
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ili9320_platdata {int (* reset ) (int) ;} ;
struct ili9320 {struct ili9320_platdata* platdata; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ili9320 *VAR_0)
{
 struct ili9320_platdata *VAR_1 = VAR_0->platdata;

 VAR_1->reset(1);
 FUNC_0(50);

 VAR_1->reset(0);
 FUNC_0(50);

 VAR_1->reset(1);
 FUNC_0(100);
}
