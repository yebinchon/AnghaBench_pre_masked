
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int s_clustersize; } ;
struct inode {int i_sb; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 struct ocfs2_super* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct address_space*,int,int) ;
 int FUNC_3 (struct address_space*,int,int,int ) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0, u64 VAR_1,
      u64 VAR_2)
{
 struct ocfs2_super *VAR_3 = FUNC_0(VAR_0->i_sb);
 loff_t VAR_4, VAR_5;
 struct address_space *VAR_6 = VAR_0->i_mapping;

 VAR_4 = (loff_t)FUNC_1(VAR_0->i_sb, VAR_1);
 VAR_5 = VAR_1 + VAR_2;
 VAR_5 = VAR_5 & ~(VAR_3->s_clustersize - 1);

 if (VAR_4 < VAR_5) {
  FUNC_3(VAR_6, VAR_4, VAR_5 - VAR_4, 0);
  FUNC_2(VAR_6, VAR_4, VAR_5 - 1);
 }
}
