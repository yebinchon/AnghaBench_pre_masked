
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_bdev; } ;
struct nilfs_transaction_info {int dummy; } ;
struct inode {int i_mapping; struct super_block* i_sb; } ;
struct buffer_head {int b_page; int b_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int) ;
 struct buffer_head* FUNC_4 (struct inode*,int ,unsigned long,int ) ;
 int FUNC_5 (struct inode*,unsigned long,struct buffer_head*,void (*) (struct inode*,struct buffer_head*,void*)) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,struct nilfs_transaction_info*,int ) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_2, unsigned long VAR_3,
      struct buffer_head **VAR_4,
      void (*VAR_5)(struct inode *,
           struct buffer_head *,
           void *))
{
 struct super_block *VAR_6 = VAR_2->i_sb;
 struct nilfs_transaction_info VAR_7;
 struct buffer_head *VAR_8;
 int VAR_9;

 FUNC_7(VAR_6, &VAR_7, 0);

 VAR_9 = -VAR_1;
 VAR_8 = FUNC_4(VAR_2, VAR_2->i_mapping, VAR_3, 0);
 if (FUNC_10(!VAR_8))
  goto failed_unlock;

 VAR_9 = -VAR_0;
 if (FUNC_1(VAR_8))
  goto failed_bh;

 FUNC_12(VAR_8);
 if (FUNC_1(VAR_8))
  goto failed_bh;

 VAR_8->b_bdev = VAR_6->s_bdev;
 VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_8, VAR_5);
 if (FUNC_3(!VAR_9)) {
  FUNC_2(VAR_8);
  *VAR_4 = VAR_8;
 }

 failed_bh:
 FUNC_11(VAR_8->b_page);
 FUNC_9(VAR_8->b_page);
 FUNC_0(VAR_8);

 failed_unlock:
 if (FUNC_3(!VAR_9))
  VAR_9 = FUNC_8(VAR_6);
 else
  FUNC_6(VAR_6);

 return VAR_9;
}
