
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_entry {int cur_valid_map; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int block_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct f2fs_sb_info*,int ) ;
 unsigned int FUNC_1 (struct f2fs_sb_info*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct f2fs_sb_info*,char*,int ,int) ;
 int FUNC_4 (unsigned int,int ) ;
 struct seg_entry* FUNC_5 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static bool FUNC_7(struct f2fs_sb_info *VAR_3, block_t VAR_4,
       int VAR_5)
{
 struct seg_entry *VAR_6;
 unsigned int VAR_7, VAR_8;
 bool VAR_9;

 if (VAR_5 != VAR_0 && VAR_5 != VAR_1)
  return 1;

 VAR_7 = FUNC_1(VAR_3, VAR_4);
 VAR_8 = FUNC_0(VAR_3, VAR_4);
 VAR_6 = FUNC_5(VAR_3, VAR_7);

 VAR_9 = FUNC_4(VAR_8, VAR_6->cur_valid_map);
 if (!VAR_9 && VAR_5 == VAR_0) {
  FUNC_3(VAR_3, "Inconsistent error blkaddr:%u, sit bitmap:%d",
    VAR_4, VAR_9);
  FUNC_6(VAR_3, VAR_2);
  FUNC_2(1);
 }
 return VAR_9;
}
