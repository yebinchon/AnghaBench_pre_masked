
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_open_file {int kn; } ;
struct cgroup {TYPE_1__* root; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int release_agent_path; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 struct cgroup* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct kernfs_open_file *VAR_3,
       char *VAR_4, size_t VAR_5, loff_t VAR_6)
{
 struct cgroup *VAR_7;

 FUNC_0(sizeof(VAR_7->root->release_agent_path) < VAR_1);

 VAR_7 = FUNC_1(VAR_3->kn, 0);
 if (!VAR_7)
  return -VAR_0;
 FUNC_3(&VAR_2);
 FUNC_5(VAR_7->root->release_agent_path, FUNC_6(VAR_4),
  sizeof(VAR_7->root->release_agent_path));
 FUNC_4(&VAR_2);
 FUNC_2(VAR_3->kn);
 return VAR_5;
}
