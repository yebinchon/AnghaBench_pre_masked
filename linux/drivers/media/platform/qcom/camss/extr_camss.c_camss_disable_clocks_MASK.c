
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camss_clock {int clk; } ;


 int FUNC_0 (int ) ;

void FUNC_1(int VAR_0, struct camss_clock *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_0 - 1; VAR_2 >= 0; VAR_2--)
  FUNC_0(VAR_1[VAR_2].clk);
}
