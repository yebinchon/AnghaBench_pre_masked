
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct mvpp2_port* private; } ;
struct mvpp2_prs_entry {int dummy; } ;
struct mvpp2_port {int id; struct mvpp2* priv; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {scalar_t__ valid; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 unsigned long FUNC_1 (struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct seq_file*,char*,int) ;
 scalar_t__ FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct mvpp2_port *VAR_3 = VAR_1->private;
 struct mvpp2 *VAR_4 = VAR_3->priv;
 struct mvpp2_prs_entry VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_0(VAR_3->priv, &VAR_5, VAR_7);

  VAR_6 = FUNC_1(&VAR_5);
  if (VAR_4->prs_shadow[VAR_7].valid && FUNC_3(VAR_3->id, &VAR_6))
   FUNC_2(VAR_1, "%03d\n", VAR_7);
 }

 return 0;
}
