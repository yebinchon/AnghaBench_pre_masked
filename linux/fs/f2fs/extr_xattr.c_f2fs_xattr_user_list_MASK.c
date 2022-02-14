
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct dentry {int d_sb; } ;


 struct f2fs_sb_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static bool FUNC_2(struct dentry *VAR_1)
{
 struct f2fs_sb_info *VAR_2 = FUNC_0(VAR_1->d_sb);

 return FUNC_1(VAR_2, VAR_0);
}
