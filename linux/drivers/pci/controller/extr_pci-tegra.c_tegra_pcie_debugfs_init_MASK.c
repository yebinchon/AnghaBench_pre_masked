
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie {int debugfs; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *) ;
 struct dentry* FUNC_1 (char*,int,int ,struct tegra_pcie*,int *) ;
 int FUNC_2 (struct tegra_pcie*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct tegra_pcie *VAR_4)
{
 struct dentry *VAR_5;

 VAR_4->debugfs = FUNC_0("pcie", ((void*)0));
 if (!VAR_4->debugfs)
  return -VAR_0;

 VAR_5 = FUNC_1("ports", VAR_1 | VAR_2, VAR_4->debugfs,
       VAR_4, &VAR_3);
 if (!VAR_5)
  goto remove;

 return 0;

remove:
 FUNC_2(VAR_4);
 return -VAR_0;
}
