
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extif_timings {int clk_div; int* tim; int access_time; int re_cycle_time; int re_off_time; int re_on_time; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct extif_timings *VAR_0)
{
 u32 VAR_1, VAR_2;
 int VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7 = VAR_0->clk_div;





 VAR_3 = FUNC_0(VAR_0->re_on_time, VAR_7);

 if (VAR_3 > 1)
  return -1;

 VAR_4 = FUNC_0(VAR_0->re_off_time, VAR_7);

 if (VAR_4 <= VAR_3)
  VAR_4 = VAR_3 + 1;

 VAR_1 = VAR_4 - VAR_3;
 if (VAR_1 > 0x10)
  return -1;

 VAR_5 = FUNC_0(VAR_0->re_cycle_time, VAR_7);
 if (VAR_5 <= VAR_4)
  VAR_5 = VAR_4 + 1;

 VAR_2 = VAR_5 - VAR_1;

 if (VAR_2 < 3)
  VAR_2 = 3;
 if (VAR_2 > 0x40)
  return -1;

 VAR_6 = FUNC_0(VAR_0->access_time, VAR_7);
 if (VAR_6 < VAR_4)
  VAR_6++;




 if (VAR_6 - VAR_4 > 1)
  return -1;

 VAR_0->tim[0] = VAR_1 - 1;
 VAR_0->tim[1] = VAR_2 - 1;

 return 0;
}
