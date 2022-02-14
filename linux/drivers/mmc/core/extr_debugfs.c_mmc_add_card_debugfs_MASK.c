
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int debugfs_root; } ;
struct mmc_card {int state; struct dentry* debugfs_root; struct mmc_host* host; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ,struct dentry*,int *) ;
 int FUNC_2 (struct mmc_card*) ;

void FUNC_3(struct mmc_card *VAR_1)
{
 struct mmc_host *VAR_2 = VAR_1->host;
 struct dentry *VAR_3;

 if (!VAR_2->debugfs_root)
  return;

 VAR_3 = FUNC_0(FUNC_2(VAR_1), VAR_2->debugfs_root);
 VAR_1->debugfs_root = VAR_3;

 FUNC_1("state", VAR_0, VAR_3, &VAR_1->state);
}
