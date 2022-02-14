
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie {int ports; } ;
struct seq_file {struct tegra_pcie* private; } ;
typedef int loff_t ;


 void* FUNC_0 (void*,int *,int *) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct tegra_pcie *VAR_3 = VAR_0->private;

 return FUNC_0(VAR_1, &VAR_3->ports, VAR_2);
}
