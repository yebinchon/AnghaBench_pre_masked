
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct nilfs_transaction_info {int dummy; } ;
struct inode {int i_sb; TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct inode*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct inode*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,struct nilfs_transaction_info*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct inode*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_4, struct dentry *VAR_5, umode_t VAR_6)
{
 struct inode *VAR_7;
 struct nilfs_transaction_info VAR_8;
 int VAR_9;

 VAR_9 = FUNC_11(VAR_4->i_sb, &VAR_8, 1);
 if (VAR_9)
  return VAR_9;

 FUNC_4(VAR_4);

 VAR_7 = FUNC_9(VAR_4, VAR_0 | VAR_6);
 VAR_9 = FUNC_1(VAR_7);
 if (FUNC_0(VAR_7))
  goto out_dir;

 VAR_7->i_op = &VAR_2;
 VAR_7->i_fop = &VAR_3;
 VAR_7->i_mapping->a_ops = &VAR_1;

 FUNC_4(VAR_7);

 VAR_9 = FUNC_7(VAR_7, VAR_4);
 if (VAR_9)
  goto out_fail;

 VAR_9 = FUNC_6(VAR_5, VAR_7);
 if (VAR_9)
  goto out_fail;

 FUNC_8(VAR_7);
 FUNC_2(VAR_5, VAR_7);
out:
 if (!VAR_9)
  VAR_9 = FUNC_12(VAR_4->i_sb);
 else
  FUNC_10(VAR_4->i_sb);

 return VAR_9;

out_fail:
 FUNC_3(VAR_7);
 FUNC_3(VAR_7);
 FUNC_8(VAR_7);
 FUNC_13(VAR_7);
 FUNC_5(VAR_7);
out_dir:
 FUNC_3(VAR_4);
 FUNC_8(VAR_4);
 goto out;
}
