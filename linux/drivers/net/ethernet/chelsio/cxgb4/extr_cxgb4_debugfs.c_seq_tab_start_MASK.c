
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_tab {scalar_t__ skip_first; } ;
struct seq_file {struct seq_tab* private; } ;
typedef scalar_t__ loff_t ;


 void* VAR_0 ;
 void* FUNC_0 (struct seq_tab*,scalar_t__) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_1, loff_t *VAR_2)
{
 struct seq_tab *VAR_3 = VAR_1->private;

 if (VAR_3->skip_first && *VAR_2 == 0)
  return VAR_0;

 return FUNC_0(VAR_3, *VAR_2);
}
