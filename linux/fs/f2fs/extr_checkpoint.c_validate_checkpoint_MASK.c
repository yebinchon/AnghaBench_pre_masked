
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int blocks_per_seg; } ;
struct f2fs_checkpoint {int cp_pack_total_block_count; } ;
typedef int block_t ;


 int FUNC_0 (struct page*,int) ;
 int FUNC_1 (struct f2fs_sb_info*,char*,int) ;
 int FUNC_2 (struct f2fs_sb_info*,int ,struct f2fs_checkpoint**,struct page**,unsigned long long*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct page *FUNC_4(struct f2fs_sb_info *VAR_0,
    block_t VAR_1, unsigned long long *VAR_2)
{
 struct page *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 struct f2fs_checkpoint *VAR_5 = ((void*)0);
 unsigned long long VAR_6 = 0, VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_0, VAR_1, &VAR_5,
     &VAR_3, VAR_2);
 if (VAR_8)
  return ((void*)0);

 if (FUNC_3(VAR_5->cp_pack_total_block_count) >
     VAR_0->blocks_per_seg) {
  FUNC_1(VAR_0, "invalid cp_pack_total_block_count:%u",
     FUNC_3(VAR_5->cp_pack_total_block_count));
  goto invalid_cp;
 }
 VAR_7 = *VAR_2;

 VAR_1 += FUNC_3(VAR_5->cp_pack_total_block_count) - 1;
 VAR_8 = FUNC_2(VAR_0, VAR_1, &VAR_5,
     &VAR_4, VAR_2);
 if (VAR_8)
  goto invalid_cp;
 VAR_6 = *VAR_2;

 if (VAR_6 == VAR_7) {
  *VAR_2 = VAR_6;
  FUNC_0(VAR_4, 1);
  return VAR_3;
 }
 FUNC_0(VAR_4, 1);
invalid_cp:
 FUNC_0(VAR_3, 1);
 return ((void*)0);
}
