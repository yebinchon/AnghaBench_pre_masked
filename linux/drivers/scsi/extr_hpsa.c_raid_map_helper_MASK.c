
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct raid_map_data {int data_disks_per_row; int layout_map_count; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct raid_map_data *VAR_0,
  int VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 if (VAR_1 == 0) {

  *VAR_2 %= FUNC_0(VAR_0->data_disks_per_row);
  return;
 }
 do {

  *VAR_3 = *VAR_2 /
   FUNC_0(VAR_0->data_disks_per_row);
  if (VAR_1 == *VAR_3)
   continue;
  if (*VAR_3 < FUNC_0(VAR_0->layout_map_count) - 1) {

   *VAR_2 += FUNC_0(VAR_0->data_disks_per_row);
   (*VAR_3)++;
  } else {

   *VAR_2 %= FUNC_0(VAR_0->data_disks_per_row);
   *VAR_3 = 0;
  }
 } while (VAR_1 != *VAR_3);
}
