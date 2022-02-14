
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; int s_blocksize_bits; int s_time_gran; int s_root; int * s_op; int s_magic; int s_flags; } ;
struct TYPE_2__ {int node; } ;
struct op_inode_info {TYPE_1__ u; int type; } ;
struct inode {int dummy; } ;
struct fs_context {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct op_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 struct inode* FUNC_5 (struct super_block*,int ) ;
 int VAR_5 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_6, struct fs_context *VAR_7)
{
 struct inode *VAR_8;
 struct op_inode_info *VAR_9;
 int VAR_10;

 VAR_6->s_flags |= VAR_3;
 VAR_6->s_blocksize = 1024;
 VAR_6->s_blocksize_bits = 10;
 VAR_6->s_magic = VAR_2;
 VAR_6->s_op = &VAR_5;
 VAR_6->s_time_gran = 1;
 VAR_8 = FUNC_5(VAR_6, VAR_1);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_2(VAR_8);
  goto out_no_root;
 }

 VAR_9 = FUNC_1(VAR_8);
 VAR_9->type = VAR_4;
 VAR_9->u.node = FUNC_4("/");

 VAR_6->s_root = FUNC_3(VAR_8);
 if (!VAR_6->s_root)
  goto out_no_root_dentry;
 return 0;

out_no_root_dentry:
 VAR_10 = -VAR_0;
out_no_root:
 FUNC_6("openprom_fill_super: get root inode failed\n");
 return VAR_10;
}
