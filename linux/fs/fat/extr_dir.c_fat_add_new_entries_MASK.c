
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_blocksize; } ;
struct msdos_sb_info {int cluster_size; unsigned long cluster_bits; scalar_t__ sec_per_clus; } ;
struct msdos_dir_entry {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ sector_t ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct msdos_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*,int*,int) ;
 scalar_t__ FUNC_5 (struct msdos_sb_info*,int) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct super_block*,struct buffer_head*,struct msdos_dir_entry*) ;
 int FUNC_8 (struct inode*,scalar_t__,int,struct buffer_head**,int) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*,struct inode*) ;
 int FUNC_12 (scalar_t__,void*,unsigned long) ;
 int FUNC_13 (scalar_t__,int ,scalar_t__) ;
 unsigned long FUNC_14 (unsigned long,scalar_t__) ;
 struct buffer_head* FUNC_15 (struct super_block*,scalar_t__) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_2, void *VAR_3, int VAR_4,
          int *VAR_5, struct msdos_dir_entry **VAR_6,
          struct buffer_head **VAR_7, loff_t *VAR_8)
{
 struct super_block *VAR_9 = VAR_2->i_sb;
 struct msdos_sb_info *VAR_10 = FUNC_1(VAR_9);
 struct buffer_head *VAR_11[VAR_1];
 sector_t VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21[2];






 VAR_15 = VAR_4 * sizeof(struct msdos_dir_entry);
 *VAR_5 = (VAR_15 + (VAR_10->cluster_size - 1)) >> VAR_10->cluster_bits;
 FUNC_0(*VAR_5 > 2);

 VAR_17 = FUNC_4(VAR_2, VAR_21, *VAR_5);
 if (VAR_17)
  goto error;






 VAR_18 = VAR_19 = VAR_16 = 0;
 do {
  VAR_13 = VAR_12 = FUNC_5(VAR_10, VAR_21[VAR_18]);
  VAR_14 = VAR_13 + VAR_10->sec_per_clus;
  while (VAR_12 < VAR_14) {
   VAR_11[VAR_19] = FUNC_15(VAR_9, VAR_12);
   if (!VAR_11[VAR_19]) {
    VAR_17 = -VAR_0;
    goto error_nomem;
   }


   VAR_16 = FUNC_14(VAR_15, VAR_9->s_blocksize);

   FUNC_10(VAR_11[VAR_19]);
   FUNC_12(VAR_11[VAR_19]->b_data, VAR_3, VAR_16);
   FUNC_16(VAR_11[VAR_19]);
   FUNC_17(VAR_11[VAR_19]);
   FUNC_11(VAR_11[VAR_19], VAR_2);
   VAR_3 += VAR_16;
   VAR_15 -= VAR_16;
   if (!VAR_15)
    break;
   VAR_19++;
   VAR_12++;
  }
 } while (++VAR_18 < *VAR_5);

 FUNC_13(VAR_11[VAR_19]->b_data + VAR_16, 0, VAR_9->s_blocksize - VAR_16);
 VAR_20 = VAR_16 - sizeof(struct msdos_dir_entry);
 FUNC_9(VAR_11[VAR_19]);
 *VAR_7 = VAR_11[VAR_19];
 *VAR_6 = (struct msdos_dir_entry *)((*VAR_7)->b_data + VAR_20);
 *VAR_8 = FUNC_7(VAR_9, *VAR_7, *VAR_6);


 VAR_17 = FUNC_8(VAR_2, VAR_13, ++VAR_19, VAR_11, VAR_1);
 if (VAR_17)
  goto error_free;

 return VAR_21[0];

error_free:
 FUNC_3(*VAR_7);
 *VAR_7 = ((void*)0);
 VAR_19 = 0;
error_nomem:
 for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
  FUNC_2(VAR_11[VAR_18]);
 FUNC_6(VAR_2, VAR_21[0]);
error:
 return VAR_17;
}
