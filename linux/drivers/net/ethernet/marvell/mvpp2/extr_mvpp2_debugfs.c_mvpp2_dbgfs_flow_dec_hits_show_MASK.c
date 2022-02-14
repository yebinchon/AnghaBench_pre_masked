
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct mvpp2_dbgfs_flow_entry* private; } ;
struct mvpp2_dbgfs_flow_entry {int flow; int priv; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct mvpp2_dbgfs_flow_entry *VAR_2 = VAR_0->private;

 u32 VAR_3 = FUNC_0(VAR_2->priv, VAR_2->flow);

 FUNC_1(VAR_0, "%u\n", VAR_3);

 return 0;
}
