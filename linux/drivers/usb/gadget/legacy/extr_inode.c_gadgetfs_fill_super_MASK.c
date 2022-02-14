
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; int s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; } ;
struct inode {int * i_op; } ;
struct fs_context {int dummy; } ;
struct dev_data {int dentry; struct super_block* sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct inode*) ;
 struct dev_data* FUNC_1 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct super_block*,int ,struct dev_data*,int *) ;
 struct inode* FUNC_3 (struct super_block*,int *,int *,int) ;
 int FUNC_4 (struct dev_data*) ;
 int VAR_12 ;
 int VAR_13 ;
 struct dev_data* VAR_14 ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6 (struct super_block *VAR_15, struct fs_context *VAR_16)
{
 struct inode *VAR_17;
 struct dev_data *VAR_18;

 if (VAR_14)
  return -VAR_3;

 VAR_0 = FUNC_5();
 if (!VAR_0)
  return -VAR_1;


 VAR_15->s_blocksize = VAR_6;
 VAR_15->s_blocksize_bits = VAR_5;
 VAR_15->s_magic = VAR_4;
 VAR_15->s_op = &VAR_11;
 VAR_15->s_time_gran = 1;


 VAR_17 = FUNC_3 (VAR_15,
   ((void*)0), &VAR_13,
   VAR_7 | VAR_8 | VAR_9);
 if (!VAR_17)
  goto Enomem;
 VAR_17->i_op = &VAR_12;
 if (!(VAR_15->s_root = FUNC_0 (VAR_17)))
  goto Enomem;




 VAR_18 = FUNC_1 ();
 if (!VAR_18)
  goto Enomem;

 VAR_18->sb = VAR_15;
 VAR_18->dentry = FUNC_2(VAR_15, VAR_0, VAR_18, &VAR_10);
 if (!VAR_18->dentry) {
  FUNC_4(VAR_18);
  goto Enomem;
 }




 VAR_14 = VAR_18;
 return 0;

Enomem:
 return -VAR_2;
}
