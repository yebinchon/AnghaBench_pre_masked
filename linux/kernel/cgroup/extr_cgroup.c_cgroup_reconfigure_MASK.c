
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {int dummy; } ;
struct cgroup_fs_context {int flags; } ;


 int FUNC_0 (int ) ;
 struct cgroup_fs_context* FUNC_1 (struct fs_context*) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_0)
{
 struct cgroup_fs_context *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->flags);
 return 0;
}
