
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct meson_msr_id* private; } ;
struct meson_msr_id {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct meson_msr_id*,unsigned int*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int,unsigned int) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct meson_msr_id *VAR_3 = VAR_1->private;
 unsigned int VAR_4 = 0;
 int VAR_5, VAR_6;

 FUNC_2(VAR_1, "  clock                     rate    precision\n");
 FUNC_2(VAR_1, "---------------------------------------------\n");

 for (VAR_6 = 0 ; VAR_6 < VAR_0 ; ++VAR_6) {
  if (!VAR_3[VAR_6].name)
   continue;

  VAR_5 = FUNC_0(&VAR_3[VAR_6], &VAR_4);
  if (VAR_5 < 0)
   return VAR_5;

  FUNC_1(VAR_1, " %-20s %10d    +/-%dHz\n",
      VAR_3[VAR_6].name, VAR_5, VAR_4);
 }

 return 0;
}
