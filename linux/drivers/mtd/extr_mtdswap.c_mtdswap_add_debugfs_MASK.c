
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtdswap_dev {int dev; TYPE_2__* mtd; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {struct dentry* dfs_dir; } ;
struct TYPE_4__ {TYPE_1__ dbg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 struct dentry* FUNC_2 (char*,int ,struct dentry*,struct mtdswap_dev*,int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct mtdswap_dev *VAR_3)
{
 struct dentry *VAR_4 = VAR_3->mtd->dbg.dfs_dir;
 struct dentry *VAR_5;

 if (!FUNC_0(VAR_0))
  return 0;

 if (FUNC_1(VAR_4))
  return -1;

 VAR_5 = FUNC_2("mtdswap_stats", VAR_1, VAR_4, VAR_3,
    &VAR_2);
 if (!VAR_5) {
  FUNC_3(VAR_3->dev, "debugfs_create_file failed\n");
  return -1;
 }

 return 0;
}
