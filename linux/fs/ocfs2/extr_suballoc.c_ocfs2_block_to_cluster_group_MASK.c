
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ocfs2_super {scalar_t__ first_cluster_group_blkno; int sb; } ;
struct inode {int i_sb; } ;


 int FUNC_0 (int) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct inode *VAR_0,
      u64 VAR_1,
      u64 *VAR_2,
      u16 *VAR_3)
{
 struct ocfs2_super *VAR_4 = FUNC_1(VAR_0->i_sb);
 u32 VAR_5 = FUNC_2(VAR_4->sb, VAR_1);

 FUNC_0(!FUNC_3(VAR_0));

 *VAR_2 = FUNC_4(VAR_0,
           VAR_5);

 if (*VAR_2 == VAR_4->first_cluster_group_blkno)
  *VAR_3 = (u16) VAR_5;
 else
  *VAR_3 = (u16) FUNC_2(VAR_4->sb,
            VAR_1 - *VAR_2);
}
