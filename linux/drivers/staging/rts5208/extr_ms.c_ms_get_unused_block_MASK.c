
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zone_entry {scalar_t__ unused_blk_cnt; int* free_table; size_t get_index; } ;
struct ms_info {struct zone_entry* segment; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 size_t VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct rtsx_chip *VAR_1, int VAR_2)
{
 struct ms_info *VAR_3 = &VAR_1->ms_card;
 struct zone_entry *VAR_4;
 u16 VAR_5;

 VAR_4 = &VAR_3->segment[VAR_2];

 if (VAR_4->unused_blk_cnt <= 0)
  return 0xFFFF;

 VAR_5 = VAR_4->free_table[VAR_4->get_index];
 VAR_4->free_table[VAR_4->get_index++] = 0xFFFF;
 if (VAR_4->get_index >= VAR_0)
  VAR_4->get_index = 0;

 VAR_4->unused_blk_cnt--;

 return VAR_5;
}
