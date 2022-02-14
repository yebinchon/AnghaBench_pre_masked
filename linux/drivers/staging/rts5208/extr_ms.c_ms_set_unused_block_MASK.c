
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct zone_entry {scalar_t__ set_index; int unused_blk_cnt; scalar_t__* free_table; } ;
struct ms_info {struct zone_entry* segment; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rtsx_chip *VAR_1, u16 VAR_2)
{
 struct ms_info *VAR_3 = &VAR_1->ms_card;
 struct zone_entry *VAR_4;
 int VAR_5;

 VAR_5 = (int)VAR_2 >> 9;
 VAR_4 = &VAR_3->segment[VAR_5];

 VAR_4->free_table[VAR_4->set_index++] = VAR_2;
 if (VAR_4->set_index >= VAR_0)
  VAR_4->set_index = 0;

 VAR_4->unused_blk_cnt++;
}
