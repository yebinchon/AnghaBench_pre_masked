
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_sb_info {unsigned int fragments; int * fragment_index; } ;
struct squashfs_fragment_entry {int size; int start_block; } ;
typedef int fragment_entry ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*,struct squashfs_fragment_entry*,int *,int*,int) ;

int FUNC_5(struct super_block *VAR_1, unsigned int VAR_2,
    u64 *VAR_3)
{
 struct squashfs_sb_info *VAR_4 = VAR_1->s_fs_info;
 int VAR_5, VAR_6, VAR_7;
 struct squashfs_fragment_entry VAR_8;
 u64 VAR_9;

 if (VAR_2 >= VAR_4->fragments)
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = FUNC_1(VAR_2);

 VAR_9 = FUNC_2(VAR_4->fragment_index[VAR_5]);

 VAR_7 = FUNC_4(VAR_1, &VAR_8, &VAR_9,
     &VAR_6, sizeof(VAR_8));
 if (VAR_7 < 0)
  return VAR_7;

 *VAR_3 = FUNC_2(VAR_8.start_block);
 return FUNC_3(VAR_8.size);
}
