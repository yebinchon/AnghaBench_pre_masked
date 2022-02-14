
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mvpp2_dbgfs_prs_entry* private; } ;
struct mvpp2_prs_entry {int dummy; } ;
struct mvpp2_dbgfs_prs_entry {int tid; int priv; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,struct mvpp2_prs_entry*,int ) ;
 unsigned int FUNC_1 (struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct seq_file*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct mvpp2_dbgfs_prs_entry *VAR_3 = VAR_1->private;
 struct mvpp2_prs_entry VAR_4;
 unsigned int VAR_5;

 FUNC_0(VAR_3->priv, &VAR_4, VAR_3->tid);

 VAR_5 = FUNC_1(&VAR_4);
 VAR_5 &= VAR_0;

 FUNC_2(VAR_1, "%02x\n", VAR_5);

 return 0;
}
