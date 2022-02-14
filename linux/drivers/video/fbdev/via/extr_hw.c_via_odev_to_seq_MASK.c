
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {int dummy; } ;
struct TYPE_3__ {int device; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,int ) ;

void FUNC_3(struct seq_file *VAR_1, u32 VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_2 & VAR_0[VAR_3].device) {
   if (VAR_4 > 0)
    FUNC_1(VAR_1, ',');

   FUNC_2(VAR_1, VAR_0[VAR_3].name);
   VAR_4++;
  }
 }

 FUNC_1(VAR_1, '\n');
}
