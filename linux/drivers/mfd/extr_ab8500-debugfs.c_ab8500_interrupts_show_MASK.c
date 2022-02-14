
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct irqaction {int name; struct irqaction* next; } ;
struct irq_desc {struct irqaction* action; int name; } ;


 scalar_t__ VAR_0 ;
 struct irq_desc* FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct seq_file*,char*,int,...) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_4, void *VAR_5)
{
 int VAR_6;

 FUNC_3(VAR_4, "name: number:  number of: wake:\n");

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct irq_desc *VAR_7 = FUNC_0(VAR_6 + VAR_0);

  FUNC_1(VAR_4, "%3i:  %6i %4i",
      VAR_6,
      VAR_2[VAR_6],
      VAR_3[VAR_6]);

  if (VAR_7 && VAR_7->name)
   FUNC_1(VAR_4, "-%-8s", VAR_7->name);
  if (VAR_7 && VAR_7->action) {
   struct irqaction *VAR_8 = VAR_7->action;

   FUNC_1(VAR_4, "  %s", VAR_8->name);
   while ((VAR_8 = VAR_8->next) != ((void*)0))
    FUNC_1(VAR_4, ", %s", VAR_8->name);
  }
  FUNC_2(VAR_4, '\n');
 }

 return 0;
}
