
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zone_entry {int* l2p_table; } ;
struct ms_info {struct zone_entry* segment; } ;
struct rtsx_chip {struct ms_info ms_card; } ;



__attribute__((used)) static u16 FUNC_0(struct rtsx_chip *VAR_0, int VAR_1, u16 VAR_2)
{
 struct ms_info *VAR_3 = &VAR_0->ms_card;
 struct zone_entry *VAR_4;

 if (!VAR_3->segment)
  return 0xFFFF;

 VAR_4 = &VAR_3->segment[VAR_1];

 if (VAR_4->l2p_table)
  return VAR_4->l2p_table[VAR_2];

 return 0xFFFF;
}
