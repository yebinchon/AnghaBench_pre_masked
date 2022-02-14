
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cpuset {int partition_root_state; } ;





 struct cpuset* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct cpuset *VAR_2 = FUNC_0(FUNC_1(VAR_0));

 switch (VAR_2->partition_root_state) {
 case 129:
  FUNC_2(VAR_0, "root\n");
  break;
 case 130:
  FUNC_2(VAR_0, "member\n");
  break;
 case 128:
  FUNC_2(VAR_0, "root invalid\n");
  break;
 }
 return 0;
}
