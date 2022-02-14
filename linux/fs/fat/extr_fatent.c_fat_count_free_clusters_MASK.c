
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {unsigned long s_blocksize_bits; } ;
struct msdos_sb_info {int free_clusters; int free_clus_valid; scalar_t__ max_cluster; unsigned long fat_length; struct fatent_operations* fatent_ops; } ;
struct fatent_operations {scalar_t__ (* ent_get ) (struct fat_entry*) ;} ;
struct fat_entry {scalar_t__ entry; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct msdos_sb_info*,struct fat_entry*) ;
 int FUNC_3 (struct super_block*,struct fat_entry*) ;
 int FUNC_4 (struct super_block*,struct fat_entry*,int ) ;
 int FUNC_5 (struct fat_entry*) ;
 int FUNC_6 (struct fat_entry*) ;
 int FUNC_7 (struct fat_entry*,int ) ;
 int FUNC_8 (struct msdos_sb_info*) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_11 (struct fat_entry*) ;
 int FUNC_12 (struct msdos_sb_info*) ;

int FUNC_13(struct super_block *VAR_3)
{
 struct msdos_sb_info *VAR_4 = FUNC_0(VAR_3);
 const struct fatent_operations *VAR_5 = VAR_4->fatent_ops;
 struct fat_entry VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0, VAR_11;

 FUNC_8(VAR_4);
 if (VAR_4->free_clusters != -1 && VAR_4->free_clus_valid)
  goto out;

 VAR_7 = VAR_1 >> VAR_3->s_blocksize_bits;
 VAR_8 = VAR_7 - 1;
 VAR_9 = 0;

 VAR_11 = 0;
 FUNC_6(&VAR_6);
 FUNC_7(&VAR_6, VAR_2);
 while (VAR_6.entry < VAR_4->max_cluster) {

  if ((VAR_9 & VAR_8) == 0) {
   unsigned long VAR_12 = VAR_4->fat_length - VAR_9;
   FUNC_4(VAR_3, &VAR_6, FUNC_10(VAR_7, VAR_12));
  }
  VAR_9++;

  VAR_10 = FUNC_3(VAR_3, &VAR_6);
  if (VAR_10)
   goto out;

  do {
   if (VAR_5->ent_get(&VAR_6) == VAR_0)
    VAR_11++;
  } while (FUNC_2(VAR_4, &VAR_6));
  FUNC_1();
 }
 VAR_4->free_clusters = VAR_11;
 VAR_4->free_clus_valid = 1;
 FUNC_9(VAR_3);
 FUNC_5(&VAR_6);
out:
 FUNC_12(VAR_4);
 return VAR_10;
}
