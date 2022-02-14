
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct the_nilfs {int ns_blocksize_bits; int ns_blocks_per_segment; int ns_blocksize; int ns_bdev; scalar_t__ ns_nsegments; } ;
struct nilfs_segment_usage {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct fstrim_range {int len; int minlen; int start; } ;
struct buffer_head {int b_page; } ;
typedef int sector_t ;
struct TYPE_4__ {size_t mi_entry_size; int mi_sem; } ;
struct TYPE_3__ {struct the_nilfs* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int ,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct the_nilfs*,int,int*,int*) ;
 int FUNC_7 (struct the_nilfs*,int) ;
 int FUNC_8 (struct nilfs_segment_usage*) ;
 struct nilfs_segment_usage* FUNC_9 (struct inode*,int,struct buffer_head*,void*) ;
 int FUNC_10 (struct inode*,int,int ,struct buffer_head**) ;
 size_t FUNC_11 (struct inode*,int,int) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct inode *VAR_3, struct fstrim_range *VAR_4)
{
 struct the_nilfs *VAR_5 = VAR_3->i_sb->s_fs_info;
 struct buffer_head *VAR_6;
 struct nilfs_segment_usage *VAR_7;
 void *VAR_8;
 size_t VAR_9, VAR_10, VAR_11 = FUNC_0(VAR_3)->mi_entry_size;
 sector_t VAR_12, VAR_13, VAR_14, VAR_15;
 sector_t VAR_16 = 0, VAR_17 = 0;
 u64 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23 = 0;
 int VAR_24 = 0;
 unsigned int VAR_25;

 VAR_25 = (1 << VAR_5->ns_blocksize_bits) /
   FUNC_1(VAR_5->ns_bdev);
 VAR_21 = VAR_4->len >> VAR_5->ns_blocksize_bits;
 VAR_20 = VAR_4->minlen >> VAR_5->ns_blocksize_bits;
 VAR_22 = ((u64)VAR_5->ns_nsegments * VAR_5->ns_blocks_per_segment);

 if (!VAR_21 || VAR_4->start >= VAR_22 << VAR_5->ns_blocksize_bits)
  return -VAR_0;

 VAR_14 = (VAR_4->start + VAR_5->ns_blocksize - 1) >>
   VAR_5->ns_blocksize_bits;






 if (VAR_22 - VAR_14 < VAR_21)
  VAR_15 = VAR_22 - 1;
 else
  VAR_15 = VAR_14 + VAR_21 - 1;

 VAR_18 = FUNC_7(VAR_5, VAR_14);
 VAR_19 = FUNC_7(VAR_5, VAR_15);

 FUNC_3(&FUNC_0(VAR_3)->mi_sem);

 while (VAR_18 <= VAR_19) {
  VAR_9 = FUNC_11(VAR_3, VAR_18,
    VAR_19);

  VAR_24 = FUNC_10(VAR_3, VAR_18, 0,
          &VAR_6);
  if (VAR_24 < 0) {
   if (VAR_24 != -VAR_1)
    goto out_sem;

   VAR_18 += VAR_9;
   continue;
  }

  VAR_8 = FUNC_4(VAR_6->b_page);
  VAR_7 = FUNC_9(VAR_3, VAR_18,
    VAR_6, VAR_8);
  for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10, ++VAR_18, VAR_7 = (void *)VAR_7 + VAR_11) {
   if (!FUNC_8(VAR_7))
    continue;

   FUNC_6(VAR_5, VAR_18, &VAR_12,
      &VAR_13);

   if (!VAR_17) {

    VAR_16 = VAR_12;
    VAR_17 = VAR_13 - VAR_12 + 1;
    continue;
   }

   if (VAR_16 + VAR_17 == VAR_12) {

    VAR_17 += VAR_13 - VAR_12 + 1;
    continue;
   }


   if (VAR_16 < VAR_14) {
    VAR_17 -= VAR_14 - VAR_16;
    VAR_16 = VAR_14;
   }

   if (VAR_17 >= VAR_20) {
    FUNC_5(VAR_8);

    VAR_24 = FUNC_2(VAR_5->ns_bdev,
      VAR_16 * VAR_25,
      VAR_17 * VAR_25,
      VAR_2, 0);
    if (VAR_24 < 0) {
     FUNC_12(VAR_6);
     goto out_sem;
    }

    VAR_23 += VAR_17;
    VAR_8 = FUNC_4(VAR_6->b_page);
    VAR_7 = FUNC_9(
     VAR_3, VAR_18, VAR_6, VAR_8);
   }


   VAR_16 = VAR_12;
   VAR_17 = VAR_13 - VAR_12 + 1;
  }
  FUNC_5(VAR_8);
  FUNC_12(VAR_6);
 }


 if (VAR_17) {

  if (VAR_16 < VAR_14) {
   VAR_17 -= VAR_14 - VAR_16;
   VAR_16 = VAR_14;
  }
  if (VAR_16 + VAR_17 > VAR_15 + 1)
   VAR_17 = VAR_15 - VAR_16 + 1;

  if (VAR_17 >= VAR_20) {
   VAR_24 = FUNC_2(VAR_5->ns_bdev,
     VAR_16 * VAR_25,
     VAR_17 * VAR_25,
     VAR_2, 0);
   if (!VAR_24)
    VAR_23 += VAR_17;
  }
 }

out_sem:
 FUNC_13(&FUNC_0(VAR_3)->mi_sem);

 VAR_4->len = VAR_23 << VAR_5->ns_blocksize_bits;
 return VAR_24;
}
