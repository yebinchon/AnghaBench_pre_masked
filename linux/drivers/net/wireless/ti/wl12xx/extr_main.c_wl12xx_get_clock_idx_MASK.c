
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wl12xx_clock {scalar_t__ freq; int xtal; int hw_idx; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct wl12xx_clock *VAR_1,
    u32 VAR_2, bool VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_1[VAR_4].freq != 0; VAR_4++)
  if ((VAR_1[VAR_4].freq == VAR_2) && (VAR_1[VAR_4].xtal == VAR_3))
   return VAR_1[VAR_4].hw_idx;

 return -VAR_0;
}
