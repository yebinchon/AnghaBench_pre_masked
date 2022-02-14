
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct old_pmap_entry {scalar_t__ pdFSID; scalar_t__ pdSize; scalar_t__ pdStart; } ;
struct old_pmap {struct old_pmap_entry* pdEntry; } ;
struct hfsplus_sb_info {int part; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 struct hfsplus_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1, struct old_pmap *VAR_2,
  sector_t *VAR_3, sector_t *VAR_4)
{
 struct hfsplus_sb_info *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 42; VAR_6++) {
  struct old_pmap_entry *VAR_7 = &VAR_2->pdEntry[VAR_6];

  if (VAR_7->pdStart && VAR_7->pdSize &&
      VAR_7->pdFSID == FUNC_2(0x54465331) &&
      (VAR_5->part < 0 || VAR_5->part == VAR_6)) {
   *VAR_3 += FUNC_1(VAR_7->pdStart);
   *VAR_4 = FUNC_1(VAR_7->pdSize);
   return 0;
  }
 }

 return -VAR_0;
}
