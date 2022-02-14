
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct cpuset {int subparts_cpus; int effective_mems; int effective_cpus; int mems_allowed; int cpus_allowed; } ;
typedef int cpuset_filetype_t ;
struct TYPE_2__ {int private; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct cpuset* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct seq_file*) ;
 int FUNC_4 (struct seq_file*) ;
 int FUNC_5 (struct seq_file*,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_2, void *VAR_3)
{
 struct cpuset *VAR_4 = FUNC_1(FUNC_4(VAR_2));
 cpuset_filetype_t VAR_5 = FUNC_3(VAR_2)->private;
 int VAR_6 = 0;

 FUNC_6(&VAR_1);

 switch (VAR_5) {
 case 132:
  FUNC_5(VAR_2, "%*pbl\n", FUNC_0(VAR_4->cpus_allowed));
  break;
 case 129:
  FUNC_5(VAR_2, "%*pbl\n", FUNC_2(&VAR_4->mems_allowed));
  break;
 case 131:
  FUNC_5(VAR_2, "%*pbl\n", FUNC_0(VAR_4->effective_cpus));
  break;
 case 130:
  FUNC_5(VAR_2, "%*pbl\n", FUNC_2(&VAR_4->effective_mems));
  break;
 case 128:
  FUNC_5(VAR_2, "%*pbl\n", FUNC_0(VAR_4->subparts_cpus));
  break;
 default:
  VAR_6 = -VAR_0;
 }

 FUNC_7(&VAR_1);
 return VAR_6;
}
