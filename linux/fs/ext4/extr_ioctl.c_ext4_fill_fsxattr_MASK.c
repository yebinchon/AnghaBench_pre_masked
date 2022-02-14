
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct fsxattr {int fsx_projid; } ;
struct ext4_inode_info {int i_flags; int i_projid; } ;


 int VAR_0 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct fsxattr*,int ) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_2, struct fsxattr *VAR_3)
{
 struct ext4_inode_info *VAR_4 = FUNC_0(VAR_2);

 FUNC_4(VAR_3, FUNC_2(VAR_4->i_flags &
            VAR_0));

 if (FUNC_1(VAR_2->i_sb))
  VAR_3->fsx_projid = FUNC_3(&VAR_1, VAR_4->i_projid);
}
