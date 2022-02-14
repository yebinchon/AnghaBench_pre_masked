
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sit_entry {int valid_map; } ;
struct f2fs_sb_info {int blocks_per_seg; } ;


 int VAR_0 ;
 int FUNC_0 (struct f2fs_sit_entry*) ;
 int VAR_1 ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*,char*,int,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline int FUNC_8(struct f2fs_sb_info *VAR_2,
  int VAR_3, struct f2fs_sit_entry *VAR_4)
{
 bool VAR_5 = FUNC_6(0, VAR_4->valid_map) ? 1 : 0;
 int VAR_6 = 0;
 int VAR_7 = 0, VAR_8;


 do {
  if (VAR_5) {
   VAR_8 = FUNC_4(&VAR_4->valid_map,
     VAR_2->blocks_per_seg,
     VAR_7);
   VAR_6 += VAR_8 - VAR_7;
  } else
   VAR_8 = FUNC_3(&VAR_4->valid_map,
     VAR_2->blocks_per_seg,
     VAR_7);
  VAR_7 = VAR_8;
  VAR_5 = !VAR_5;
 } while (VAR_7 < VAR_2->blocks_per_seg);

 if (FUNC_7(FUNC_0(VAR_4) != VAR_6)) {
  FUNC_2(VAR_2, "Mismatch valid blocks %d vs. %d",
    FUNC_0(VAR_4), VAR_6);
  FUNC_5(VAR_2, VAR_1);
  return -VAR_0;
 }


 if (FUNC_7(FUNC_0(VAR_4) > VAR_2->blocks_per_seg
     || VAR_3 > FUNC_1(VAR_2) - 1)) {
  FUNC_2(VAR_2, "Wrong valid blocks %d or segno %u",
    FUNC_0(VAR_4), VAR_3);
  FUNC_5(VAR_2, VAR_1);
  return -VAR_0;
 }
 return 0;
}
