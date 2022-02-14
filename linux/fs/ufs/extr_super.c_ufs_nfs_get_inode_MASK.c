
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ufs_sb_private_info {int s_ncg; int s_ipg; } ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_generation; } ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct super_block*,int) ;

__attribute__((used)) static struct inode *FUNC_6(struct super_block *VAR_2, u64 VAR_3, u32 VAR_4)
{
 struct ufs_sb_private_info *VAR_5 = FUNC_3(VAR_2)->s_uspi;
 struct inode *VAR_6;

 if (VAR_3 < VAR_1 || VAR_3 > VAR_5->s_ncg * VAR_5->s_ipg)
  return FUNC_1(-VAR_0);

 VAR_6 = FUNC_5(VAR_2, VAR_3);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);
 if (VAR_4 && VAR_6->i_generation != VAR_4) {
  FUNC_4(VAR_6);
  return FUNC_1(-VAR_0);
 }
 return VAR_6;
}
