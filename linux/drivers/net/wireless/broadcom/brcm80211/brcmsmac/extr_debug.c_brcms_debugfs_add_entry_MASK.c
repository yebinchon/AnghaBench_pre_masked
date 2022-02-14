
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct dentry {int dummy; } ;
struct brcms_pub {struct dentry* dbgfs_dir; TYPE_3__* wlc; } ;
struct brcms_debugfs_entry {int (* read ) (struct seq_file*,void*) ;struct brcms_pub* drvr; } ;
struct TYPE_6__ {TYPE_2__* hw; } ;
struct TYPE_5__ {TYPE_1__* d11core; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,struct dentry*,struct brcms_debugfs_entry*,int *) ;
 struct brcms_debugfs_entry* FUNC_1 (struct device*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct brcms_pub *VAR_2, const char *VAR_3,
   int (*VAR_4)(struct seq_file *VAR_5, void *VAR_6))
{
 struct device *VAR_7 = &VAR_2->wlc->hw->d11core->dev;
 struct dentry *VAR_8 = VAR_2->dbgfs_dir;
 struct brcms_debugfs_entry *VAR_9;

 VAR_9 = FUNC_1(VAR_7, sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return;

 VAR_9->read = VAR_4;
 VAR_9->drvr = VAR_2;

 FUNC_0(VAR_3, 0444, VAR_8, VAR_9, &VAR_1);
}
