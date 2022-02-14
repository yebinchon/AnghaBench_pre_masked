
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {int dummy; } ;
struct cgroup_fs_context {int ns; struct cgroup_fs_context* release_agent; struct cgroup_fs_context* name; } ;


 struct cgroup_fs_context* FUNC_0 (struct fs_context*) ;
 int FUNC_1 (struct fs_context*) ;
 int FUNC_2 (struct cgroup_fs_context*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct fs_context *VAR_0)
{
 struct cgroup_fs_context *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->name);
 FUNC_2(VAR_1->release_agent);
 FUNC_3(VAR_1->ns);
 FUNC_1(VAR_0);
 FUNC_2(VAR_1);
}
