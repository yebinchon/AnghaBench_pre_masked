
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u16 ;
struct seq_file {struct mvpp2_port* private; } ;
struct mvpp2_prs_entry {int dummy; } ;
struct mvpp2_port {int id; struct mvpp2* priv; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {int valid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 int FUNC_3 (struct mvpp2_prs_entry*,int,unsigned char*,unsigned char*) ;
 unsigned long FUNC_4 (struct mvpp2_prs_entry*) ;
 int FUNC_5 (struct seq_file*,char*,unsigned char) ;
 int FUNC_6 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_0, void *VAR_1)
{
 struct mvpp2_port *VAR_2 = VAR_0->private;
 unsigned char VAR_3[2], VAR_4[2];
 struct mvpp2 *VAR_5 = VAR_2->priv;
 struct mvpp2_prs_entry VAR_6;
 unsigned long VAR_7;
 u16 VAR_8;
 int VAR_9;

 for (VAR_9 = FUNC_0(VAR_2->id);
      VAR_9 <= FUNC_1(VAR_2->id); VAR_9++) {
  FUNC_2(VAR_5, &VAR_6, VAR_9);

  VAR_7 = FUNC_4(&VAR_6);

  if (!VAR_5->prs_shadow[VAR_9].valid)
   continue;

  if (!FUNC_6(VAR_2->id, &VAR_7))
   continue;

  FUNC_3(&VAR_6, 2, &VAR_3[0], &VAR_4[0]);
  FUNC_3(&VAR_6, 3, &VAR_3[1], &VAR_4[1]);

  VAR_8 = ((VAR_3[0] & 0xf) << 8) + VAR_3[1];

  FUNC_5(VAR_0, "%u\n", VAR_8);
 }

 return 0;
}
