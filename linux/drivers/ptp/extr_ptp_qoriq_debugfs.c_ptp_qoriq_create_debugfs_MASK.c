
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_qoriq {int dev; struct dentry* debugfs_root; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int,struct dentry*,struct ptp_qoriq*,int *) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_6(struct ptp_qoriq *VAR_2)
{
 struct dentry *VAR_3;

 VAR_3 = FUNC_1(FUNC_5(VAR_2->dev), ((void*)0));
 if (FUNC_0(VAR_3))
  return;
 if (!VAR_3)
  goto err_root;

 VAR_2->debugfs_root = VAR_3;

 if (!FUNC_2("fiper1-loopback", 0600, VAR_3,
     VAR_2, &VAR_0))
  goto err_node;
 if (!FUNC_2("fiper2-loopback", 0600, VAR_3,
     VAR_2, &VAR_1))
  goto err_node;
 return;

err_node:
 FUNC_3(VAR_3);
 VAR_2->debugfs_root = ((void*)0);
err_root:
 FUNC_4(VAR_2->dev, "failed to initialize debugfs\n");
}
