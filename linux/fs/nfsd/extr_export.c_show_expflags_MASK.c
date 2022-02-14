
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct flags {int flag; scalar_t__** name; } ;


 struct flags* VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_1, int VAR_2, int VAR_3)
{
 struct flags *VAR_4;
 int VAR_5, VAR_6 = 0;

 for (VAR_4 = VAR_0; VAR_4->flag; VAR_4++) {
  if (VAR_4->flag & ~VAR_3)
   continue;
  VAR_5 = (VAR_4->flag & VAR_2) ? 0 : 1;
  if (*VAR_4->name[VAR_5])
   FUNC_0(VAR_1, "%s%s", VAR_6++?",":"", VAR_4->name[VAR_5]);
 }
}
