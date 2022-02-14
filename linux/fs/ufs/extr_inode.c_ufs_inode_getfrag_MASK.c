
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_sb_private_info {unsigned int s_fpb; scalar_t__ s_fpbmask; scalar_t__ s_sbbase; } ;
struct ufs_inode_info {scalar_t__ i_lastfrag; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_ctime; struct super_block* i_sb; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 struct ufs_inode_info* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct super_block*,void*) ;
 void* FUNC_7 (struct ufs_sb_private_info*,struct ufs_inode_info*,unsigned int) ;
 scalar_t__ FUNC_8 (struct inode*,void*,int ,scalar_t__,unsigned int,int*,struct page*) ;
 int FUNC_9 (struct inode*) ;

__attribute__((used)) static u64
FUNC_10(struct inode *VAR_2, unsigned VAR_3,
    sector_t VAR_4, int *VAR_5,
    int *VAR_6, struct page *VAR_7)
{
 struct ufs_inode_info *VAR_8 = FUNC_1(VAR_2);
 struct super_block *VAR_9 = VAR_2->i_sb;
 struct ufs_sb_private_info *VAR_10 = FUNC_2(VAR_9)->s_uspi;
 u64 VAR_11, VAR_12, VAR_13;
 unsigned VAR_14 = VAR_10->s_fpb;
 void *VAR_15;






 VAR_15 = FUNC_7(VAR_10, VAR_8, VAR_3);
 VAR_11 = FUNC_6(VAR_9, VAR_15);
 if (VAR_11)
  goto out;

 VAR_13 = VAR_8->i_lastfrag;


 if (VAR_4 < VAR_1 && VAR_4 >= VAR_13)
  VAR_14 = (VAR_4 & VAR_10->s_fpbmask) + 1;

 VAR_12 = 0;
 if (VAR_3) {
  VAR_12 = FUNC_6(VAR_9,
     FUNC_7(VAR_10, VAR_8, VAR_3 - 1));
  if (VAR_12)
   VAR_12 += VAR_10->s_fpb;
 }
 VAR_11 = FUNC_8(VAR_2, VAR_15, FUNC_5(VAR_4),
    VAR_12, VAR_14, VAR_5, VAR_7);

 if (!VAR_11) {
  *VAR_5 = -VAR_0;
  return 0;
 }

 if (VAR_6)
  *VAR_6 = 1;
 VAR_2->i_ctime = FUNC_3(VAR_2);
 if (FUNC_0(VAR_2))
  FUNC_9 (VAR_2);
 FUNC_4(VAR_2);
out:
 return VAR_11 + VAR_10->s_sbbase;
}
