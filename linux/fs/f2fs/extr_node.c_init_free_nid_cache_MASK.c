
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int nat_blocks; void* free_nid_count; void* nat_block_bitmap; void** free_nid_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct f2fs_sb_info*,int,int ) ;
 void** FUNC_4 (struct f2fs_sb_info*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct f2fs_sb_info *VAR_3)
{
 struct f2fs_nm_info *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 VAR_4->free_nid_bitmap =
  FUNC_4(VAR_3, FUNC_1(sizeof(unsigned char *),
          VAR_4->nat_blocks),
        VAR_1);
 if (!VAR_4->free_nid_bitmap)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4->nat_blocks; VAR_5++) {
  VAR_4->free_nid_bitmap[VAR_5] = FUNC_3(VAR_3,
   FUNC_2(VAR_2), VAR_1);
  if (!VAR_4->free_nid_bitmap[VAR_5])
   return -VAR_0;
 }

 VAR_4->nat_block_bitmap = FUNC_3(VAR_3, VAR_4->nat_blocks / 8,
        VAR_1);
 if (!VAR_4->nat_block_bitmap)
  return -VAR_0;

 VAR_4->free_nid_count =
  FUNC_3(VAR_3, FUNC_1(sizeof(unsigned short),
           VAR_4->nat_blocks),
         VAR_1);
 if (!VAR_4->free_nid_count)
  return -VAR_0;
 return 0;
}
