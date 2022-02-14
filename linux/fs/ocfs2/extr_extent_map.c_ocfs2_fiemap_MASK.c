
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct ocfs2_super {unsigned int s_clustersize_bits; TYPE_1__* sb; } ;
struct ocfs2_extent_rec {unsigned long long e_blkno; int e_flags; int e_leaf_clusters; int e_cpos; } ;
struct inode {int i_sb; } ;
struct fiemap_extent_info {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int ip_dyn_features; int ip_alloc_sem; } ;
struct TYPE_3__ {unsigned int s_blocksize_bits; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_6 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fiemap_extent_info*,int ) ;
 int FUNC_5 (struct fiemap_extent_info*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 unsigned int FUNC_8 (unsigned long long) ;
 int FUNC_9 (int) ;
 unsigned int FUNC_10 (int ,unsigned int) ;
 int FUNC_11 (struct inode*,struct buffer_head*,struct fiemap_extent_info*,unsigned int) ;
 int FUNC_12 (struct inode*,struct buffer_head*,unsigned int,unsigned int*,struct ocfs2_extent_rec*,int*) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_15 (struct inode*,int ) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct inode *VAR_7, struct fiemap_extent_info *VAR_8,
   u64 VAR_9, u64 VAR_10)
{
 int VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 unsigned int VAR_15;
 struct ocfs2_super *VAR_16 = FUNC_1(VAR_7->i_sb);
 u64 VAR_17, VAR_18, VAR_19;
 struct buffer_head *VAR_20 = ((void*)0);
 struct ocfs2_extent_rec VAR_21;

 VAR_11 = FUNC_4(VAR_8, VAR_5);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_14(VAR_7, &VAR_20, 0);
 if (VAR_11) {
  FUNC_9(VAR_11);
  goto out;
 }

 FUNC_3(&FUNC_0(VAR_7)->ip_alloc_sem);




 if ((FUNC_0(VAR_7)->ip_dyn_features & VAR_6) ||
     FUNC_13(VAR_7)) {
  VAR_11 = FUNC_11(VAR_7, VAR_20, VAR_8, VAR_9);
  goto out_unlock;
 }

 VAR_14 = VAR_9 >> VAR_16->s_clustersize_bits;
 VAR_13 = FUNC_10(VAR_7->i_sb,
            VAR_9 + VAR_10);
 VAR_12 = 0;
 while (VAR_14 < VAR_13 && !VAR_12) {
  u32 VAR_22;

  VAR_11 = FUNC_12(VAR_7, VAR_20, VAR_14,
       &VAR_15, &VAR_21, &VAR_12);
  if (VAR_11) {
   FUNC_9(VAR_11);
   goto out_unlock;
  }

  if (VAR_21.e_blkno == 0ULL) {
   VAR_14 += VAR_15;
   continue;
  }

  VAR_22 = 0;
  if (VAR_21.e_flags & VAR_4)
   VAR_22 |= VAR_2;
  if (VAR_21.e_flags & VAR_3)
   VAR_22 |= VAR_1;
  if (VAR_12)
   VAR_22 |= VAR_0;
  VAR_17 = (u64)FUNC_6(VAR_21.e_leaf_clusters) << VAR_16->s_clustersize_bits;
  VAR_18 = FUNC_8(VAR_21.e_blkno) << VAR_16->sb->s_blocksize_bits;
  VAR_19 = (u64)FUNC_7(VAR_21.e_cpos) << VAR_16->s_clustersize_bits;

  VAR_11 = FUNC_5(VAR_8, VAR_19, VAR_18,
           VAR_17, VAR_22);
  if (VAR_11)
   break;

  VAR_14 = FUNC_7(VAR_21.e_cpos)+ FUNC_6(VAR_21.e_leaf_clusters);
 }

 if (VAR_11 > 0)
  VAR_11 = 0;

out_unlock:
 FUNC_2(VAR_20);

 FUNC_16(&FUNC_0(VAR_7)->ip_alloc_sem);

 FUNC_15(VAR_7, 0);
out:

 return VAR_11;
}
