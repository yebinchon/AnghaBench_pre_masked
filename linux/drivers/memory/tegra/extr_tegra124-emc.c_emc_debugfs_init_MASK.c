
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_emc {int dummy; } ;
struct device {int dummy; } ;
struct dentry {int dummy; } ;
typedef struct tegra_emc clk ;


 scalar_t__ FUNC_0 (struct tegra_emc*) ;
 int FUNC_1 (struct tegra_emc*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tegra_emc* FUNC_2 (char*,char*) ;
 struct dentry* FUNC_3 (char*,int *) ;
 struct dentry* FUNC_4 (char*,int,struct dentry*,struct tegra_emc*,int *) ;
 int FUNC_5 (struct device*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct device *VAR_4, struct tegra_emc *VAR_5)
{
 struct dentry *VAR_6, *VAR_7;
 struct clk *VAR_8;

 VAR_6 = FUNC_3("emc", ((void*)0));
 if (!VAR_6) {
  FUNC_5(VAR_4, "failed to create debugfs directory\n");
  return;
 }

 VAR_8 = FUNC_2("tegra-clk-debug", "emc");
 if (FUNC_0(VAR_8)) {
  FUNC_5(VAR_4, "failed to get debug clock: %ld\n", FUNC_1(VAR_8));
  return;
 }

 VAR_7 = FUNC_4("rate", VAR_0 | VAR_1, VAR_6, VAR_8,
       &VAR_2);
 if (!VAR_7)
  FUNC_5(VAR_4, "failed to create debugfs entry\n");

 VAR_7 = FUNC_4("supported_rates", VAR_0, VAR_6, VAR_5,
       &VAR_3);
 if (!VAR_7)
  FUNC_5(VAR_4, "failed to create debugfs entry\n");
}
