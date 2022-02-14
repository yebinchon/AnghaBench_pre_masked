
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_sb_private_info {int s_apbshift; unsigned int s_fpbshift; unsigned int s_apbmask; scalar_t__ fs_magic; scalar_t__ s_sbbase; scalar_t__ s_fpb; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_ctime; struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef int sector_t ;
typedef int __fs64 ;
typedef int __fs32 ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct super_block*,int ) ;
 scalar_t__ FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct inode*) ;
 struct buffer_head* FUNC_9 (struct super_block*,scalar_t__) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct super_block*,void*) ;
 scalar_t__ FUNC_13 (struct inode*,void*,int ,scalar_t__,scalar_t__,int*,struct page*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static u64
FUNC_15(struct inode *VAR_2, u64 VAR_3,
    unsigned VAR_4, sector_t VAR_5, int *VAR_6,
    int *VAR_7, struct page *VAR_8)
{
 struct super_block *VAR_9 = VAR_2->i_sb;
 struct ufs_sb_private_info *VAR_10 = FUNC_2(VAR_9)->s_uspi;
 int VAR_11 = VAR_10->s_apbshift - VAR_10->s_fpbshift;
 u64 VAR_12 = 0, VAR_13;
 struct buffer_head *VAR_14;
 void *VAR_15;

 if (!VAR_3)
  return 0;

 VAR_14 = FUNC_9(VAR_9, VAR_3 + (VAR_4 >> VAR_11));
 if (FUNC_14(!VAR_14)) {
  *VAR_6 = -VAR_0;
  return 0;
 }

 VAR_4 &= VAR_10->s_apbmask >> VAR_10->s_fpbshift;
 if (VAR_10->fs_magic == VAR_1)
  VAR_15 = (__fs64 *)VAR_14->b_data + VAR_4;
 else
  VAR_15 = (__fs32 *)VAR_14->b_data + VAR_4;

 VAR_12 = FUNC_12(VAR_9, VAR_15);
 if (VAR_12)
  goto out;

 if (VAR_4 && (VAR_10->fs_magic == VAR_1 ?
        (VAR_12 = FUNC_6(VAR_9, ((__fs64 *)VAR_14->b_data)[VAR_4-1])) :
        (VAR_12 = FUNC_5(VAR_9, ((__fs32 *)VAR_14->b_data)[VAR_4-1]))))
  VAR_13 = VAR_12 + VAR_10->s_fpb;
 else
  VAR_13 = VAR_14->b_blocknr + VAR_10->s_fpb;
 VAR_12 = FUNC_13(VAR_2, VAR_15, FUNC_11(VAR_5), VAR_13,
    VAR_10->s_fpb, VAR_6, VAR_8);
 if (!VAR_12)
  goto out;

 if (VAR_7)
  *VAR_7 = 1;

 FUNC_7(VAR_14);
 if (FUNC_0(VAR_2))
  FUNC_10(VAR_14);
 VAR_2->i_ctime = FUNC_4(VAR_2);
 FUNC_8(VAR_2);
out:
 FUNC_3 (VAR_14);
 FUNC_1("EXIT\n");
 if (VAR_12)
  VAR_12 += VAR_10->s_sbbase;
 return VAR_12;
}
