
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_debug_info {char* dfs_dir_name; struct dentry* dfs_dir; struct dentry* dfs_power_cut_max; struct dentry* dfs_power_cut_min; struct dentry* dfs_emulate_power_cut; struct dentry* dfs_emulate_io_failures; struct dentry* dfs_emulate_bitflips; struct dentry* dfs_disable_bgt; struct dentry* dfs_chk_fastmap; struct dentry* dfs_chk_io; struct dentry* dfs_chk_gen; } ;
struct ubi_device {unsigned long ubi_num; struct ubi_debug_info dbg; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 struct dentry* FUNC_4 (char const*,int ) ;
 struct dentry* FUNC_5 (char const*,int ,struct dentry*,void*,int *) ;
 int FUNC_6 (struct dentry*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*,int,char*,unsigned long) ;
 int FUNC_8 (struct ubi_device*,char*,char const*,int) ;

int FUNC_9(struct ubi_device *VAR_10)
{
 int VAR_11, VAR_12;
 unsigned long VAR_13 = VAR_10->ubi_num;
 const char *VAR_14;
 struct dentry *VAR_15;
 struct ubi_debug_info *VAR_16 = &VAR_10->dbg;

 if (!FUNC_1(VAR_0))
  return 0;

 VAR_12 = FUNC_7(VAR_16->dfs_dir_name, VAR_5 + 1, VAR_6,
       VAR_10->ubi_num);
 if (VAR_12 == VAR_5) {

  VAR_14 = VAR_6;
  VAR_15 = FUNC_0(-VAR_1);
  goto out;
 }

 VAR_14 = VAR_16->dfs_dir_name;
 VAR_15 = FUNC_4(VAR_14, VAR_8);
 if (FUNC_2(VAR_15))
  goto out;
 VAR_16->dfs_dir = VAR_15;

 VAR_14 = "chk_gen";
 VAR_15 = FUNC_5(VAR_14, VAR_4, VAR_16->dfs_dir, (void *)VAR_13,
       &VAR_7);
 if (FUNC_2(VAR_15))
  goto out_remove;
 VAR_16->dfs_chk_gen = VAR_15;

 VAR_14 = "chk_io";
 VAR_15 = FUNC_5(VAR_14, VAR_4, VAR_16->dfs_dir, (void *)VAR_13,
       &VAR_7);
 if (FUNC_2(VAR_15))
  goto out_remove;
 VAR_16->dfs_chk_io = VAR_15;

 VAR_14 = "chk_fastmap";
 VAR_15 = FUNC_5(VAR_14, VAR_4, VAR_16->dfs_dir, (void *)VAR_13,
       &VAR_7);
 if (FUNC_2(VAR_15))
  goto out_remove;
 VAR_16->dfs_chk_fastmap = VAR_15;

 VAR_14 = "tst_disable_bgt";
 VAR_15 = FUNC_5(VAR_14, VAR_4, VAR_16->dfs_dir, (void *)VAR_13,
       &VAR_7);
 if (FUNC_2(VAR_15))
  goto out_remove;
 VAR_16->dfs_disable_bgt = VAR_15;

 VAR_14 = "tst_emulate_bitflips";
 VAR_15 = FUNC_5(VAR_14, VAR_4, VAR_16->dfs_dir, (void *)VAR_13,
       &VAR_7);
 if (FUNC_2(VAR_15))
  goto out_remove;
 VAR_16->dfs_emulate_bitflips = VAR_15;

 VAR_14 = "tst_emulate_io_failures";
 VAR_15 = FUNC_5(VAR_14, VAR_4, VAR_16->dfs_dir, (void *)VAR_13,
       &VAR_7);
 if (FUNC_2(VAR_15))
  goto out_remove;
 VAR_16->dfs_emulate_io_failures = VAR_15;

 VAR_14 = "tst_emulate_power_cut";
 VAR_15 = FUNC_5(VAR_14, VAR_4, VAR_16->dfs_dir, (void *)VAR_13,
       &VAR_7);
 if (FUNC_2(VAR_15))
  goto out_remove;
 VAR_16->dfs_emulate_power_cut = VAR_15;

 VAR_14 = "tst_emulate_power_cut_min";
 VAR_15 = FUNC_5(VAR_14, VAR_4, VAR_16->dfs_dir, (void *)VAR_13,
       &VAR_7);
 if (FUNC_2(VAR_15))
  goto out_remove;
 VAR_16->dfs_power_cut_min = VAR_15;

 VAR_14 = "tst_emulate_power_cut_max";
 VAR_15 = FUNC_5(VAR_14, VAR_4, VAR_16->dfs_dir, (void *)VAR_13,
       &VAR_7);
 if (FUNC_2(VAR_15))
  goto out_remove;
 VAR_16->dfs_power_cut_max = VAR_15;

 VAR_14 = "detailed_erase_block_info";
 VAR_15 = FUNC_5(VAR_14, VAR_3, VAR_16->dfs_dir, (void *)VAR_13,
       &VAR_9);
 if (FUNC_2(VAR_15))
  goto out_remove;

 return 0;

out_remove:
 FUNC_6(VAR_16->dfs_dir);
out:
 VAR_11 = VAR_15 ? FUNC_3(VAR_15) : -VAR_2;
 FUNC_8(VAR_10, "cannot create \"%s\" debugfs file or directory, error %d\n",
  VAR_14, VAR_11);
 return VAR_11;
}
