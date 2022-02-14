
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct zone_entry {size_t* l2p_table; } ;
struct ms_info {struct zone_entry* segment; } ;
struct rtsx_chip {struct ms_info ms_card; } ;



__attribute__((used)) static void FUNC_0(struct rtsx_chip *VAR_0,
      int VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct ms_info *VAR_4 = &VAR_0->ms_card;
 struct zone_entry *VAR_5;

 if (!VAR_4->segment)
  return;

 VAR_5 = &VAR_4->segment[VAR_1];
 if (VAR_5->l2p_table)
  VAR_5->l2p_table[VAR_2] = VAR_3;
}
