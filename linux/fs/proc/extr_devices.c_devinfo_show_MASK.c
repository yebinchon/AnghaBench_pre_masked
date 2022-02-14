
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,int) ;
 int FUNC_1 (struct seq_file*,int) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 int VAR_3 = *(loff_t *) VAR_2;

 if (VAR_3 < VAR_0) {
  if (VAR_3 == 0)
   FUNC_2(VAR_1, "Character devices:\n");
  FUNC_1(VAR_1, VAR_3);
 }
 return 0;
}
