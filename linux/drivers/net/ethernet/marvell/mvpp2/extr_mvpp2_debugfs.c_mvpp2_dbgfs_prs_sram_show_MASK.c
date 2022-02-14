
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mvpp2_dbgfs_prs_entry* private; } ;
struct mvpp2_prs_entry {int sram; } ;
struct mvpp2_dbgfs_prs_entry {int tid; int priv; } ;


 int FUNC_0 (int ,struct mvpp2_prs_entry*,int ) ;
 int FUNC_1 (struct seq_file*,char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct mvpp2_dbgfs_prs_entry *VAR_2 = VAR_0->private;
 struct mvpp2_prs_entry VAR_3;

 FUNC_0(VAR_2->priv, &VAR_3, VAR_2->tid);

 FUNC_1(VAR_0, "%*phN\n", 14, VAR_3.sram);

 return 0;
}
