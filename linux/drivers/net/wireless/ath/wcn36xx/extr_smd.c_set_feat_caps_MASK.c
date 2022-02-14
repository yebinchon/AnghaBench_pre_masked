
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum place_holder_in_cap_bitmap { ____Placeholder_place_holder_in_cap_bitmap } place_holder_in_cap_bitmap ;


 int FUNC_0 (char*,int) ;

void FUNC_1(u32 *VAR_0, enum place_holder_in_cap_bitmap VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1 < 0 || VAR_1 > 127) {
  FUNC_0("error cap idx %d\n", VAR_1);
  return;
 }

 VAR_2 = VAR_1 / 32;
 VAR_3 = VAR_1 % 32;
 VAR_0[VAR_2] |= (1 << VAR_3);
}
