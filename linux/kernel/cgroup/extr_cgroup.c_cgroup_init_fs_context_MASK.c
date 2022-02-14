
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fs_context {int global; int user_ns; int * ops; int * fs_type; int * fs_private; } ;
struct cgroup_fs_context {TYPE_2__* ns; int kfc; } ;
struct TYPE_6__ {TYPE_1__* nsproxy; } ;
struct TYPE_5__ {int user_ns; } ;
struct TYPE_4__ {TYPE_2__* cgroup_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 struct cgroup_fs_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct fs_context *VAR_7)
{
 struct cgroup_fs_context *VAR_8;

 VAR_8 = FUNC_3(sizeof(struct cgroup_fs_context), VAR_1);
 if (!VAR_8)
  return -VAR_0;





 if (!VAR_6)
  FUNC_0();

 VAR_8->ns = VAR_5->nsproxy->cgroup_ns;
 FUNC_1(VAR_8->ns);
 VAR_7->fs_private = &VAR_8->kfc;
 if (VAR_7->fs_type == &VAR_3)
  VAR_7->ops = &VAR_4;
 else
  VAR_7->ops = &VAR_2;
 FUNC_4(VAR_7->user_ns);
 VAR_7->user_ns = FUNC_2(VAR_8->ns->user_ns);
 VAR_7->global = 1;
 return 0;
}
