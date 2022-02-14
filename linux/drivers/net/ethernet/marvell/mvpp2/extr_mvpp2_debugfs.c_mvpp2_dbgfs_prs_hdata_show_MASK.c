
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mvpp2_dbgfs_prs_entry* private; } ;
struct mvpp2_prs_entry {int dummy; } ;
struct mvpp2_dbgfs_prs_entry {int tid; int priv; } ;


 int FUNC_0 (int ,struct mvpp2_prs_entry*,int ) ;
 int FUNC_1 (struct mvpp2_prs_entry*,int,unsigned char*,unsigned char*) ;
 int FUNC_2 (struct seq_file*,char*,int,unsigned char*,int,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct mvpp2_dbgfs_prs_entry *VAR_2 = VAR_0->private;
 struct mvpp2_prs_entry VAR_3;
 unsigned char VAR_4[8], VAR_5[8];
 int VAR_6;

 FUNC_0(VAR_2->priv, &VAR_3, VAR_2->tid);

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  FUNC_1(&VAR_3, VAR_6, &VAR_4[VAR_6], &VAR_5[VAR_6]);

 FUNC_2(VAR_0, "%*phN %*phN\n", 8, VAR_4, 8, VAR_5);

 return 0;
}
