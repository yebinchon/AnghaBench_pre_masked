
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mvpp2_dbgfs_prs_entry* private; } ;
struct mvpp2_dbgfs_prs_entry {int tid; int priv; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct mvpp2_dbgfs_prs_entry *VAR_2 = VAR_0->private;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->priv, VAR_2->tid);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_1(VAR_0, "%d\n", VAR_3);

 return 0;
}
