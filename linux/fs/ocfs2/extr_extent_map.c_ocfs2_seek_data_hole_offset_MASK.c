
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ocfs2_extent_rec {unsigned long long e_blkno; int e_flags; int e_cpos; int e_leaf_clusters; } ;
struct inode {int i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;
struct TYPE_6__ {int ip_dyn_features; int ip_alloc_sem; } ;
struct TYPE_5__ {int s_clustersize_bits; } ;
struct TYPE_4__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct inode*,struct buffer_head*,int,int*,struct ocfs2_extent_rec*,unsigned int*) ;
 int FUNC_11 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct file *VAR_5, loff_t *VAR_6, int VAR_7)
{
 struct inode *VAR_8 = VAR_5->f_mapping->host;
 int VAR_9;
 unsigned int VAR_10 = 0, VAR_11 = 0;
 u16 VAR_12 = FUNC_2(VAR_8->i_sb)->s_clustersize_bits;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 u64 VAR_17, VAR_18;
 struct buffer_head *VAR_19 = ((void*)0);
 struct ocfs2_extent_rec VAR_20;

 FUNC_0(VAR_7 != VAR_3 && VAR_7 != VAR_4);

 VAR_9 = FUNC_11(VAR_8, &VAR_19, 0);
 if (VAR_9) {
  FUNC_8(VAR_9);
  goto out;
 }

 FUNC_4(&FUNC_1(VAR_8)->ip_alloc_sem);

 if (*VAR_6 >= FUNC_5(VAR_8)) {
  VAR_9 = -VAR_0;
  goto out_unlock;
 }

 if (FUNC_1(VAR_8)->ip_dyn_features & VAR_2) {
  if (VAR_7 == VAR_4)
   *VAR_6 = FUNC_5(VAR_8);
  goto out_unlock;
 }

 VAR_15 = 0;
 VAR_13 = *VAR_6 >> VAR_12;
 VAR_14 = FUNC_9(VAR_8->i_sb, FUNC_5(VAR_8));

 while (VAR_13 < VAR_14 && !VAR_10) {
  VAR_9 = FUNC_10(VAR_8, VAR_19, VAR_13, &VAR_16,
       &VAR_20, &VAR_10);
  if (VAR_9) {
   FUNC_8(VAR_9);
   goto out_unlock;
  }

  VAR_17 = VAR_13;
  VAR_17 <<= VAR_12;

  if (VAR_20.e_blkno == 0ULL) {
   VAR_15 = VAR_16;
   VAR_11 = 0;
  } else {
   VAR_15 = FUNC_6(VAR_20.e_leaf_clusters) -
    (VAR_13 - FUNC_7(VAR_20.e_cpos));
   VAR_11 = (VAR_20.e_flags & VAR_1) ? 0 : 1;
  }

  if ((!VAR_11 && VAR_7 == VAR_4) ||
      (VAR_11 && VAR_7 == VAR_3)) {
   if (VAR_17 > *VAR_6)
    *VAR_6 = VAR_17;
   goto out_unlock;
  }

  if (!VAR_10)
   VAR_13 += VAR_15;
 }

 if (VAR_7 == VAR_4) {
  VAR_17 = VAR_13;
  VAR_17 <<= VAR_12;
  VAR_18 = VAR_15;
  VAR_18 <<= VAR_12;

  if ((VAR_17 + VAR_18) > FUNC_5(VAR_8))
   VAR_18 = FUNC_5(VAR_8) - VAR_17;
  VAR_17 += VAR_18;
  if (VAR_17 > *VAR_6)
   *VAR_6 = VAR_17;
  goto out_unlock;
 }

 VAR_9 = -VAR_0;

out_unlock:

 FUNC_3(VAR_19);

 FUNC_13(&FUNC_1(VAR_8)->ip_alloc_sem);

 FUNC_12(VAR_8, 0);
out:
 return VAR_9;
}
