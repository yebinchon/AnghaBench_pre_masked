
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct hdmi_phy_data {int* lane_function; size_t* lane_polarity; } ;


 int VAR_0 ;

int FUNC_0(struct hdmi_phy_data *VAR_1, const u32 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3 += 2) {
  u8 VAR_4, VAR_5;
  int VAR_6, VAR_7;

  VAR_6 = VAR_2[VAR_3];
  VAR_7 = VAR_2[VAR_3 + 1];

  if (VAR_6 < 0 || VAR_6 >= 8)
   return -VAR_0;

  if (VAR_7 < 0 || VAR_7 >= 8)
   return -VAR_0;

  if (VAR_6 & 1) {
   if (VAR_7 != VAR_6 - 1)
    return -VAR_0;
   VAR_5 = 1;
  } else {
   if (VAR_7 != VAR_6 + 1)
    return -VAR_0;
   VAR_5 = 0;
  }

  VAR_4 = VAR_6 / 2;

  VAR_1->lane_function[VAR_4] = VAR_3 / 2;
  VAR_1->lane_polarity[VAR_4] = VAR_5;
 }

 return 0;
}
