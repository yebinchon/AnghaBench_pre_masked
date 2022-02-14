
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {int s_clustersize_bits; } ;
struct ocfs2_extent_rec {unsigned long long e_blkno; int e_flags; int e_leaf_clusters; int e_cpos; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_dyn_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct inode*,struct buffer_head*,int,int *,struct ocfs2_extent_rec*,int*) ;
 scalar_t__ FUNC_7 (struct buffer_head*,int) ;

int FUNC_8(struct inode *VAR_3, struct buffer_head *VAR_4,
         u64 VAR_5, u64 VAR_6)
{
 int VAR_7 = 0, VAR_8;
 u32 VAR_9, VAR_10;
 struct ocfs2_super *VAR_11 = FUNC_1(VAR_3->i_sb);
 struct ocfs2_extent_rec VAR_12;

 if (FUNC_0(VAR_3)->ip_dyn_features & VAR_2) {
  if (FUNC_7(VAR_4, VAR_5 + VAR_6))
   return VAR_7;
  else
   return -VAR_0;
 }

 VAR_10 = VAR_5 >> VAR_11->s_clustersize_bits;
 VAR_9 = FUNC_5(VAR_3->i_sb,
            VAR_5 + VAR_6);
 VAR_8 = 0;
 while (VAR_10 < VAR_9 && !VAR_8) {
  VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_10,
       ((void*)0), &VAR_12, &VAR_8);
  if (VAR_7) {
   FUNC_4(VAR_7);
   goto out;
  }

  if (VAR_12.e_blkno == 0ULL)
   break;

  if (VAR_12.e_flags & VAR_1)
   break;

  VAR_10 = FUNC_3(VAR_12.e_cpos) +
   FUNC_2(VAR_12.e_leaf_clusters);
 }

 if (VAR_10 < VAR_9)
  VAR_7 = -VAR_0;
out:
 return VAR_7;
}
