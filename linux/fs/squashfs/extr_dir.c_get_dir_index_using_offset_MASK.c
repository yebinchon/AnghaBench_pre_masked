
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_sb_info {int directory_table; } ;
struct squashfs_dir_index {int start_block; int size; int index; } ;
typedef int dir_index ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,struct squashfs_dir_index*,int*,int*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_2,
 u64 *VAR_3, int *VAR_4, u64 VAR_5, int VAR_6,
 int VAR_7, u64 VAR_8)
{
 struct squashfs_sb_info *VAR_9 = VAR_2->s_fs_info;
 int VAR_10, VAR_11, VAR_12, VAR_13 = 0;
 unsigned int VAR_14;
 struct squashfs_dir_index VAR_15;

 FUNC_0("Entered get_dir_index_using_offset, i_count %d, f_pos %lld\n",
     VAR_7, VAR_8);






 if (VAR_8 <= 3)
  return VAR_8;
 VAR_8 -= 3;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_10 = FUNC_2(VAR_2, &VAR_15, &VAR_5,
    &VAR_6, sizeof(VAR_15));
  if (VAR_10 < 0)
   break;

  VAR_12 = FUNC_1(VAR_15.index);
  if (VAR_12 > VAR_8)



   break;

  VAR_14 = FUNC_1(VAR_15.size) + 1;


  if (VAR_14 > VAR_1)
   break;

  VAR_10 = FUNC_2(VAR_2, ((void*)0), &VAR_5,
    &VAR_6, VAR_14);
  if (VAR_10 < 0)
   break;

  VAR_13 = VAR_12;
  *VAR_3 = FUNC_1(VAR_15.start_block) +
     VAR_9->directory_table;
 }

 *VAR_4 = (VAR_13 + *VAR_4) % VAR_0;




 return VAR_13 + 3;
}
