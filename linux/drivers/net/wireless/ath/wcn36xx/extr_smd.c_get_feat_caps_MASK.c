
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum place_holder_in_cap_bitmap { ____Placeholder_place_holder_in_cap_bitmap } place_holder_in_cap_bitmap ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

int FUNC_1(u32 *VAR_1, enum place_holder_in_cap_bitmap VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2 < 0 || VAR_2 > 127) {
  FUNC_0("error cap idx %d\n", VAR_2);
  return -VAR_0;
 }

 VAR_3 = VAR_2 / 32;
 VAR_4 = VAR_2 % 32;

 return (VAR_1[VAR_3] & (1 << VAR_4)) ? 1 : 0;
}
