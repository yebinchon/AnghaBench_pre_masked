
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ partname; scalar_t__ partid; struct dentry* dfs_dir; } ;
struct device {int dummy; } ;
struct mtd_info {TYPE_1__ dbg; struct device dev; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (int ,struct dentry*) ;
 struct dentry* FUNC_2 (char*,int,struct dentry*,struct mtd_info*,int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 struct dentry* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct mtd_info *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct dentry *VAR_5, *VAR_6;

 if (FUNC_0(VAR_0))
  return;

 VAR_5 = FUNC_1(FUNC_5(VAR_4), VAR_0);
 if (FUNC_0(VAR_5)) {
  FUNC_3(VAR_4, "won't show data in debugfs\n");
  return;
 }

 VAR_3->dbg.dfs_dir = VAR_5;

 if (VAR_3->dbg.partid) {
  VAR_6 = FUNC_2("partid", 0400, VAR_5, VAR_3,
        &VAR_1);
  if (FUNC_0(VAR_6))
   FUNC_4(VAR_4, "can't create debugfs entry for partid\n");
 }

 if (VAR_3->dbg.partname) {
  VAR_6 = FUNC_2("partname", 0400, VAR_5, VAR_3,
        &VAR_2);
  if (FUNC_0(VAR_6))
   FUNC_4(VAR_4,
    "can't create debugfs entry for partname\n");
 }
}
