
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie {int ports; } ;
struct seq_file {struct tegra_pcie* private; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_0, loff_t *VAR_1)
{
 struct tegra_pcie *VAR_2 = VAR_0->private;

 if (FUNC_0(&VAR_2->ports))
  return ((void*)0);

 FUNC_2(VAR_0, "Index  Status\n");

 return FUNC_1(&VAR_2->ports, *VAR_1);
}
