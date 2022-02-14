
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zone_entry {scalar_t__ unused_blk_cnt; size_t set_index; size_t get_index; int* free_table; } ;
struct xd_info {int zone_cnt; struct zone_entry* zone; } ;
struct rtsx_chip {struct xd_info xd_card; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct zone_entry*) ;
 int FUNC_2 (struct rtsx_chip*) ;

__attribute__((used)) static u32 FUNC_3(struct rtsx_chip *VAR_2, int VAR_3)
{
 struct xd_info *VAR_4 = &VAR_2->xd_card;
 struct zone_entry *VAR_5;
 u32 VAR_6;

 if (VAR_3 >= VAR_4->zone_cnt) {
  FUNC_0(FUNC_2(VAR_2), "Get unused block from invalid zone (zone_no = %d, zone_cnt = %d)\n",
   VAR_3, VAR_4->zone_cnt);
  return VAR_0;
 }
 VAR_5 = &VAR_4->zone[VAR_3];

 if ((VAR_5->unused_blk_cnt == 0) ||
     (VAR_5->set_index == VAR_5->get_index)) {
  FUNC_1(VAR_5);
  FUNC_0(FUNC_2(VAR_2), "Get unused block fail, no unused block available\n");
  return VAR_0;
 }
 if ((VAR_5->get_index >= VAR_1) || (VAR_5->get_index < 0)) {
  FUNC_1(VAR_5);
  FUNC_0(FUNC_2(VAR_2), "Get unused block fail, invalid get_index\n");
  return VAR_0;
 }

 FUNC_0(FUNC_2(VAR_2), "Get unused block from index %d\n",
  VAR_5->get_index);

 VAR_6 = VAR_5->free_table[VAR_5->get_index];
 VAR_5->free_table[VAR_5->get_index++] = 0xFFFF;
 if (VAR_5->get_index >= VAR_1)
  VAR_5->get_index = 0;
 VAR_5->unused_blk_cnt--;

 VAR_6 += ((u32)(VAR_3) << 10);
 return VAR_6;
}
