
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct i40e_profile_info {int track_id; } ;



__attribute__((used)) static bool FUNC_0(struct i40e_profile_info *VAR_0,
          struct i40e_profile_info *VAR_1)
{
 unsigned int VAR_2 = (u8)((VAR_1->track_id & 0x00FF0000) >> 16);
 unsigned int VAR_3 = (u8)((VAR_0->track_id & 0x00FF0000) >> 16);


 if (VAR_3 == 0)
  return 1;

 if (VAR_3 == 0xFF || VAR_2 == 0xFF)
  return 0;

 return VAR_2 != VAR_3;
}
