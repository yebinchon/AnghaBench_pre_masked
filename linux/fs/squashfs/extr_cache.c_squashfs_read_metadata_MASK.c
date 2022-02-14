
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_sb_info {int block_cache; } ;
struct squashfs_cache_entry {int error; int length; int next_index; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 struct squashfs_cache_entry* FUNC_1 (struct super_block*,int ,int ,int ) ;
 int FUNC_2 (struct squashfs_cache_entry*) ;
 int FUNC_3 (void*,struct squashfs_cache_entry*,int,int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct super_block *VAR_1, void *VAR_2,
  u64 *VAR_3, int *VAR_4, int VAR_5)
{
 struct squashfs_sb_info *VAR_6 = VAR_1->s_fs_info;
 int VAR_7, VAR_8 = VAR_5;
 struct squashfs_cache_entry *VAR_9;

 FUNC_0("Entered squashfs_read_metadata [%llx:%x]\n", *VAR_3, *VAR_4);

 if (FUNC_4(VAR_5 < 0))
  return -VAR_0;

 while (VAR_5) {
  VAR_9 = FUNC_1(VAR_1, VAR_6->block_cache, *VAR_3, 0);
  if (VAR_9->error) {
   VAR_8 = VAR_9->error;
   goto error;
  } else if (*VAR_4 >= VAR_9->length) {
   VAR_8 = -VAR_0;
   goto error;
  }

  VAR_7 = FUNC_3(VAR_2, VAR_9, *VAR_4, VAR_5);
  if (VAR_2)
   VAR_2 += VAR_7;
  VAR_5 -= VAR_7;
  *VAR_4 += VAR_7;

  if (*VAR_4 == VAR_9->length) {
   *VAR_3 = VAR_9->next_index;
   *VAR_4 = 0;
  }

  FUNC_2(VAR_9);
 }

 return VAR_8;

error:
 FUNC_2(VAR_9);
 return VAR_8;
}
