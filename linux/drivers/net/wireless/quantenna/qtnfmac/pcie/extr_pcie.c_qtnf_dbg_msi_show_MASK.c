
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct qtnf_pcie_bus_priv {int msi_enabled; } ;
struct qtnf_bus {int dummy; } ;


 struct qtnf_bus* FUNC_0 (int ) ;
 struct qtnf_pcie_bus_priv* FUNC_1 (struct qtnf_bus*) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct qtnf_bus *VAR_2 = FUNC_0(VAR_0->private);
 struct qtnf_pcie_bus_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_0, "%u\n", VAR_3->msi_enabled);

 return 0;
}
