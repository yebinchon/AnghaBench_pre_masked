
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nandsim {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {struct dentry* dfs_dir; } ;
struct TYPE_4__ {TYPE_1__ dbg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 struct dentry* FUNC_4 (char*,int ,struct dentry*,struct nandsim*,int *) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_5(struct nandsim *VAR_5)
{
 struct dentry *VAR_6 = VAR_4->dbg.dfs_dir;
 struct dentry *VAR_7;





 if (FUNC_1(VAR_6)) {
  if (FUNC_0(VAR_0) &&
      !FUNC_0(VAR_1))
   FUNC_3("CONFIG_MTD_PARTITIONED_MASTER must be enabled to expose debugfs stuff\n");
  return 0;
 }

 VAR_7 = FUNC_4("nandsim_wear_report", VAR_2,
       VAR_6, VAR_5, &VAR_3);
 if (FUNC_1(VAR_7)) {
  FUNC_2("cannot create \"nandsim_wear_report\" debugfs entry\n");
  return -1;
 }

 return 0;
}
