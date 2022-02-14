
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct mvpp2_dbgfs_prs_entry* private; } ;
struct mvpp2_dbgfs_prs_entry {int tid; struct mvpp2* priv; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {scalar_t__ valid; } ;


 int FUNC_0 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct mvpp2_dbgfs_prs_entry *VAR_2 = VAR_0->private;
 struct mvpp2 *VAR_3 = VAR_2->priv;
 int VAR_4 = VAR_2->tid;

 FUNC_0(VAR_0, "%d\n", VAR_3->prs_shadow[VAR_4].valid ? 1 : 0);

 return 0;
}
