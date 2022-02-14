
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int s_blocksize; } ;
struct reiserfs_bitmap_info {int free_count; } ;
struct buffer_head {int dummy; } ;


 struct reiserfs_bitmap_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct super_block*,int) ;

__attribute__((used)) static inline int FUNC_4(struct super_block *VAR_1, u32 VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);
 struct reiserfs_bitmap_info *VAR_4 = &FUNC_0(VAR_1)[VAR_3];
 if (VAR_4->free_count == VAR_0) {
  struct buffer_head *VAR_5 = FUNC_3(VAR_1, VAR_3);
  FUNC_2(VAR_5);
 }

 if (VAR_4->free_count > ((VAR_1->s_blocksize << 3) * 60 / 100)) {
  return 0;
 }
 return 1;
}
