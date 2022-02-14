
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct csi_state {int debugfs_root; int debug; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (char*,int,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 struct dentry* FUNC_2 (char*,int,int ,struct csi_state*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct csi_state *VAR_3)
{
 struct dentry *VAR_4;

 if (!FUNC_3())
  return -VAR_0;

 VAR_3->debugfs_root = FUNC_1(FUNC_5(VAR_3->dev), ((void*)0));
 if (!VAR_3->debugfs_root)
  return -VAR_1;

 VAR_4 = FUNC_0("debug_enable", 0600, VAR_3->debugfs_root,
    &VAR_3->debug);
 if (!VAR_4)
  goto remove_debugfs;

 VAR_4 = FUNC_2("dump_regs", 0600, VAR_3->debugfs_root,
    VAR_3, &VAR_2);
 if (!VAR_4)
  goto remove_debugfs;

 return 0;

remove_debugfs:
 FUNC_4(VAR_3->debugfs_root);

 return -VAR_1;
}
