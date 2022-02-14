
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_log_ctx {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct btrfs_trans_handle*,int ,struct dentry*,int const,int const,int ,struct btrfs_log_ctx*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;

int FUNC_5(struct btrfs_trans_handle *VAR_1,
     struct dentry *VAR_2,
     const loff_t VAR_3,
     const loff_t VAR_4,
     struct btrfs_log_ctx *VAR_5)
{
 struct dentry *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1, FUNC_0(FUNC_2(VAR_2)), VAR_6,
         VAR_3, VAR_4, VAR_0, VAR_5);
 FUNC_4(VAR_6);

 return VAR_7;
}
