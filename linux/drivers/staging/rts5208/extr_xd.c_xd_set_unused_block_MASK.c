
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct zone_entry {int unused_blk_cnt; int set_index; scalar_t__* free_table; } ;
struct xd_info {int zone_cnt; struct zone_entry* zone; } ;
struct rtsx_chip {struct xd_info xd_card; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct zone_entry*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 scalar_t__ FUNC_3 (struct rtsx_chip*,int) ;

__attribute__((used)) static void FUNC_4(struct rtsx_chip *VAR_2, u32 VAR_3)
{
 struct xd_info *VAR_4 = &VAR_2->xd_card;
 struct zone_entry *VAR_5;
 int VAR_6;

 VAR_6 = (int)VAR_3 >> 10;
 if (VAR_6 >= VAR_4->zone_cnt) {
  FUNC_0(FUNC_2(VAR_2), "Set unused block to invalid zone (zone_no = %d, zone_cnt = %d)\n",
   VAR_6, VAR_4->zone_cnt);
  return;
 }
 VAR_5 = &VAR_4->zone[VAR_6];

 if (!VAR_5->free_table) {
  if (FUNC_3(VAR_2, VAR_6) != VAR_0)
   return;
 }

 if ((VAR_5->set_index >= VAR_1) ||
     (VAR_5->set_index < 0)) {
  FUNC_1(VAR_5);
  FUNC_0(FUNC_2(VAR_2), "Set unused block fail, invalid set_index\n");
  return;
 }

 FUNC_0(FUNC_2(VAR_2), "Set unused block to index %d\n",
  VAR_5->set_index);

 VAR_5->free_table[VAR_5->set_index++] = (u16)(VAR_3 & 0x3ff);
 if (VAR_5->set_index >= VAR_1)
  VAR_5->set_index = 0;
 VAR_5->unused_blk_cnt++;
}
