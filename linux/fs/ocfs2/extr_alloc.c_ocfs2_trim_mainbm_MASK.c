
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct super_block {scalar_t__ s_blocksize; } ;
struct ocfs2_super {scalar_t__ s_clustersize_bits; scalar_t__ bitmap_cpg; scalar_t__ first_cluster_group_blkno; } ;
struct ocfs2_group_desc {int dummy; } ;
struct ocfs2_dinode {int i_clusters; } ;
struct inode {int dummy; } ;
struct fstrim_range {scalar_t__ start; scalar_t__ len; scalar_t__ minlen; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct super_block*,scalar_t__) ;
 struct inode* FUNC_9 (struct ocfs2_super*,int ,int ) ;
 int FUNC_10 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct inode*,struct ocfs2_dinode*,scalar_t__,struct buffer_head**) ;
 int FUNC_13 (struct super_block*,struct ocfs2_group_desc*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (struct inode*,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static
int FUNC_16(struct super_block *VAR_4, struct fstrim_range *VAR_5)
{
 struct ocfs2_super *VAR_6 = FUNC_0(VAR_4);
 u64 VAR_7, VAR_8, VAR_9 = 0, VAR_10, VAR_11 = 0, VAR_12 = 0;
 int VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 struct buffer_head *VAR_18 = ((void*)0);
 struct inode *VAR_19 = ((void*)0);
 struct buffer_head *VAR_20 = ((void*)0);
 struct ocfs2_dinode *VAR_21;
 struct ocfs2_group_desc *VAR_22 = ((void*)0);

 VAR_7 = VAR_5->start >> VAR_6->s_clustersize_bits;
 VAR_8 = VAR_5->len >> VAR_6->s_clustersize_bits;
 VAR_17 = VAR_5->minlen >> VAR_6->s_clustersize_bits;

 if (VAR_17 >= VAR_6->bitmap_cpg || VAR_5->len < VAR_4->s_blocksize)
  return -VAR_0;

 FUNC_15(VAR_7, VAR_8, VAR_17);

next_group:
 VAR_19 = FUNC_9(VAR_6,
          VAR_2,
          VAR_3);
 if (!VAR_19) {
  VAR_13 = -VAR_1;
  FUNC_6(VAR_13);
  goto out;
 }

 FUNC_2(VAR_19);

 VAR_13 = FUNC_10(VAR_19, &VAR_18, 0);
 if (VAR_13 < 0) {
  FUNC_6(VAR_13);
  goto out_mutex;
 }
 VAR_21 = (struct ocfs2_dinode *)VAR_18->b_data;




 if (!VAR_12) {
  if (VAR_7 >= FUNC_5(VAR_21->i_clusters)) {
   VAR_13 = -VAR_0;
   goto out_unlock;
  }

  if (VAR_7 + VAR_8 > FUNC_5(VAR_21->i_clusters))
   VAR_8 = FUNC_5(VAR_21->i_clusters) - VAR_7;





  VAR_10 = FUNC_14(VAR_19, VAR_7);
  if (VAR_10 == VAR_6->first_cluster_group_blkno)
   VAR_15 = VAR_7;
  else
   VAR_15 = VAR_7 - FUNC_7(VAR_4,
        VAR_10);
  VAR_11 = FUNC_14(VAR_19,
             VAR_7 + VAR_8 - 1);
  VAR_12 = VAR_10;
 }

 do {
  if (VAR_15 + VAR_8 >= VAR_6->bitmap_cpg)
   VAR_16 = VAR_6->bitmap_cpg;
  else
   VAR_16 = VAR_15 + VAR_8;

  VAR_13 = FUNC_12(VAR_19,
        VAR_21, VAR_12,
        &VAR_20);
  if (VAR_13 < 0) {
   FUNC_6(VAR_13);
   break;
  }

  VAR_22 = (struct ocfs2_group_desc *)VAR_20->b_data;
  VAR_14 = FUNC_13(VAR_4, VAR_22, VAR_12,
           VAR_15, VAR_16, VAR_17);
  FUNC_1(VAR_20);
  VAR_20 = ((void*)0);
  if (VAR_14 < 0) {
   VAR_13 = VAR_14;
   FUNC_6(VAR_13);
   break;
  }

  VAR_9 += VAR_14;
  VAR_8 -= VAR_6->bitmap_cpg - VAR_15;
  VAR_15 = 0;
  if (VAR_12 == VAR_6->first_cluster_group_blkno)
   VAR_12 = FUNC_8(VAR_4, VAR_6->bitmap_cpg);
  else
   VAR_12 += FUNC_8(VAR_4, VAR_6->bitmap_cpg);
 } while (0);

out_unlock:
 FUNC_11(VAR_19, 0);
 FUNC_1(VAR_18);
 VAR_18 = ((void*)0);
out_mutex:
 FUNC_3(VAR_19);
 FUNC_4(VAR_19);






 if (VAR_13 >= 0 && VAR_12 <= VAR_11)
  goto next_group;
out:
 VAR_5->len = VAR_9 * VAR_4->s_blocksize;
 return VAR_13;
}
