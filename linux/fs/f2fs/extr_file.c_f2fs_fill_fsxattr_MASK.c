
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fsxattr {int fsx_projid; } ;
struct f2fs_inode_info {int i_projid; int i_flags; } ;


 struct f2fs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct fsxattr*,int ) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_1, struct fsxattr *VAR_2)
{
 struct f2fs_inode_info *VAR_3 = FUNC_0(VAR_1);

 FUNC_5(VAR_2, FUNC_2(VAR_3->i_flags));

 if (FUNC_3(FUNC_1(VAR_1)))
  VAR_2->fsx_projid = FUNC_4(&VAR_0, VAR_3->i_projid);
}
