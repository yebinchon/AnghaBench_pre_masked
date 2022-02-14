
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct mvpp2_port* private; } ;
struct mvpp2_prs_entry {int dummy; } ;
struct mvpp2_port {int id; struct mvpp2* priv; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {scalar_t__ lu; scalar_t__ udf; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 int FUNC_1 (struct mvpp2_prs_entry*,int,unsigned char*,unsigned char*) ;
 unsigned long FUNC_2 (struct mvpp2_prs_entry*) ;
 int FUNC_3 (struct seq_file*,char*,unsigned char*) ;
 int FUNC_4 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_5, void *VAR_6)
{
 struct mvpp2_port *VAR_7 = VAR_5->private;
 struct mvpp2 *VAR_8 = VAR_7->priv;
 struct mvpp2_prs_entry VAR_9;
 unsigned long VAR_10;
 int VAR_11, VAR_12;

 for (VAR_12 = VAR_2;
      VAR_12 <= VAR_1; VAR_12++) {
  unsigned char VAR_13[VAR_0], VAR_14[VAR_0];

  if (!VAR_8->prs_shadow[VAR_12].valid ||
      VAR_8->prs_shadow[VAR_12].lu != VAR_3 ||
      VAR_8->prs_shadow[VAR_12].udf != VAR_4)
   continue;

  FUNC_0(VAR_8, &VAR_9, VAR_12);

  VAR_10 = FUNC_2(&VAR_9);


  if (!FUNC_4(VAR_7->id, &VAR_10))
   continue;


  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
   FUNC_1(&VAR_9, VAR_11, &VAR_13[VAR_11],
           &VAR_14[VAR_11]);

  FUNC_3(VAR_5, "%pM\n", VAR_13);
 }

 return 0;
}
