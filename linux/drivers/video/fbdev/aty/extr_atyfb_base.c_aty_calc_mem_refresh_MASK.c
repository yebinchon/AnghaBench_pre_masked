
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atyfb_par {int mem_refresh_rate; } ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct atyfb_par *VAR_1, int VAR_2)
{
 static const int VAR_3[] = {
  44, 50, 55, 66, 75, 80, 100
 };
 static const int VAR_4[] = {
  50, 66, 75, 83, 90, 95, 100, 105,
  110, 115, 120, 125, 133, 143, 166
 };
 const int *VAR_5;
 int VAR_6, VAR_7;

 if (FUNC_1(VAR_0)) {
  VAR_5 = VAR_4;
  VAR_7 = FUNC_0(VAR_4);
 } else {
  VAR_5 = VAR_3;
  VAR_7 = FUNC_0(VAR_3);
 }

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_2 < VAR_5[VAR_6])
   break;
 }
 VAR_1->mem_refresh_rate = VAR_6;
}
