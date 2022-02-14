
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct cgroup {TYPE_1__* root; } ;
struct TYPE_4__ {struct cgroup* cgroup; } ;
struct TYPE_3__ {int release_agent_path; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct seq_file*) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct cgroup *VAR_3 = FUNC_0(VAR_1)->cgroup;

 FUNC_3(&VAR_0);
 FUNC_2(VAR_1, VAR_3->root->release_agent_path);
 FUNC_4(&VAR_0);
 FUNC_1(VAR_1, '\n');
 return 0;
}
