
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct ufs_sb_private_info {unsigned int s_fpbmask; unsigned int s_fpb; } ;
struct ufs_inode_info {unsigned int i_lastfrag; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 struct ufs_inode_info* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,void*) ;
 unsigned int FUNC_3 (unsigned int) ;
 void* FUNC_4 (struct ufs_sb_private_info*,struct ufs_inode_info*,unsigned int) ;
 unsigned int FUNC_5 (struct inode*,void*,unsigned int,int ,unsigned int,int*,struct page*) ;

__attribute__((used)) static bool
FUNC_6(struct inode *VAR_0, u64 VAR_1,
    int *VAR_2, struct page *VAR_3)
{
 struct ufs_inode_info *VAR_4 = FUNC_0(VAR_0);
 struct super_block *VAR_5 = VAR_0->i_sb;
 struct ufs_sb_private_info *VAR_6 = FUNC_1(VAR_5)->s_uspi;
 unsigned VAR_7 = VAR_4->i_lastfrag;
 unsigned VAR_8 = FUNC_3(VAR_7);
 unsigned VAR_9;
 void *VAR_10;
 u64 VAR_11;

 if (VAR_1 < (VAR_7 | VAR_6->s_fpbmask))
  VAR_9 = (VAR_1 & VAR_6->s_fpbmask) + 1;
 else
  VAR_9 = VAR_6->s_fpb;

 VAR_10 = FUNC_4(VAR_6, VAR_4, VAR_8);
 VAR_11 = FUNC_5(VAR_0, VAR_10, VAR_7, FUNC_2(VAR_5, VAR_10),
    VAR_9 - (VAR_7 & VAR_6->s_fpbmask), VAR_2,
    VAR_3);
 return VAR_11 != 0;
}
