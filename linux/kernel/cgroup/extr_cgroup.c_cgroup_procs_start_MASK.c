
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct cgroup {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {struct cgroup* cgroup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (struct seq_file*,int *,int) ;
 scalar_t__ FUNC_2 (struct cgroup*) ;
 TYPE_1__* FUNC_3 (struct seq_file*) ;

__attribute__((used)) static void *FUNC_4(struct seq_file *VAR_3, loff_t *VAR_4)
{
 struct cgroup *VAR_5 = FUNC_3(VAR_3)->cgroup;







 if (FUNC_2(VAR_5))
  return FUNC_0(-VAR_2);

 return FUNC_1(VAR_3, VAR_4, VAR_0 |
         VAR_1);
}
