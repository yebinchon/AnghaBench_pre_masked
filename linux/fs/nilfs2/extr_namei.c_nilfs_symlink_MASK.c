
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {unsigned int s_blocksize; } ;
struct nilfs_transaction_info {int dummy; } ;
struct inode {struct super_block* i_sb; TYPE_1__* i_mapping; int * i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int VAR_2 ;
 int FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (struct inode*,int) ;
 int VAR_3 ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*,struct nilfs_transaction_info*,int) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct inode*,char const*,unsigned int) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (struct inode*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_4, struct dentry *VAR_5,
    const char *VAR_6)
{
 struct nilfs_transaction_info VAR_7;
 struct super_block *VAR_8 = VAR_4->i_sb;
 unsigned int VAR_9 = FUNC_12(VAR_6) + 1;
 struct inode *VAR_10;
 int VAR_11;

 if (VAR_9 > VAR_8->s_blocksize)
  return -VAR_0;

 VAR_11 = FUNC_9(VAR_4->i_sb, &VAR_7, 1);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_7(VAR_4, VAR_1 | 0777);
 VAR_11 = FUNC_1(VAR_10);
 if (FUNC_0(VAR_10))
  goto out;


 VAR_10->i_op = &VAR_3;
 FUNC_3(VAR_10);
 VAR_10->i_mapping->a_ops = &VAR_2;
 VAR_11 = FUNC_11(VAR_10, VAR_6, VAR_9);
 if (VAR_11)
  goto out_fail;




 VAR_11 = FUNC_5(VAR_5, VAR_10);
out:
 if (!VAR_11)
  VAR_11 = FUNC_10(VAR_4->i_sb);
 else
  FUNC_8(VAR_4->i_sb);

 return VAR_11;

out_fail:
 FUNC_2(VAR_10);
 FUNC_6(VAR_10);
 FUNC_13(VAR_10);
 FUNC_4(VAR_10);
 goto out;
}
